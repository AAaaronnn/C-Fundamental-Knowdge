#include <stdio.h>
//-----------------------------------------------------------------------//

// ���� : ʵ�ο����ǳ��������������ʽ��������

// (1)�Ƚ��������Ĵ�С
// int get_max(int x , int y) // ��ֵ����
// {
//     int z = 0;
//     if (x > y)
//     {
//         z = x;
//     }
//     else
//     {
//         z = y;
//     }
//     return z;
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     // �����ĵ���
//     int max = get_max(a , b);
//     printf("max = %d\n", max);
//     return 0;
// }


// (2)�����������ͱ�����ֵ
// ���������⣺�ں���Swap�� , ���´�����x��y�Ŀռ��ַ , ��main()�����е�a��b��ַ��ͬ , ���н�����ֵҲֻ��x��y��ֵ , ��Ӱ��main()�����е�a��bֵ
// void Swap(int x , int y) // �����������ʹ�дvoid , ��ʾ��������������κ�ֵ , Ҳ����Ҫ����
// {
//     int z = 0;
//     z = x;
//     x = y;
//     y = z;
// }   
// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("����ǰ:a=%d b=%d",a,b);
//     Swap(a , b);
//     printf("������:a=%d b=%d",a,b);
//     return 0;
// }

// �޸ĸ���
void Swap(int* pa , int* pb) // ��ַ����
{
    int z = 0;
   z = *pa;
   *pa = *pb;
   *pb = z;
}   
int main()
{
    int a = 10;
    int b = 20;
    printf("����ǰ:a=%d b=%d",a,b);
    Swap(&a , &b);
    printf("������:a=%d b=%d",a,b);
    return 0;
}
