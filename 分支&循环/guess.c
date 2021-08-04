#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void meun(void)
{
    printf("*****************************\n");
    printf("*********猜数字游戏**********\n");
    printf("******1.paly    0.end********\n");
    printf("*****************************\n");
}
void game()
{
    printf("游戏开始！\n");
    int ret = rand()%100+1; //生成0~100的随机数
    while(1)
    {
        int num = 0;
        printf("请输入你猜的数字:>");
        scanf("%d", &num);
        if(num<ret)
        {
            printf("猜小了\n");
        }
        else if(num>ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        }
    
    }

}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        meun();
        printf("输入1开始游戏，输入0结束游戏:");
        scanf("%d", &input);
        switch(input)
        {
            case 1:game();break;
            case 0:printf("游戏结束\n");break;
            default :printf("no");break;
        }
    }while(input);
    system("puase");
    return 0;
}