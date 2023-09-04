#include <stdio.h>
// 指针进阶
//-----------------------------------------------------------------------//

// 字符指针 -> 指向整型的指针 -> char* p

// demo(1) -> 示例
// int mian()
// {
//     char ch = 'q';
//     char* pc = &ch;

//     // 本质是把 "hello world" 的首字符的地址存储到ps中
//     char* ps = "hello world";
//     char arr[] = "hello world"; // 数组的本质也是存储的其首字符地址
//     printf("%c\n", *ps);
//     return 0;
// }

// demo(2) -> ‘字符串是常量’
// int main()
// {
//     // 对于数组来说 -> 字符串是变量字符串 -> 即在内存中指的地址是不一样的
//     char str1[] = "hello world";
//     char str2[] = "hello world";
//     // 对于指针来说 -> 字符串是常量字符串 -> 即只要字符串内容一样，在内存中指的地址就是一样的
//     char* str3 = "hello world";
//     char* str4 = "hello world";

//     if (str1 == str2)
//         printf("str1 and str2 are the same\n");
//     else
//         printf("str1 and str2 are not  the same\n");
//     if (str3 == str4)
//         printf("str3 and str4 are the same\n");
//     else 
//         printf("str1 and str2 are not the same\n");
//     return 0;
// }

//-----------------------------------------------------------------------//

// 指针数组 -> 本质是数组，数组中存放的元素是指针(地址) -> int/char/...* p[]

// demo(1) -> 示例
// int main()
// {
//     int* arr[4]; // 存放的元素是整型指针的数组 -> [int* int* int* int*]
//     return 0;
// } 

// demo(2) -> 应用
// int main()
// {
//     int a[] = {1,2,3,4,5}; // 数组的本质也是存储的其首字符地址
//     int b[] = {2,3,4,5,6};
//     int c[] = {3,4,5,6,7};
//     int* arr[3] = {a,b,c}; // 存放每个数组的第一个元素的地址

//     int i = 0;
//     int j = 0;
//     for (i = 0;i < 3; i++)
//     {
//         for (j = 0;j < 5; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//-----------------------------------------------------------------------//

// 数组指针 -> 指向数组的指针 -> 存放的是数组的地址 -> int/char/... (*p)[]

// demo(1) -> 示例
// int main()
// {
//     int arr[10] = {1,2,3,4,5};
//     // parr就是一个数组指针 -> (*)说明是一个指针 、 []说明指向的是数组 、 int说明数组元素为整型
//     int (*parr)[10] = &arr; // &arr取出的是整个数组的地址 <-> arr取出的是数组的第一个元素的地址

//     return 0;
// }

// demo(2) -> &arr 与 arr区别
// int main()
// {
//     int arr[10] = {0};

//     int* p1 = arr; // p1 指向 arr 数组的第一个元素的地址
//     int (*p2)[10] = &arr; // p2 指向 arr 整个数组的地址
//     printf("%p\n", p1);
//     printf("%p\n", p1 + 1); // p1 向后跳过4个字节

//     printf("%p\n", p2);
//     printf("%p\n", p2 + 1); // p2 向后跳过40个字节
//     return 0;
// }

// demo(3) -> 数组指针的访问
// 一维数组
// int main()
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9};
//     int (*pa)[10] = &arr; // pa 存入的是整个数组的地址
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d ", *((*pa)+i)); // *pa 相当于解引用整个数组得到数组首元素地址 
//     }
//     return 0;
// }

// 二维数组
// void print(int (*p)[5] , int r , int c)
// {
//     int i = 0;
//     int j = 0;
//     for (i = 0;i < r; i++)
//     {
//         for (j = 0;j < c;j++)
//         {
//             printf("%d ", *(*(p+i))+j); // p + i得到第 i 行的首元素地址 ， 解引用后得到每行首元素地址 ， *(p+i)+j 得到第 j 列的元素地址 ， 再解引用获得值
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//     print(arr,3,5); // 传入的 arr 相当于传入的是首元素地址(相当于第一行的地址 <- 是一维数组的地址)
//     return 0;
// }

// demo(3)
// int (*parr[10])[5] -> parr是一个能存储10个数组指针的数组，每个数组指针指向一个数组，数组5个元素，每个元素是int类型