//-----------------------------------------------------------------------//

//缁撴瀯浣撳彲浠ヨc璇█鍒涘缓鏂扮殑绫诲瀷鍑烘潵
#include <stdio.h>
// struct Stu
// {
//     char name[20]; //鎴愬憳鍙橀�?
//     int age;
//     double score;
// };
// int main()
// {
//     struct Stu s = {"寮犱�?" , 20 , 85.6}; //缁撴瀯浣撶殑鍒涘缓涓庡垵濮嬪�?
//     printf("1: %s %d %lf\n" , s.name , s.age , s.score); // %lf鎵撳嵃鍙岀簿搴︽诞鐐瑰�?
//     struct Stu *ps = &s;
//     printf("2: %s %d %1f\n" , (*ps).name , (*ps).age , (*ps).score);
//     printf("3: %s %d %1f\n" , ps->name , ps->age , ps->score); //缁撴瀯浣撴寚閽� -> 鎴愬憳鍙橀噺鍚�?
//     return 0;
// }

//-----------------------------------------------------------------------//

// c璇█鏄粨鏋勫寲鐨勭▼搴忚璁¤瑷�? : 椤哄簭缁撴�? 銆� 閫夋嫨缁撴�? 銆� 寰幆缁撴�? 

// 鍒嗘�? : 1.if 2.switch
// 寰�? : 1.while 2.for 3.do while
// c璇█琛ㄨ揪鐪熷�? : 闈�0灏辨槸鐪�? 0灏辨槸鍋�?

//                                                                           if 鍒嗘敮璇彞
// 鏄撻�?-------鎵撳嵃hehe
// int main()
// {
//     int a = 0;
//     int b = 2;
//     if ( a == 1 )
//       if ( b == 2) // 涓巈lse瀵瑰�? : else涓庢渶杩戠殑if鍖归�?
//         printf("hehe\n");
//       else 
//         printf("haha\n");
//     return 0;
// }

// 鏄撻�?-------鎵撳嵃hehe
// int main()
// {
//     int num = 3;
//     if (num =  5)
//       printf("hehe\n");
//     return 0;
// }

// 淇敼濡備笅
// int main()
// {
//     int num = 3;
//     if (5 == num);
//       printf("hehe\n");
//     return 0;
// }

//                                                                           switch 鍒嗘敮璇彞
// (2)
// case鏄叆鍙�? 锛� break鏄嚭鍙�?
// int main()
// {
//     int day = 0;
//     scanf("%d" , &day);
//     switch (day)
//     {
//         case 1:
//         printf("鏄熸湡涓€\n");
//         break;
//         case 2:
//         printf("鏄熸湡浜孿n");
//         break;
//         case 3:
//         printf("鏄熸湡涓塡n");
//         break;
//         case 4:
//         printf("鏄熸湡鍥沑n");
//         break;
//         case 5:
//         printf("鏄熸湡浜擻n");
//         break;
//         case 6:
//         printf("鏄熸湡鍏璡n");
//         break;
//         case 7:
//         printf("鏄熸湡澶‐n");
//         break;
//     default:
//         printf("杈撳叆閿欒\n");
//         break;
//     }
//     return 0;
// }


//                                                                           while 寰幆璇彞
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
//     // ctrl+z -- getchar()灏辫鍙栫粨鏉�

//     while ((ch = getchar()) != EOF) // getchar()鑾峰彇鐢ㄦ埛鍦ㄧ粓绔緭鍏ョ殑瀛楃锛屼笖姣忔鍙兘璇诲彇涓€涓瓧绗︼紝閬囧埌\n鍚庤嚜鍔ㄧ粨鏉熻繘绋�?  EOF : End Of File 甯稿父鐢ㄤ簬鍒ゆ柇鏄惁鍒拌揪浜嗘枃浠舵湯灏炬垨杈撳叆娴佹湯灏�
//     {
//         putchar(ch); // putchar()鎵撳嵃鎷彿閲岄潰鐨勫瓧绗�?
//     }
//     // 鏁翠釜绋嬪簭涓� 锛屽亣璁剧敤鎴疯緭鍏�? , 鐩稿綋浜庤緭鍏� A\n , getchar()
//     return 0;

// }

// (3)  闅� -> 鍦╟璇█涓湁缂撳啿鍖�? , scanf鐩存帴鍙栬蛋缂撳啿鍖轰腑杈撳叆鐨勫唴瀹圭暀涓媆n , getchar()鍙堜細鍦ㄧ紦鍐插尯涓彇鍐呭�? , 姝ゆ椂灏卞彧鏈塡n浜�
int main()
{
    char password[20] = { 0 };
    printf("璇疯緭鍏ュ瘑鐮侊�?");
    scanf("%d" , password);
    printf("璇风‘璁ゅ瘑鐮�(Y/N)");
    char ch = getchar();
    if (ch == 'Y')
    {
        printf("纭鎴愬姛\n");
    }
    else
    {
        printf("纭澶辫触\n");
    }
    return 0;
} 

//����