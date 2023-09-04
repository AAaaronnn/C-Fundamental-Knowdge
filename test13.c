#include <stdio.h>
//----------------------------------------------------//
// 回调函数 -> 通过函数指针调用的函数 -> 参考py中的继承

// 冒泡排序
// void Bubble_sort(int arr[], int size)
// {
// 	int j,i,tem;
// 	for (i = 0; i < size-1;i ++) //size-1是因为不用与自己比较，所以比的数就少一个
// 	{
// 		int count = 0;
// 		for (j = 0; j < size-1 - i; j++) //size-1-i是因为每一趟就会少一个数比较
// 		{
// 			if (arr[j] > arr[j+1]) //这是升序排法，前一个数和后一个数比较，如果前数大则与后一个数换位置
// 			{
// 				tem = arr[j];
// 				arr[j] = arr[j+1];
// 				arr[j+1] = tem;
// 				count = 1;
				
// 			}
// 		}
// 		if (count == 0)			//如果某一趟没有交换位置，则说明已经排好序，直接退出循环
// 				break;	
// 	}
 
// }
// int main()
// {
// 	int arr[10];
// 	int i;
	
// 	printf("请输入10个数\n");
// 	for (i = 0; i < 10; i++)		//接收数值
// 	{
// 		scanf("%d", &arr[i]);
// 	}
// 	printf("排序前的数组>");
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
 
// 	printf("\n排序后的数组>");
// 	Bubble_sort(arr, 10);
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return 0;
// }


// // demo(1) -> qsort函数的实现 -> quick sort 可排序任意类型的数据
// void qsort(void* base, // 存放数组中第一个对象的地址
//             size_t num, // 排序数组元素的个数
//             size_t size, // 排序数组元素的大小，单位是字节
//             int (*cmp)(const void* e1, const void* e2)); // 用来比较待排序数组中的2个元素 . const用法 -> 使得变量无法被修改

// int cmp_int(const void* e1, const void* e2)
// {
//     return *(int*)e1 - *(int*)e2; // 若大于0则交换位置
// }
// int main()
// {
//     int i = 0;
//     int arr[10] = {9,8,7,6,5,4,3,2,1};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     qsort(arr, sz, sizeof(arr[10]), cmp_int);
//     for(i =0; i < sz; i++)
//     {
//         printf("%d " ,arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// demo(2) -> 自定义一个可以排序任意数据类型的冒泡排序
// void Swap(char*buf1, char*buf2, int width)
// {
//     int i = 0;
//     for(i = 0; i < width; i++ )
//     {
//         char tmp = *buf1;
//         *buf1 = *buf2;
//         *buf2 = tmp;
//         buf1++;
//         buf2++;

//     }
// }
// void bubble_sort(void* base,
//                  int sz,
//                  int width,
//                  int (*cmp)(const void*e1, const void*e2)
//                  )
// {
//     int i = 0;
//     for (i = 0; i < sz -1; i++)
//     {
//         int j = 0;
//         for(j = 0; j < sz-1-i; j++)
//         {
//             //元素比较
//             if(cmp( (char*)base+j*width, (char*)base+(j+1)*width )>0) // 一个参数：(char*)base -> 将数据转换成char类型   第二个参数：j*width -> width为4 
//             {
//                 //交换
//                 Swap( (char*)base+j*width, (char*)base+(j+1)*width) , width); // 第三个参数：数据长度
//             }
//         }
//     }
// }



//----------------------------------------------------//
// 数组基础

// sizeof(数组名) -> 计算的是整个数组的大小
// &数组名 -> 取出的是整个数组的地址
// 除此之外，所有的数组名都是数组首元素的地址

// int main()
// {
//     int a[] = { 1,2,3,4 };
//     printf("%d\n",sizeof(a));         //16
//     printf("%d\n",sizeof(a + 0));    //第一个元素的地址 4
//     printf("%d\n",sizeof(*a));       //*a是数组的第一个元素 4
//     printf("%d\n",sizeof(a + 1));    //第二个元素的地址 4
//     printf("%d\n",sizeof(a[1]));     //4

//     printf("%d\n",sizeof(&a));       // 数组的地址 4
//     printf("%d\n",sizeof(*&a));      //16 
//     printf("%d\n",sizeof(&a + 1));   //跳过整个数组 4
//     printf("%d\n",sizeof(&a[0]));    //4
//     printf("%d\n",sizeof(&a[0] + 1));//4
//     return 0;
// }


// 字符数组
int main()
{
    // char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    // printf("%d\n",sizeof(arr));         //6
    // printf("%d\n",sizeof(arr + 0));     //第一个元素的地址 4
    // printf("%d\n",sizeof(*arr));        //arr指数组第一个元素，再解引用 1
    // printf("%d\n",sizeof(arr[1]));      //1
    // printf("%d\n",sizeof(&arr));        //4
    // printf("%d\n",sizeof(&arr + 1));    //4
    // printf("%d\n",sizeof(&arr[0] + 1)); //指向数组第一个元素地址 4

    // char arr[] = "abcdef";
    // // [a b c d e f \n]
    // printf("%d\n",sizeof(arr));            //7     
    // printf("%d\n",sizeof(arr + 0));        //4     
    // printf("%d\n",sizeof(*arr));           //1
    // printf("%d\n",sizeof(arr[1]));         //1      
    // printf("%d\n",sizeof(&arr));           //4        
    // printf("%d\n",sizeof(&arr + 1));       //4
    // printf("%d\n",sizeof(&arr[0] + 1));    //4

    char* p = "abcdef";
    printf("%d\n", sizeof(p));                
    printf("%d\n", sizeof(p + 1));            
    printf("%d\n", sizeof(*p));
    printf("%d\n", sizeof(p[0]));
    printf("%d\n", sizeof(&p));
    printf("%d\n", sizeof(&p + 1));
    printf("%d\n", sizeof(&p[0] + 1));
    return 0;
}