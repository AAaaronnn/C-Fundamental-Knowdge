//-----------------------------------------------------------------------//

//结构体可以让c语言创建新的类型出来
#include <stdio.h>
// struct Stu
// {
//     char name[20]; //成员变量
//     int age;
//     double score;
// };
// int main()
// {
//     struct Stu s = {"张三" , 20 , 85.6}; //结构体的创建与初始化
//     printf("1: %s %d %lf\n" , s.name , s.age , s.score); // %lf打印双精度浮点型
//     struct Stu *ps = &s;
//     printf("2: %s %d %1f\n" , (*ps).name , (*ps).age , (*ps).score);
//     printf("3: %s %d %1f\n" , ps->name , ps->age , ps->score); //结构体指针 -> 成员变量名
//     return 0;
// }

//-----------------------------------------------------------------------//

// c语言是结构化的程序设计语言 : 顺序结构 、 选择结构 、 循环结构 

// 分支 : 1.if 2.switch
// 循环 : 1.while 2.for 3.do while
// c语言表达真假 : 非0就是真 0就是假

//                                                                           if 分支语句
// 易错-------打印hehe
// int main()
// {
//     int a = 0;
//     int b = 2;
//     if ( a == 1 )
//       if ( b == 2) // 与else对应 : else与最近的if匹配
//         printf("hehe\n");
//       else 
//         printf("haha\n");
//     return 0;
// }

// 易错-------打印hehe
// int main()
// {
//     int num = 3;
//     if (num =  5)
//       printf("hehe\n");
//     return 0;
// }

// 修改如下
// int main()
// {
//     int num = 3;
//     if (5 == num);
//       printf("hehe\n");
//     return 0;
// }

//                                                                           switch 分支语句
// (2)
// case是入口 ， break是出口
// int main()
// {
//     int day = 0;
//     scanf("%d" , &day);
//     switch (day)
//     {
//         case 1:
//         printf("星期一\n");
//         break;
//         case 2:
//         printf("星期二\n");
//         break;
//         case 3:
//         printf("星期三\n");
//         break;
//         case 4:
//         printf("星期四\n");
//         break;
//         case 5:
//         printf("星期五\n");
//         break;
//         case 6:
//         printf("星期六\n");
//         break;
//         case 7:
//         printf("星期天\n");
//         break;
//     default:
//         printf("输入错误\n");
//         break;
//     }
//     return 0;
// }


//                                                                           while 循环语句
// (1)
// int main()
// {
//     int i = i;
//     while (i <= 10)
//     {
//         if (5 == i)
//         break;
//         printf("%d", i);
//         i++;
//     }
//     return 0;
// }

// (2)
int main()
{
    int ch = 0;
    // ctrl+z -- getchar()就读取结束

    while ((ch = getchar()) != EOF) // getchar()获取用户在终端输入的字符，且每次只能读取一个字符，遇到\n后自动结束进程  EOF : End Of File 常常用于判断是否到达了文件末尾或输入流末尾
    {
        putchar(ch); // putchar()打印括号里面的字符
    }
    // 整个程序中 ，假设用户输入A , 相当于输入 A\n , getchar()
    return 0;

}