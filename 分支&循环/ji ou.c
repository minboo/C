/*判断一个数的奇偶*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int a;
    printf("请输入一个整数:");
    scanf("%d", &i);
    a = i % 2;
    if(a== 1)
    {
        printf("%d是奇数\n", i);
    }
    else
    {
        printf("%d是偶数\n", i);
    }
    system("pause");
    return 0;
}