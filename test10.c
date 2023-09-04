#include <stdio.h>
// 数据在内存中的存储
//-----------------------------------------------------------------------//

// 1.数据类型介绍
// 整型、浮点型、指针类型、空类型(void)
// 构造类型 -> 数组 、 结构体类型(struct) 、 枚举类型(enum) 、联合体类型(union)


//-----------------------------------------------------------------------//

// 2.整型在内存中的存储:原码、反码、补码
// 对于整数二进制有3种表示形式：原码、反码、补码
// 正整数：原码、反码、补码相同
// 负整数：原码、反码、补码需要计算
// 整数在内存中存储的是补码

// demo(1) -> 示例
// int main()
// {
//     int a = -10;
//     // 原码 -> 10000000 00000000 00000000 0001010
//     // 反码 -> 11111111 11111111 11111111 11101101
//     // 补码 -> 11111111 11111111 11111111 11101110
//     return 0;
// }

// demo(2) -> signed 与 unsigned
// int main()
// {
//     char a = -1;
//     // 原码 -> 10000000 00000000 00000000 00000001
//     // 反码 -> 11111111 11111111 11111111 11111110
//     // 补码 -> 11111111 11111111 11111111 11111111
//     // char类型 -> 只有8个bit位 -> 11111111
//     // 整型提升(提升后为补码) -> 11111111 11111111 11111111 11111111
//     // 反码 -> 11111111 11111111 11111111 11111110
//     // 输出原码 -> 10000000 00000000 00000000 00000001
//     signed char b = -1;
//     unsigned char c = -1;
//     // 原码 -> 10000000 00000000 00000000 00000001
//     // 反码 -> 11111111 11111111 11111111 11111110
//     // 补码 -> 11111111 11111111 11111111 11111111
//     // char类型 -> 只有1个字节，8个bit位 -> 11111111
//     // 无符号整型提升 -> 右边直接补0 -> 00000000 00000000 00000000 11111111
//     // 正数原码、反码、补码相同 -> c的输出结果为255
//     printf("a=%d,b=%d,c=%d",a,b,c);
//     return 0;
// }

//-----------------------------------------------------------------------//

// 3.大小端字节序介绍及判断
// 大端存储模式：指数据的低位保存在内存的高地址中，而数据的高位保存在内存的低地址中
// 小端存储模式：指数据的高位保存在内存的高地址中，而数据的低位保存在内存的低地址中

// demo(1) -> 代码实现判断机器的字节序
// int check_sys()
// {
//     int a = 1; // 10000000 00000000 00000000 00000001 -> 每8个bit为一个字节
//     char* p = (char*)&a; // char*取变量的第一个字节
//     return *p;
// }
// int main()
// {
//     int res = check_sys();
//     if (res == 1)
//     {
//         printf("小端\n"); // a的小端：01 00 00 00
//     }
//     else
//     {
//         printf("大端\n"); // a的大端：00 00 00 01
//     }
//     return 0;
// }

//-----------------------------------------------------------------------//

// 4.浮点型在内存中的存储解析

// demo(1)
// int main()
// {
//     int n = 9; // 4个字节
//     float* p = (float*)&n;
//     printf("n的值为:%d\n", n); // 9
//     printf("*p的值为:%f\n", *p); // 0.000000

//     *p = 9.0; // 4个字节
//     printf("n的值为:%d\n", n); // 乱数
//     printf("*p的值为:%f\n", *p); // 9.00000
//     return 0;
// }