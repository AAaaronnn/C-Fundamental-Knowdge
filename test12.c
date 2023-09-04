#include <stdio.h>
//-----------------------------------------------------------------------//
// 一级数组传参

// void print(int* p,int sz)
// {
//     int i = 0;
//     for(i = 0; i < sz; i++)
//     {
//         printf("%d", *(p+i));
//     }
// }
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int* p = arr;
//     int sz = sizeof(arr) / sizeof(arr[0]);

//     // p是一级指针
//     print(p,sz);
//     return 0;
// }

//-----------------------------------------------------------------------//
// 二级数组传参: 一级指针变量的地址就是二级指针

// void test(int** p1)
// {
//     **p1 = 20;
// }
// int main()
// {
//     int a = 10;
//     // p是一级指针
//     int *p = &a;
//     // pp是二级指针
//     int* *pp = &p;
//     int* arr[10] = {0}; // arr存放的元素类型是 int*
//     test(pp);
//     test(&p);
//     test(arr);
//     printf("%d\n",a);
//     return 0;
// }

//-----------------------------------------------------------------------//
// 函数指针 -> 指向函数的指针 -> 存放函数地址的指针

// int Add(int x, int y)
// {
//     return x + y;
// }
// int main()
// {
//     // pf是一个函数指针变量
//     int (*pf)(int , int) = &Add; // *pf说明是一个指针 、 (int , int)说明是指向的是一个函数，函数中的参数类型是int 、 int说明返回类型是int
//     int res1 = (*pf)(3,5); // 先对pf进行解引用得到函数，再传参
//     int res2 = pf(3,5); // Add 与 &Add等效，相当于Add==pf，而Add(3,5)就等效于pf(3,5)
//     printf("%d\n",res1);
//     printf("%d\n",res2);
//     // printf("%p\n",&Add);
//     // printf("%p\n",Add); // 结果一样
//     return 0;
// }
// 数组名 != &数组名  函数名 == 函数名

//-----------------------------------------------------------------------//
// "有趣"的代码

// (*( void (*p)() )0)( )
// 该函数无参，返回类型是void
// 1. void(*p)() -> 函数指针类型
// 2. ( void(*p)() )0 -> 对0进行强制类型转换，被解释为一个函数地址
// 3. *( void(*p)() )0 -> 对0地址进行解引用
// 4. (*( void (*p)() )0)( ) -> 调用0地址处的函数

// void (* signal(int , void(*)(int) ) ) (int)
// 1. signal先和()结合，说明signal是函数名
// 2. signal(int , void(*)(int) -> signal函数的第一个参数类型是int，第二个参数类型是函数指针，函数指针指向一个参数为int，返回类型是void
// 3. void(*           )(int) -> signal函数返回类型也是一个函数指针，函数指针指向一个参数为int，返回类型是void

//-----------------------------------------------------------------------//
// 函数指针数组 -> 存放函数指针的数组
// 整型指针 int *p  整型指针数组 int* arr[5]

// demo(1) -> 示例
// int Add(int x, int y)
// {
//     return x+y;
// }

// int Sub(int x, int y)
// {
//     return x-y;
// }

// int main()
// {
//     int (*pf1)(int,int) = Add; // 函数指针
//     int (*pf2)(int,int) = Sub;
//     int (*pfArr[2])(int,int) = {Add , Sub}; // 函数指针数组
//     return 0;
// }

// demo(2) -> 应用
// int Add(int x, int y)
// {
//     return x+y;
// }

// int Sub(int x, int y)
// {
//     return x-y;
// }
// int main()
// {
//     int input = 0;
//     do{    
//     int (*pf[3])(int,int) = {NULL, Add, Sub};
//     int x = 0;
//     int y = 0;
//     int res = 0;
//     printf("请选择 0 or 1 or 2:");
//     scanf("%d",&input);
//     if(input >= 1 && input <= 2)
//     {
//         printf("请输入两个数字:");
//         scanf("%d %d",&x, &y);
//         res = (pf[input])(x,y);
//         printf("%d\n",res);
//     }
//     else
//     {
//         printf("退出程序");
//         break;
//     }
//     }while(input);
//     return 0;
// }

//-----------------------------------------------------------------------//
// 指向函数指针数组的指针

// demo(1) -> 示例
int main()
{
    // p1指向整型数组的指针
    int arr[5]; // 数组元素是int 
    int (*p1)[5] = &arr;

    // p2指向整型数组的指针
    int* arr[5]; // 数组元素是int*
    int* (*p2)[5] = &arr;

    // 函数指针
    int (*p3)(int, int);
    // 函数指针数组 -> 存放函数指针
    int (*p4[2])(int, int);
    // 指向函数指针数组的指针
    int (* (*p5)[2])(int, int) = &p4; // 取出的是函数指针数组的地址 
    return 0;
}