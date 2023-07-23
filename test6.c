#include <stdio.h>
//-----------------------------------------------------------------------//
// 数组 -> 一组相同类型元素的集合
// 数组的创建方式：type_t + (-> 指数组的元素类型) + arr_name + [const_n] (-> 是一个常量表达式，用来指定数组的大小)

// demo(1)一维数组 -> 1.内存中是连续存放的 2.随着数组下标的增长, 地址是由低到高变化的,  变化规律由定义的数组类型决定 (-> 例如:int类型 每个数之间差4个字节)
// int main()
// {
//     char ch1[5] = "bit"; // b i t \0 \0 
//     char ch2[] = "bit"; // b i t \0
//     char ch3[] = {'b' , 'i' , 't'}; // b i t
//     // 一维数组长度的访问
//     int arr1[10] = { 0 };
//     int sz = sizeof(arr1) / sizeof(arr1[0]); // 每个整型数占4个字节，sizeof(arr)获取整个数组字节总数，sizeof(arr[0])获取其中一个字节占比
//     printf("%d\n", sz);
//     // 一维数组的访问
//     int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//     int *p = arr2; // 数组名是数组首元素的地址 
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         printf("%d \n", *p);
//         p++;
//     }
//     return 0;
// }

//-----------------------------------------------------------------------//
// 二维数组 -> 1.内存中是连续存放的

// demo(1) 二维数组的创建
// int main()
// {
//     int arr1[3][4] = {1,2,3,4,5,6,7,8,9}; // 不完全初始化 , 后面补 0 
//     int arr2[3][4] = {{1,2} , {3,4} , {5,6}}; // 仍然是 3 行
//     int arr3[][4] = {{1,2} , {3,4} , {5,6}}; // 行可以省略 , 列不能省略
//     int i = 0;
//     int j = 0;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0;j < 4; j++)
//         {
//             printf("%d ", arr3[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// demo(2) 二维数组的存储
// int main()
// {
//     int arr[][4] = {{1,2} , {3,4} , {5,6}};
//     int i = 0;
//     int j = 0;
//     int *p = &arr[0][0];
//     for (i = 0; i < 12; i++)
//     {
//         printf("%d ", *p);
//         p++;
//     }
//     return 0;
// }

// demo(3) 数组作为函数参数: 冒泡排序 (-> 两两相邻的元素进行比较,并且可能的话需要交换)
// ！！！！！！！！！！！！！！！！！！！！！！！！！！ERROR！！！！！！！！！！！！！！！！！！！！！！！！！！
// void bubble_sort(int arr[]) // 形参arr本质是指针
// {
//     // 计算数组元素个数
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     // 确定趟数
//     for (int i = 0; i < sz-1; i++)
//     {
//         // 一趟冒泡排序的过程
//         int j = 0;
//         for (j = 0; j < sz-1-i; j++ )
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // 交换
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;

//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {9,8,7,6,5,4,3,2,1,0};
//     // 排序为升序 - 冒泡排序
//     bubble_sort(arr); //数组传参时 , 传入的是首元素地址
//     return 0;
// }

// 修改
// void bubble_sort(int arr[], int sz) // 形参arr本质是指针
// {
//     // 确定趟数
//     for (int i = 0; i < sz-1; i++)
//     {
//         // 一趟冒泡排序的过程
//         int j = 0;
//         for (j = 0; j < sz-1-i; j++ )
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // 交换
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;

//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {9,8,7,6,5,4,3,2,1,0};
//     // 计算数组元素个数
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     // 排序为升序 - 冒泡排序
//     bubble_sort(arr, sz); //数组传参时 , 传入的是首元素地址
//     return 0;
// }

// demo(3) 数组中的地址问题
// 数组名是数组首元素地址 ， 但有两个例外
// 1.sizeof(数组名) -> 数组名表示整个数组 -> 计算的是整个数组的大小，单位是字节
// 2.&数组名 -> 数组名表示整个数组 -> 取出的是整个数组的地址
int main()
{
    int arr[10] = {0};
    int sz = sizeof(arr);
    printf("%d\n", sz);

    // 以下地址的值一样
    printf("%p\n", &arr[0]); // 取出的是数组首元素地址
    printf("%p\n", arr); // 取出的是数组首元素地址
    printf("%p\n", &arr); // 取出的是整个数组的地址
    return 0;
}