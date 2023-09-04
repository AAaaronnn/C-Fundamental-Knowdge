#include <stdio.h>
//-----------------------------------------------------------------------//
// 联合体 -> 公用空间

// union Un
// {
//     char c;
//     int i;
// };
// int main()
// {
//     union Un u;
//     printf("%p\n ", &(u.c));
//     printf("%p\n ", &(u.i));
//     return 0;
// }

//-----------------------------------------------------------------------//
// 动态内存分配

#include <stdlib.h>
// malloc -> 申请动态内存空间 -> void *malloc(size_t size) -> size_t指申请内存空间大小
// int main()
// {
//     int *p;
//     p = (int *)malloc(sizeof(int));
//     if(p==NULL)
//     {
//         printf("分配内存失败\n");
//         exit(1);
//     }
//     printf("请输入一个整数:");
//     scanf("%d",p);
//     printf("输入的整数是：%d\n",*p);
//     return 0;
// }

// free -> 释放动态内存空间 -> void free(void *p) -> 释放由malloc、calloc、realloc函数申请的内存空间
// int main()
// {
//     int *p;
//     p = (int *)malloc(sizeof(int));
//     if(p==NULL)
//     {
//         printf("分配内存失败\n");
//         exit(1);
//     }
//     printf("请输入一个整数:");
//     scanf("%d",p);
//     free(p);
//     printf("输入的整数是：%d\n",*p);
//     return 0;
// }

// calloc -> 申请并初始化一系列内存空间 -> void *calloc(size_t nmemb, size_t size)
// int *p = (int *)calloc(8, sizeof(int)) 
//              ||
// int *p = (int *)malloc(8 * sizeof(int))
// memset(p, 0, 8 * sizeof(int)) // 初始化内存空间函数


// realloc -> 重新分配内存空间 -> void *realloc(void *p, size_t size)
// int main()
// {
//     int i,num;
//     int count = 0;
//     int *p = NULL; //必须初始化为NULL

//     do
//     {
//         printf("请输入一个整数(输入-1表示结束):");
//         scanf("%d", &num);
//         count++;

//         p = (int *)realloc(p, count * sizeof(int));
//         if (p == NULL)
//         {
//             exit(1); // exit(1)表示异常退出，在退出前可以给出一些提示信息，或在调试程序中察看出错原因
//         }
//         p[count-1] = num;
//     }while(num != -1);
//     free(p);
//     return 0;
// }


// 1.对NULL指针的解引用操作
// 2.对动态开辟空间的越界访问
// 3.使用free释放非动态开辟的空间
// 4.使用free释放动态内存中的一部分
// 5.对同一块动态开辟的空间多次释放
// 6.动态开辟空间忘记释放

//-----------------------------------------------------------------------//
// 局部变量与全局变量
// void func();

// int a, b = 520;

// void func()
// {
//     int a = 880;
//     int b = 20;
//     printf("In func , a = %d, b = %d\n", a ,b);
// }
// int main()
// {
//     printf("In main , a = %d, b = %d\n", a ,b);
//     func();
//     printf("In main , a = %d, b = %d\n", a ,b); // 全局变量中a没有定义，会被修改
//     return 0;
// }
//-----------------------------------------------------------------------//
//        堆与栈的区别
//    堆              栈
// 需要手动申请    系统自动分配
// 需要手动释放    系统自动释放