#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    printf("��Ҫ��ʾ���ڼ�����������1-7��");
    scanf("%d", &day);
    switch(day)
    {
        case 1:
            printf("����һ\n");break;
        case 2:
            printf("���ڶ�\n");break;
        case 3:
            printf("������\n");break;
        case 4:
            printf("������\n");break;
        case 5:
            printf("������\n");break;
        case 6:
            printf("������\n");break;
        case 7:
            printf("������\n");break;
        default:
            printf("�������\n");break;
    }
    system("pause");
    return 0;
}