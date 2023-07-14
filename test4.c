#include <stdio.h>
//-----------------------------------------------------------------------//

// 函数 : 实参可以是常量、变量、表达式、函数等

// (1)比较两个数的大小
// int get_max(int x , int y) // 传值调用
// {
//     int z = 0;
//     if (x > y)
//     {
//         z = x;
//     }
//     else
//     {
//         z = y;
//     }
//     return z;
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     // 函数的调用
//     int max = get_max(a , b);
//     printf("max = %d\n", max);
//     return 0;
// }


// (2)交换两个整型变量的值
// 代码有问题：在函数Swap中 , 重新创建了x、y的空间地址 , 与main()函数中的a、b地址不同 , 其中交换的值也只是x、y的值 , 不影响main()函数中的a、b值
// void Swap(int x , int y) // 函数返回类型处写void , 表示这个函数不返回任何值 , 也不需要返回
// {
//     int z = 0;
//     z = x;
//     x = y;
//     y = z;
// }   
// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("交换前:a=%d b=%d",a,b);
//     Swap(a , b);
//     printf("交换后:a=%d b=%d",a,b);
//     return 0;
// }

// 修改更新
void Swap(int* pa , int* pb) // 传址调用
{
    int z = 0;
   z = *pa;
   *pa = *pb;
   *pb = z;
}   
int main()
{
    int a = 10;
    int b = 20;
    printf("交换前:a=%d b=%d",a,b);
    Swap(&a , &b);
    printf("交换后:a=%d b=%d",a,b);
    return 0;
}
