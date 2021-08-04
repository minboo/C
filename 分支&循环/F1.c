/*打印1到100之间3的倍数*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    for(i = 1; i <=100; i++)
    {
        if(i%3==0)
        {
            printf("%d\n",i);
        }
    }
    system("pause");
    return 0;
}
*/

/* 求两个数的最大公约数*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 15, n = 4, r;
    while(m%n)
    {
        r = m %n;
        m = n;
        n = r;
    }
    printf("%d\n", n);
    system("pause");
    return 0;
}
*/

/*打印1000~2000之间的闰年*/
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     //能被4整除且不能被100整除的是闰年
//     //能被400整除的是闰年
//     int year = 0;
//     for(year = 1000; year <=2000; year++)
//     {
//         if(year%4 == 0 && year%100 != 0)
//         {
//             printf("%d ", year);
//         }
//         if(year%400 == 0)
//         {
//             printf("%d ", year);
//         }
//     }
    
//     system("pause");
//     return 0;
// }

/*打印100~200之间的素数*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //只能被1和它本身整除的是素数
    //试除法
    //判断i是否为素数
    //产生2~i-1的数给i除，如其中有任何一个数能被它整除，则这个数不是素数
    int i = 0;
    for(i = 100; i <=200; i++)
    {
        int j = 0;
        for(j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(i == j)
        {
            printf("%d  ", i);
        }
    }
    system("pause");
    return 0;
}
