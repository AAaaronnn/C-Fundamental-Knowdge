#include <stdio.h>
//-----------------------------------------------------------------------//
// �����ĵ���
// һ��������д�������� �� Ĭ��Ϊint����

// demo(1)��ӡ100-200֮�������
// ���������:����1 ��������:����0
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


// demo(2)�ж��Ƿ�������
// ��������꣺����1  �������꣺����0
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


// dmeo(3)ʵ��һ��������������Ķ��ֲ���
// �ҵ��ͷ���λ�õ��±�
// �Ҳ����ͷ���-1
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
//    return -1;// �Ҳ���
// }
// int main()
// {
//     int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//     int key = 17; // ��Ҫ���ҵ������±�
//     int sz = sizeof(arr) / sizeof(arr[0]); // ���������Ԫ�ظ���  sizeof(arr) : 10���������֣�Ϊ40  sizeof(arr[0]):����һ���ֽڴ�С��Ϊ4
//     int ret =binary_search(arr , key , sz); // ����ȥ��arr�����ϴ�����arr�������Ԫ�ص�ַ
//     if (-1 == ret)
//     {
//         printf("�Ҳ���\n");
//     }
//     else
//     {
//         printf("�ҵ���,�±��ǣ�%d\n",ret);
//     }
//     return 0;
// }


// demo(4)дһ��������ÿ����һ���������,�ͻὫnum��ֵ����1
// void Add(int *p)
// {
//     (*p)++;
// }
// int main()
// {
//     int num = 0;
//     Add(&num); // ֻ�д���num�ĵ�ַ�����γɶ�main�����е�num��ֵ�����޸�
//     printf("%d\n" , num);
//     Add(&num);
//     printf("%d\n" , num);
//     return 0;
// }

//-----------------------------------------------------------------------//
// ������Ƕ�׵�������ʽ����(��������Ƕ�׶���)

// ����Ƕ�׵���
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

// ������ʽ���� : ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
// demo(2)
// int main()
// {
//     // int len = strlen("abc\n");
//     // printf("%d",len);
//     // ��ʽ����
//     printf("%d\n",strlen("abd"));
//     return 0;
// }

// demo(3)
// int main()
// {
//     printf("%d",printf("%d",printf("%d",43))); // printf()���ص��Ǵ�ӡ����Ļ�ϵ��ַ����� , ���������printf��ӡ43���Ƿ��ص���2
//     return 0;
// }

//-----------------------------------------------------------------------//
// �����������붨��

// ��������:���߱�������������������������������
// demo(1)
// int main()
// {
//     int a = 10;
//     int b = 20;
//     // ����������
//     int Add(int a, int b);
//     int c = Add(a , b);
//     printf("%d" , c);
//     return 0;
// }
// int Add(int a , int b)
// {
//     return a + b;
// }

// demo(2)����ͷ�ļ�ʵ�ֺ��������������
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
// �����ݹ�:������ӵݹ���������ÿ�ε��õݹ�󶼱ƽ�����

// demo(1)��ӡ����������ֵ�ÿһλ
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
//     // �ݹ� - �����Լ������Լ�
//     print(num);
//     return 0;
// }

// demo(2)дһ���ݹ麯��DigitSum(n),����һ���Ǹ�����,���������������֮��
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

// �ݹ�ʵ��n��k�η�
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
//         return 1.0 / (Pow(n, -k)); // ��kΪ����ʱ,����k = -3,n = 2,��ʱPow��Ϊ(2,3)
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