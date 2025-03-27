# int 类型的最值

```c
#include <stdio.h>
#include <limits.h>

int main() {
    printf("int 最小值: %d\n", INT_MIN);
    printf("int 最大值: %d\n", INT_MAX);
    return 0;
}
```

使用limits头文件，可以获取到int类型的最小值和最大值。

最小值为-2147483648，也就是-2^31次方。

最大值为2147483647，也就是2^31次方-1。

# double浮点数能精确到多少位小数？

符合IEEE 754标准的双精度浮点数，有效数字位数为52位。

指数位数为11位。符号位1位。

一共是64位。

对于double不能简单地说是精确到多少位小数，因为它是二进制的，有些十进制小数是无法精确表示的。

# double最大正数值和最小正数值

```c
#include <stdio.h>
#include <float.h>

int main() {
    printf("double 最小正数值: %e\n", DBL_MIN);
    printf("double 最大正数值: %e\n", DBL_MAX);
    return 0;
}
```
使用float头文件，可以获取到double类型的最小正数值和最大正数值。

double最大正数值为1.797693e+308。

double最小正数值为2.225074e-308。

# 浮点数占位符
`%f`是float，默认保留6位小数。

`%lf`是double，双精度的浮点数，还是保留6位小数。

# 左移与右移

左移也就是`<<`，两个箭头指向左边，乘以2。比如`2<<2`就是4。

右移也就是`>>`，两个箭头指向右边，是除以2。比如`2>>2`就是1。