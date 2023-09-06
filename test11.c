#include <stdio.h>
#include <stdlib.h>
//----------------------------------------------------//

// 高级宏定义

// demo(1) -> 不带参数的宏定义 - 可以用 #undef 来终止宏定义的作用域 - 宏也支持嵌套
// #define PI 3.14
// #define R 6371
// #define V PI * R * R * 4 / 3
// int main()
// {
//     int r;
//     float s;
//     printf("请输入圆的半径:");
//     scanf("%d", &r);

//     s = PI * r * r ;
//     printf("圆的面积是: %.2f\n", s);

//     printf("地球的体积大概是:%.2f\n ", V);

//     return 0;
// }

// demo(2) -> 带参数的宏定义 
// #define MAX(x,y) (((x) > (y)) ? (x) : (y))
// int main()
// {
//     int x ,y;
//     printf("请输入两个整数：");
//     scanf("%d%d", &x, &y);
//     printf("较大数为:%d\n", MAX(x,y));
//     return 0;
// }

// 宏定义中鲜为人知的操作

// # 和 ## -> 两个预处理运算符
// demo(3) -> #
// #define STR(s) # s // 第二个警号会将 s 转换成字符串形式
// int main()
// {
//     printf("%s\n", STR(hello));
//     return 0;
// }
// demo(4) -> ##
// #define TOGETHER(x,y) x ## y // ##可将两个参数连接起来
// int main()
// {
//     printf("%d\n", TOGETHER(5, 20));
//     return 0;
// }

//----------------------------------------------------//

// 结构体

// demo(5) -> 结构体声明、访问
// struct Book
// {
//     char title[128];
//     char author[40];
// }book;
// int main()
// {
//     printf("请输入书名：");
//     scanf("%s",book.title);
//     printf("请输入作者：");
//     scanf("%s",book.author);
//     return 0;
// }

// 结构体指针 符号: ->
// demo(6)
// struct Book
// {
//     char title[128];
//     char author[40];
// }book = {
//     "《小鱼》",
//     "小甲鱼"
// };
// int main()
// {
//     struct Book *pt;
//     pt = &book;
//     printf("书名：%s\n", pt->title);
//     printf("作者：%s\n", pt->author);
//     printf("书名：%s\n", book.title);
//     printf("作者：%s\n", book.author);
//     return 0;
// }

// 结构体指针 + 内存分配
// demo(7)
// struct Date
// {
//     int year;
//     int month;
// };
// int main()
// {
//     struct Date *date;
//     date = (struct Date *)malloc(sizeof(struct Date));
//     if (date == NULL)
//     {
//         printf("内存分配失败\n");
//         exit(1);
//     }

//     date->year = 2023;
//     date->month = 9;
//     printf("%d-%d\n", date->year, date->month);
//     return 0;
// }

//----------------------------------------------------//

// 单链表 =.=没懂
// struct Book
// {
//     char title[128];
//     char author[40];
//     struct Book *next;
// };

// void getInput(struct Book *book)
// {
//     printf("请输入书名:");
//     scanf("%s",book->title);
//     printf("请输入作者:");
//     scanf("%s",book->author);
// }

// void addBook(struct Book **library)
// {
//     struct Book *book, *temp;
//     book = (struct Book *)malloc(sizeof(struct Book));
//     if (book == NULL)
//     {
//         printf("内存分配失败\n");
//         exit(1);
//     }
//     getInput(book);

//     if (*library != NULL)
//     {
//         temp = *library;
//         *library = book;
//         book->next = NULL;
//     }
//     else
//     {
//         *library = book;
//     }
// }

// int main()
// {
//     struct Book *library = NULL;
//     addBook(&library);
//     return 0;
// }

//----------------------------------------------------//
// 内存池 -> 使用单链表

//----------------------------------------------------//

// typedef -> 定义别名

// demo(8)
// typedef int integer;
// int main()
// {
//     integer a;
//     int b;

//     a = 520;
//     b = a;
//     printf("a = %d\n", a);
//     printf("b = %d\n", b);
//     printf("size of a = %d\n", sizeof(a));
//     return 0;
// }

// (见csdn)

//----------------------------------------------------//

// 共用体(union) -> 共享一个内存地址 -> 内存占比最大为成员中最大尺寸
// demo(9)
// union Test
// {
//     int i;
//     double pi;
// };
// int main()
// {
//     union Test test;
//     test.i = 520;
//     test.pi = 3.14;
//     printf("addr of test.i is:%p\n", &test.i);
//     printf("addr of test.pi is:%p\n", &test.pi);
//     return 0;
// }

//----------------------------------------------------//

// 枚举(enum) -> enum 枚举类型名称 枚举变量1,枚举变量2
// demo(10)
// int main()
// {
//     enum Color {red = 10, green, blue};
//     enum Color rgb;
//     for (rgb = red; rgb <= blue; rgb++)
//     {
//         printf("rgb is %d\n", rgb);
//     }
//     return 0;
// }


//----------------------------------------------------//

// 位域 -> 在定义结构体时，在结构体成员后面使用冒号(:)和数字表示该成员所占的位数
// demo(11)
// int main()
// {
//     struct Test
//     {
//         unsigned int a:1;
//         unsigned int b:1;
//         unsigned int c:2;
//     };
//     struct Test test;
//     test.a = 0;
//     test.b = 1;
//     test.c = 2;
//     printf("a = %d, b = %d, c = %d\n",test.a, test.b, test.c);
//     printf("size of test = %p\n", sizeof(test));
//     return 0;
// }

//----------------------------------------------------//

// #include <stdio.h>
// int ADD(int arr[], int sz);
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("各元素之和为:%d\n", ADD(arr,size));
//     return 0;
// }
// int ADD(int arr[], int sz)
// {
//     int i = 0;
//     int sum = 0;
//     for (i = 0; i <= sz; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
