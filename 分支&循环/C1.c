#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i = 3;
    while(i<=3)
    {
        char s[] = "jjjkkk";
        char passwd[20] = {0};
        printf("请输入你的密码，有%d次机会:", i);
        scanf("%s",passwd);
        if(strcmp(passwd, s) == 0)
        {
            printf("恭喜，密码正确\n");
            break;
        }
        else
        {
            printf("密码错误，");
        }
        i--;
        if(i<1)
        {
            printf("次数用尽，已退出\n");
            break;
        }
    }
    system("pause");
    return 0;
}