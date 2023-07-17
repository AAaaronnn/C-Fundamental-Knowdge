#include <stdio.h>
//-----------------------------------------------------------------------//
// 函数的调用
// 一个函数不写返回类型 ， 默认为int类型

// demo(1)打印100-200之间的素数
// 如果是素数:返回1 不是素数:返回0
// int is_prime(int n)
// {
//     int j = 0;
//     for (j = 2; j < n;j++)
//     {
//         if (n % j ==0)
//         return 0;
//     }
//     return 1;
// }
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for (i = 100;i <= 200; i++)
//     {
//         if (is_prime(i) == 1)
//         {
//             printf("%d\n" , i);
//             count++;
//         }
//     }
//     printf("count = %d\n" , count);
// }


// demo(2)判断是否是闰年
// 如果是闰年：返回1  不是闰年：返回0
// int is_leap_year(int z)
// {
//     if ((z % 4 == 0 && z % 100 != 0) || (z % 400 == 0))
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     int y = 0;
//     for (y = 1000 ; y <= 2000; y++)
//     {
//         if (is_leap_year(y) == 1)
//         {
//             printf("%d ", y);
//         }
//     }
//      return 0;
// }


// dmeo(3)实现一个整型有序数组的二分查找
// 找到就返回位置的下标
// 找不到就返回-1
// int binary_search(int a[] , int k , int s)
// {
//     int left = 0;
//     int right = s - 1;
//    while (left <= right)
//    {
//     int mid = (left + right)/2;
//     if (a[mid] > k)
//     {
//         right = mid - 1;
//     }
//     else if(a[mid] < k)
//     {
//         left = mid +1;
//     }
//     else
//     {
//         return mid;
//     }
//    }
//    return -1;// 找不到
// }
// int main()
// {
//     int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//     int key = 17; // 需要查找的数组下标
//     int sz = sizeof(arr) / sizeof(arr[0]); // 计算数组的元素个数  sizeof(arr) : 10个整型数字，为40  sizeof(arr[0]):除以一个字节大小，为4
//     int ret =binary_search(arr , key , sz); // 传进去的arr本质上传的是arr数组的首元素地址
//     if (-1 == ret)
//     {
//         printf("找不到\n");
//     }
//     else
//     {
//         printf("找到了,下标是：%d\n",ret);
//     }
//     return 0;
// }


// demo(4)写一个函数，每调用一次这个函数,就会将num的值增加1
// void Add(int *p)
// {
//     (*p)++;
// }
// int main()
// {
//     int num = 0;
//     Add(&num); // 只有传入num的地址才能形成对main函数中的num的值进行修改
//     printf("%d\n" , num);
//     Add(&num);
//     printf("%d\n" , num);
//     return 0;
// }

//-----------------------------------------------------------------------//
// 函数的嵌套调用与链式访问(函数不能嵌套定义)

// 函数嵌套调用
// demo(1)
// void test2()
// {
//     printf("hehe\n");
// }
// void test1()
// {
//     int i = 0;
//     for (i ; i <= 3 ; i++)
//     {
//         test2();
//     }
// }
// int main()
// {
//     test1();
//     return 0;
// }

// 函数链式访问 : 把一个函数的返回值作为另一个函数的参数
// demo(2)
// int main()
// {
//     // int len = strlen("abc\n");
//     // printf("%d",len);
//     // 链式访问
//     printf("%d\n",strlen("abd"));
//     return 0;
// }

// demo(3)
// int main()
// {
//     printf("%d",printf("%d",printf("%d",43))); // printf()返回的是打印在屏幕上的字符个数 , 即最里面的printf打印43但是返回的是2
//     return 0;
// }

//-----------------------------------------------------------------------//
// 函数的声明与定义

// 函数声明:告诉编译器函数名、函数参数、返回类型
// demo(1)
// int main()
// {
//     int a = 10;
//     int b = 20;
//     // 函数的声明
//     int Add(int a, int b);
//     int c = Add(a , b);
//     printf("%d" , c);
//     return 0;
// }
// int Add(int a , int b)
// {
//     return a + b;
// }

// demo(2)利用头文件实现函数的声明与调用
// #include "add.h"
// #include "add.c"
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = Add(a , b);
//     printf("%d" , c);
//     return 0;
// }

//-----------------------------------------------------------------------//
// 函数递归:必须添加递归条件，且每次调用递归后都逼近条件

// demo(1)打印输出整型数字的每一位
// void print(unsigned int n)
// {
//     if (n > 9)
//     {
//         print(n / 10);
//     }
//     printf("%d " , n % 10);
// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%u" , &num); // 1234
//     // 递归 - 函数自己调用自己
//     print(num);
//     return 0;
// }

// demo(2)写一个递归函数DigitSum(n),输入一个非负整数,返回组成它的数字之和
// int DigitSum(int n)
// {
//     if (n > 9)
//     {
//         return DigitSum(n / 10) + n % 10;
//     }
//     else
//     {
//         return n;
//     }
// }
// int main()
// {
//     int num = 1792;
//     int sum = DigitSum(num);
//     printf("%d\n" , sum);
//     return 0;
// }

// 递归实现n的k次方
// double Pow(int n , int k)
// {
//     if (0 == k)
//     {
//         return 1.0;
//     }
//     else if (k > 0)
//     {
//         return n * Pow(n, k - 1);
//     }
//     else
//     {
//         return 1.0 / (Pow(n, -k)); // 当k为负数时,例如k = -3,n = 2,此时Pow即为(2,3)
//     }
// }
// int main()
// {
//     int n = 0;
//     int k = 0;
//     scanf("%d %d",&n,&k);
//     double ret = Pow(n,k);
//     printf("%lf\n",ret);
//     return 0;
// }