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
// int main()
// {
//     int ch = 0;
//     // ctrl+z -- getchar()就读取结束

//     while ((ch = getchar()) != EOF) // getchar()获取用户在终端输入的字符，且每次只能读取一个字符，遇到\n后自动结束进程  EOF : End Of File 常常用于判断是否到达了文件末尾或输入流末尾
//     {
//         putchar(ch); // putchar()打印括号里面的字符
//     }
//     // 整个程序中 ，假设用户输入A , 相当于输入 A\n , getchar()
//     return 0;

// }



// (3) 难 -> c语言中有缓冲区 , scanf会在缓冲区中取走值并只留下\n , 所以getchar()在缓冲区获取的就只有\n , 所以无论怎样最终都是"确认失败"

// 原题
// int main()
// {
//     char password[20] = { 0 };
//     printf("输入密码");
//     scanf("%d" , password);
//     printf("请确认密码(Y/N)");
//     int ch = getchar(); // getchar()每次只读取一个字符 , 并返回整型
//     if (ch == 'Y')
//     {
//         printf("确认成功\n");
//     }
//     else
//     {
//         printf("确认失败\n");
//     }
//     return 0;
// } 

// 修改1.0 难 -> 当输入的密码中间有空格时 , scanf读到空格时就不再读取缓冲区中的内容 , 所以第一个getchar()只能获取空格 , 第二个getchar()赋值时就读取的缓冲区空格后第一个字符 , 自然不满足条件就打印"确认失败"

// int main()
// {
//     char password[20] = { 0 };
//     printf("输入密码");
//     scanf("%d" , password);
//     printf("请确认密码(Y/N)");
//     // 清理缓冲区
//     getchar(); // 处理\n
//     int ch = getchar();
//     if (ch == 'Y')
//     {
//         printf("确认成功\n");
//     }
//     else
//     {
//         printf("确认失败\n");
//     }
//     return 0;
// } 

// 修改2.0 

// #include<stdio.h>
// int main()
// {
// 	char password[20] = {0};

// 	printf("请输入密码:>");
// 	scanf("%s", password);

// 	//把缓冲区中的内容全读走
// 	while ( getchar() != '\n')
// 	{
// 		;
// 	}
// 	printf("请确认密码(Y/N):>");
// 	int ch = getchar();
// 	if (ch == 'Y')
// 	{
// 		printf("确认成功\n");
// 	}
// 	else
// 	{
// 		printf("确认失败\n");
// 	}

// 	return 0;
// }



//                                                                           for 循环语句


// int main()
// {
//     int i = 0;
//     int j = 0;
//     for (;i < 3;i ++) // 判断部分省略 - 判断部分恒为真
//     {
//         for (;j < 3;j ++) // 打印3次 "hehe" -> i = 0时j执行3次 , i = 1时j仍然为3 , 未初始化变量
//         {
//             printf("hehe\n");
//         }
//     }
//     return 0;
// }


// 易错 -> 一共循环0次 , k=0为赋值 , 为假不满足条件
// int main()
// {
//     int i = 0;
//     int k = 0;
//     for (i = 0,k = 0;k = 0;i++ , k++)
//     {
//         k++;
//     }
//     return 0;
// }


//                                                                           do-while 循环语句
// 先do后判断while

// (1)
// int main()
// {
//     int i = 1;
//     do
//     {
//         if (5 == i)
//         continue;
//         printf("%d",i);
//         i++;
//     } while (i<=10);
//     return 0;
// }


// (2): 交换两个数组
// #include <string.h>
// int main()
// {
//     char arr1[] = "welcome to CD!!!!!";
//     char arr2[] = "##################";
//     int left = 0;
//     int right = strlen(arr2) - 1;
//     do
//     {
//        arr1[left] = arr2[left];
//        arr1[right] = arr2[right];
//        printf("%s\n",arr1);
//        Sleep(1000);
//        left++;
//        right--;
//     }while(left<=right);
//     return 0;
// }

// 猜数字游戏 : 自动生成一个1 - 100之间的随机数  , 猜错会告诉猜大还是猜小
// #include <stdio.h>
// #include <stdlib.h> //用于使用int rand(void)函数 
// #include <time.h>	//用于时间戳 
// void menu();//函数声明 
// void game();//函数声明 
// int main()
// {
// 	srand((unsigned int)time(NULL));
// 	int input = 0;
// 	do
// 	{
// 		menu();//调用menu()函数，打印菜单； 
// 		printf("请选择：>");
// 		scanf("%d", &input); 
// 		switch(input)
// 		{
// 			case 1:
// 				game();//调用game()函数 
// 				break; 
// 			case 0:
// 				printf("退出游戏\n");
// 				break;
// 			default:
// 				printf("选择错误，重新选择\n");
// 				break;
// 		 } 
// 	}while(input);
	
// 	return 0;
// }
// void menu()
// {
// 	printf("*****************\n");
// 	printf("**** 1.play *****\n");
// 	printf("**** 0.exit *****\n");
// 	printf("*****************\n");
// }
// void game()
// {
// 	//猜数字游戏
// 	//1.生成随机数
// 	//rand函数返回一个0-32767之间的数字1
// 	int number = rand()%100+1;	//%100的余数是0-99，然后+！，范围就说1-100 
// 	//2.猜数字
// 	int guess = 0;
// 	while(1){
// 		printf("请猜数字：>");
// 		scanf("%d", &guess);
// 		if(guess==number)
// 		{
// 			printf("猜对了!!!\n");
// 			break;	
// 		}else if(guess<number)
// 		{
// 			printf("猜小了!!!\n");
// 		}else{
// 			printf("猜大了!!!\n");
// 		}
// 	} 
//  }


