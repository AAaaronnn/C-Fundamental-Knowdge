#include <stdio.h>
#include <stdlib.h>
//----------------------------------------------------//

// �߼��궨��

// demo(1) -> ���������ĺ궨�� - ������ #undef ����ֹ�궨��������� - ��Ҳ֧��Ƕ��
// #define PI 3.14
// #define R 6371
// #define V PI * R * R * 4 / 3
// int main()
// {
//     int r;
//     float s;
//     printf("������Բ�İ뾶:");
//     scanf("%d", &r);

//     s = PI * r * r ;
//     printf("Բ�������: %.2f\n", s);

//     printf("�������������:%.2f\n ", V);

//     return 0;
// }

// demo(2) -> �������ĺ궨�� 
// #define MAX(x,y) (((x) > (y)) ? (x) : (y))
// int main()
// {
//     int x ,y;
//     printf("����������������");
//     scanf("%d%d", &x, &y);
//     printf("�ϴ���Ϊ:%d\n", MAX(x,y));
//     return 0;
// }

// �궨������Ϊ��֪�Ĳ���

// # �� ## -> ����Ԥ���������
// demo(3) -> #
// #define STR(s) # s // �ڶ������ŻὫ s ת�����ַ�����ʽ
// int main()
// {
//     printf("%s\n", STR(hello));
//     return 0;
// }
// demo(4) -> ##
// #define TOGETHER(x,y) x ## y // ##�ɽ�����������������
// int main()
// {
//     printf("%d\n", TOGETHER(5, 20));
//     return 0;
// }

//----------------------------------------------------//

// �ṹ��

// demo(5) -> �ṹ������������
// struct Book
// {
//     char title[128];
//     char author[40];
// }book;
// int main()
// {
//     printf("������������");
//     scanf("%s",book.title);
//     printf("���������ߣ�");
//     scanf("%s",book.author);
//     return 0;
// }

// �ṹ��ָ�� ����: ->
// demo(6)
// struct Book
// {
//     char title[128];
//     char author[40];
// }book = {
//     "��С�㡷",
//     "С����"
// };
// int main()
// {
//     struct Book *pt;
//     pt = &book;
//     printf("������%s\n", pt->title);
//     printf("���ߣ�%s\n", pt->author);
//     printf("������%s\n", book.title);
//     printf("���ߣ�%s\n", book.author);
//     return 0;
// }

// �ṹ��ָ�� + �ڴ����
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
//         printf("�ڴ����ʧ��\n");
//         exit(1);
//     }

//     date->year = 2023;
//     date->month = 9;
//     printf("%d-%d\n", date->year, date->month);
//     return 0;
// }

//----------------------------------------------------//

// ������ =.=û��
// struct Book
// {
//     char title[128];
//     char author[40];
//     struct Book *next;
// };

// void getInput(struct Book *book)
// {
//     printf("����������:");
//     scanf("%s",book->title);
//     printf("����������:");
//     scanf("%s",book->author);
// }

// void addBook(struct Book **library)
// {
//     struct Book *book, *temp;
//     book = (struct Book *)malloc(sizeof(struct Book));
//     if (book == NULL)
//     {
//         printf("�ڴ����ʧ��\n");
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
// �ڴ�� -> ʹ�õ�����

//----------------------------------------------------//

// typedef -> �������

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

// (��csdn)

//----------------------------------------------------//

// ������(union) -> ����һ���ڴ��ַ -> �ڴ�ռ�����Ϊ��Ա�����ߴ�
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

// ö��(enum) -> enum ö���������� ö�ٱ���1,ö�ٱ���2
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

// λ�� -> �ڶ���ṹ��ʱ���ڽṹ���Ա����ʹ��ð��(:)�����ֱ�ʾ�ó�Ա��ռ��λ��
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
//     printf("��Ԫ��֮��Ϊ:%d\n", ADD(arr,size));
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
