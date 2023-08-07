#include <stdio.h>
// 结构体初阶
//-------------------------------------------------------------------------

// // 创建类型
// struct Stu
// {
//     char name[20];
//     int age;
//     char id[20];
// } s1,s2; // s1和s2也是结构体变量
// // 此处的s1、s2是全局变量

// // 创建对象
// int main()
// {
//     struct Stu s = {"张三"  , 30 , "202205711"}; // s是局部变量
//     // 结构体成员的访问
//     printf("%d\n", s.age);
//     struct Stu *ps = &s;
//     printf("%c\n", (*ps).name);
//     printf("%c\n", ps -> name);
//     return 0;
// }

//-------------------------------------------------------------------------

// // 结构体传参时：传址调用 -> 64位计算机地址占4个字节
// //              传值调用 -> 占用字节比传址调用多

// // 函数调用的参数压栈
// // 栈 ； 一种数据结构 -> 先进的后出 后进的先出
// // 每一个函数的调用，都会在内存的栈区上开辟一块空间， 开辟空间的过程就是压栈操作， 要考虑字节占用
// // 除开 main 函数，其他函数调用完后都会释放空间

// struct Stu
// {
//     char name[20];
//     int age;
//     char id[20];
// };

// void print(struct Stu* t)
// {
//     printf("%s %d %d", t -> name, t -> age, t -> id);
// }

// int main()
// {
//     struct Stu s = {"张三"  , 30 , "202205711"}; 
//     print(&s);
//     return 0;
// }