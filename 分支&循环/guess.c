#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void meun(void)
{
    printf("*****************************\n");
    printf("*********��������Ϸ**********\n");
    printf("******1.paly    0.end********\n");
    printf("*****************************\n");
}
void game()
{
    printf("��Ϸ��ʼ��\n");
    int ret = rand()%100+1; //����0~100�������
    while(1)
    {
        int num = 0;
        printf("��������µ�����:>");
        scanf("%d", &num);
        if(num<ret)
        {
            printf("��С��\n");
        }
        else if(num>ret)
        {
            printf("�´���\n");
        }
        else
        {
            printf("�¶���\n");
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
        printf("����1��ʼ��Ϸ������0������Ϸ:");
        scanf("%d", &input);
        switch(input)
        {
            case 1:game();break;
            case 0:printf("��Ϸ����\n");break;
            default :printf("no");break;
        }
    }while(input);
    system("puase");
    return 0;
}