# GDB 调试器入门指南

GDB (GNU Debugger) 是一个强大的开源调试工具，用于调试C、C++等语言编写的程序。本文将介绍GDB的基本用法，帮助你高效地调试程序。

## 什么是GDB？

GDB是GNU项目的一部分，它允许你观察程序在运行时内部发生的事情，或者程序崩溃时正在做什么。主要功能包括：

- 启动程序并指定可能影响其行为的条件
- 使程序在指定条件下停止
- 检查程序停止时发生了什么
- 修改程序中的内容，尝试纠正错误并继续执行

## 编译程序以使用GDB

要使用GDB调试程序，需要在编译时包含调试信息：

```bash
gcc -g program.c -o program
```

`-g`选项告诉编译器生成调试信息，这对GDB至关重要。

## 基本使用流程

### 1. 启动GDB

```bash
gdb program
```

这将启动GDB并加载可执行文件`program`。

### 2. 设置断点

断点是程序执行到指定位置时暂停的点。

```
(gdb) break main         # 在main函数起始处设置断点
(gdb) break filename.c:20 # 在源文件第20行设置断点
(gdb) break function_name # 在函数开始处设置断点
```

### 3. 运行程序

```
(gdb) run                # 运行程序
(gdb) run arg1 arg2      # 带参数运行程序
```

程序将一直运行，直到遇到断点、出现错误或正常结束。

### 4. 检查程序状态

当程序在断点处停止时，可以检查变量值：

```
(gdb) print variable_name  # 打印变量值
(gdb) display variable_name # 每次停止时自动显示变量值
(gdb) info locals          # 显示所有本地变量
(gdb) backtrace            # 显示函数调用栈
```

### 5. 控制程序执行

```
(gdb) next        # 执行当前行，如果有函数调用则不进入函数内部
(gdb) step        # 执行当前行，如果有函数调用则进入函数
(gdb) continue    # 继续执行直到下一个断点
(gdb) finish      # 执行直到当前函数返回
```

### 6. 查看源代码

```
(gdb) list        # 显示当前行周围的源代码
(gdb) list 1,20   # 显示1到20行的源代码
```

## 高级功能

### 条件断点

只有当特定条件满足时才触发的断点：

```
(gdb) break 10 if i == 5  # 当i等于5时在第10行暂停
```

### 监视点

当变量值改变时暂停程序：

```
(gdb) watch variable_name  # 当变量值改变时暂停
```

### 捕获点

当特定事件发生时暂停程序：

```
(gdb) catch throw         # 当抛出异常时暂停
```

### 修改变量值

在调试过程中可以修改变量的值：

```
(gdb) set variable_name = new_value
```

## 调试段错误

对于段错误(Segmentation Fault)，GDB非常有用：

1. 编译程序并加载到GDB：
   ```bash
   gcc -g program.c -o program
   gdb program
   ```

2. 运行程序直到崩溃：
   ```
   (gdb) run
   ```

3. 程序崩溃后，查看崩溃位置：
   ```
   (gdb) backtrace
   ```

4. 检查变量值和问题区域：
   ```
   (gdb) frame N  # 切换到栈帧N
   (gdb) print var  # 查看可能导致问题的变量
   ```

## 常用GDB命令速查表

| 命令 | 简写 | 功能 |
|------|------|------|
| break | b | 设置断点 |
| run | r | 运行程序 |
| continue | c | 继续执行 |
| next | n | 执行下一行，不进入函数 |
| step | s | 执行下一行，进入函数 |
| print | p | 打印变量值 |
| backtrace | bt | 显示调用栈 |
| list | l | 显示源代码 |
| info break | i b | 显示所有断点 |
| delete | d | 删除断点 |
| quit | q | 退出GDB |

## 使用GDB的实际例子

假设有以下有bug的C程序 `example.c`：

```c
#include <stdio.h>

void process(int* arr, int size) {
    for (int i = 0; i <= size; i++) {  // 错误：应为 i < size
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    process(numbers, 5);
    return 0;
}
```

调试步骤：

1. 编译程序：
   ```bash
   gcc -g example.c -o example
   ```

2. 启动GDB：
   ```bash
   gdb example
   ```

3. 在`process`函数设置断点：
   ```
   (gdb) break process
   ```

4. 运行程序：
   ```
   (gdb) run
   ```

5. 在循环内设置断点：
   ```
   (gdb) break example.c:5
   ```

6. 继续执行直到循环断点：
   ```
   (gdb) continue
   ```

7. 使用`next`步进观察循环变量：
   ```
   (gdb) next
   (gdb) print i
   ```

8. 监视数组访问：
   ```
   (gdb) print arr[i]
   ```

9. 当`i`超过数组边界时，你会看到问题所在。

## 总结

GDB是一个强大的调试工具，能帮助开发者找到程序中的错误。虽然初学时命令行界面可能看起来有些复杂，但掌握基本命令后，你会发现它是解决编程问题的得力助手。

对于习惯图形界面的开发者，许多IDE（如VS Code、Eclipse等）提供了GDB的图形前端，但了解GDB的基本命令仍然很有价值，特别是当你需要在没有图形界面的环境中工作时。

随着经验的积累，你可以探索GDB更高级的功能，如Python脚本集成、远程调试和多线程调试等。