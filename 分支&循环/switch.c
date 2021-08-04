#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("你要显示星期几？输入数字1-7：");
    scanf("%d", &day);
    switch(day)
    {
        case 1:
            printf("星期一\n");break;
        case 2:
            printf("星期二\n");break;
        case 3:
            printf("星期三\n");break;
        case 4:
            printf("星期四\n");break;
        case 5:
            printf("星期五\n");break;
        case 6:
            printf("星期六\n");break;
        case 7:
            printf("星期日\n");break;
        default:
            printf("输入错误\n");break;
    }
    system("pause");
    return 0;
}