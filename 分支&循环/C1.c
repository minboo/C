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
        printf("������������룬��%d�λ���:", i);
        scanf("%s",passwd);
        if(strcmp(passwd, s) == 0)
        {
            printf("��ϲ��������ȷ\n");
            break;
        }
        else
        {
            printf("�������");
        }
        i--;
        if(i<1)
        {
            printf("�����þ������˳�\n");
            break;
        }
    }
    system("pause");
    return 0;
}