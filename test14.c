#include <stdio.h>
//-----------------------------------------------------------------------//
// ������ -> ���ÿռ�

// union Un
// {
//     char c;
//     int i;
// };
// int main()
// {
//     union Un u;
//     printf("%p\n ", &(u.c));
//     printf("%p\n ", &(u.i));
//     return 0;
// }

//-----------------------------------------------------------------------//
// ��̬�ڴ����

#include <stdlib.h>
// malloc -> ���붯̬�ڴ�ռ� -> void *malloc(size_t size) -> size_tָ�����ڴ�ռ��С
// int main()
// {
//     int *p;
//     p = (int *)malloc(sizeof(int));
//     if(p==NULL)
//     {
//         printf("�����ڴ�ʧ��\n");
//         exit(1);
//     }
//     printf("������һ������:");
//     scanf("%d",p);
//     printf("����������ǣ�%d\n",*p);
//     return 0;
// }

// free -> �ͷŶ�̬�ڴ�ռ� -> void free(void *p) -> �ͷ���malloc��calloc��realloc����������ڴ�ռ�
// int main()
// {
//     int *p;
//     p = (int *)malloc(sizeof(int));
//     if(p==NULL)
//     {
//         printf("�����ڴ�ʧ��\n");
//         exit(1);
//     }
//     printf("������һ������:");
//     scanf("%d",p);
//     free(p);
//     printf("����������ǣ�%d\n",*p);
//     return 0;
// }

// calloc -> ���벢��ʼ��һϵ���ڴ�ռ� -> void *calloc(size_t nmemb, size_t size)
// int *p = (int *)calloc(8, sizeof(int)) 
//              ||
// int *p = (int *)malloc(8 * sizeof(int))
// memset(p, 0, 8 * sizeof(int)) // ��ʼ���ڴ�ռ亯��


// realloc -> ���·����ڴ�ռ� -> void *realloc(void *p, size_t size)
// int main()
// {
//     int i,num;
//     int count = 0;
//     int *p = NULL; //�����ʼ��ΪNULL

//     do
//     {
//         printf("������һ������(����-1��ʾ����):");
//         scanf("%d", &num);
//         count++;

//         p = (int *)realloc(p, count * sizeof(int));
//         if (p == NULL)
//         {
//             exit(1); // exit(1)��ʾ�쳣�˳������˳�ǰ���Ը���һЩ��ʾ��Ϣ�����ڵ��Գ����в쿴����ԭ��
//         }
//         p[count-1] = num;
//     }while(num != -1);
//     free(p);
//     return 0;
// }


// 1.��NULLָ��Ľ����ò���
// 2.�Զ�̬���ٿռ��Խ�����
// 3.ʹ��free�ͷŷǶ�̬���ٵĿռ�
// 4.ʹ��free�ͷŶ�̬�ڴ��е�һ����
// 5.��ͬһ�鶯̬���ٵĿռ����ͷ�
// 6.��̬���ٿռ������ͷ�

//-----------------------------------------------------------------------//
// �ֲ�������ȫ�ֱ���
// void func();

// int a, b = 520;

// void func()
// {
//     int a = 880;
//     int b = 20;
//     printf("In func , a = %d, b = %d\n", a ,b);
// }
// int main()
// {
//     printf("In main , a = %d, b = %d\n", a ,b);
//     func();
//     printf("In main , a = %d, b = %d\n", a ,b); // ȫ�ֱ�����aû�ж��壬�ᱻ�޸�
//     return 0;
// }
//-----------------------------------------------------------------------//
//        ����ջ������
//    ��              ջ
// ��Ҫ�ֶ�����    ϵͳ�Զ�����
// ��Ҫ�ֶ��ͷ�    ϵͳ�Զ��ͷ�