#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age = 0;
    printf("�������������:");
    scanf("%d",&age);
    if(age <18)
    {
        printf("δ����");
    }
    else if(age >= 18 && age < 28)
    {
        printf("����");
    }
    else if(age >=28 && age <50 )
    {
        printf("����");
    }
    else if(age >= 50 && age < 90)
    {
        printf("����");

    }
    else
        printf("�ϲ���");
    system("pause");
    return 0;
}