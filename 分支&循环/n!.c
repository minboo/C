/*计算n的阶乘*/
/**************
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int i = 0;
    int s = 1;
    printf("你要计算多少的阶乘？请输入整数:");
    scanf("%d", &n);
    for(i = 1; i < n+1; i++)
    {
        s = s * i;
        printf("%d\n", s);
    }
    printf("%d的阶乘为：%d\n", n, s);
    system("pause");
    return 0;
}
******************/

/*计算1！+2！+3！……+ 10！*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int s = 1;
    int count;
    // for(i = 1; i < 11; i++)
    // {
    //     s *= i;
    //     printf("%d\n", s);
    //     count += s;
    // }
    while(i <= 3)
    {
        s *= i;
        count += s;
        i++;
    }
    printf("%d\n", count);

    system("pause");
    return 0;
}