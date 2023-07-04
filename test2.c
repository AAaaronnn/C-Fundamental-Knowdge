#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int g_1=10;

//-----------------------------------------------------------------------//
// 函数

// int Add(int x,int y)
// {
//    int z = 0;
//    z = x + y;
//    return z;
// }
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     scanf("%d%d",&num1,&num2);
//     int sum = Add(num1,num2);
//     printf("%d\n",sum);
// }

//-----------------------------------------------------------------------//
// 数组 - 一组相同类型的元素的集合

// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     char ch[5] = {'a','b','c'}; //不完全初始化，其余的默认为0
//     printf("%c",ch);
//     return 0;
// }

//-----------------------------------------------------------------------//
// 操作符

// c语言中规定 ： 0表示假 ，非0表示真
// 算术操作符：+ - * / %
// 移位操作符：>> <<
// 位操作符：& 按位与  | 按位或   ^ 按位异或
// 逻辑操作符： && ||

// 按位取反操作符：~ —— 把所有二进制位中数字1变成0，0变成1
// int main()
// {
//     int a=2;
//     printf("%d\n",~a);
//     return 0;
// }
// 整数在内存中存储的是补码 ，打印出来的是原码，一个整数的二进制表示有3种：
// 例如：                    -1                      1（正数的原码、反码、补码相同）
// 原码         : 10000000 00000000 00000001         00000000 00000000 00000001 
// 反码         : 11111111 11111111 11111110         00000000 00000000 00000001 
// 补码(反码+1) : 11111111 11111111 11111111         00000000 00000000 00000001 


//                               —— exp1成立，exp2计算，最终是exp2的结果
// 条件操作符：exp1 ? exp2 : exp3 
//                               —— exp1不成立，exp3计算，最终是exp3的结果
// int main()
// {
//     int a=0;
//     int b=3;
//     int max=0;
//     max = a > b ? a : b;  // exp1:a>b exp2:a exp3:b
//     return 0;
// }

// 逗号表达式： exp1, exp2, exp3,...expN
// int main()
// {
//     int a=0;
//     int b=3;
//     int c=5;
//     int d=(a=b+2 , c=a-4 , b=c+2);
//     //从左到右依次计算，整个表达式的结果是最后一个表达式的结果
//     printf("%d\n",d);
//     return 0;
// }

// 下表引用操作符
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     printf("%d\n",arr[5]); 
//     return 0;
// }

// 函数调用操作符: 函数名后面的()就是函数调用操作符
// int main()
// {
//     printf("hehe\n");
//     return 0;
// }

//-----------------------------------------------------------------------//
// c语言常见关键字

// define与include都不是关键字，是预处理指令
// extern : 用来申明外部符号
// signed : 描述的是数据是有符号的
// union : 共用体
// void : 空

// auto : 每个局部变量都是auto修饰的
// int main()
// {
//     {
//         auto int a = 10; // 也可以除去auto
//         printf("%d\n",a);
//     }
//     return 0;
// }


// register ； 寄存器关键字 —— 提高读取数据速度
// int main()
// {
//     register int num = 10; //建议num的值存储在寄存器中
//     return 0;
// }

// typedef ； 类型重命名
// typedef unsigned int u_int; //给已定义的变量类型起个别名: u_int就是unsigned int的别名
// int main()
// {
//     unsigned int num = 100;
//     u_int num2 = 100;
//     return 0;
// }

// static :  静态地修饰全局变量 : 使得全局变量只能在自己所在的源文件内部可以使用
// static :  静态地修饰全局变量+函数 ： （效果如上）
// static :  静态地修饰局部变量 : 保存局部变量之前的值
// void test()
// {
//     static int a = 1;
//     int b = 1;
//     a++;
//     b++;
//     printf("a = %d\n",a);
//     printf("b = %d",b);
// }

// int main()
// {
//     int i = 0;
//     while(i<10)
//     {
//         test();
//         i++;
//     }
//     return 0;
// }

//-----------------------------------------------------------------------//
// #define定义常量和宏

// 1.define定义符号
// #define Max 100
// int main()
// {
//     printf("%d\n",Max);
//     return 0;
// }

// 2.define定义宏
// #define ADD(X,Y) (X+Y)
// int main()
// {
//     printf("%d\n",4*ADD(2,3));
//     return 0;
// }
//-----------------------------------------------------------------------//
