/*�ж�һ��������ż*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int a;
    printf("������һ������:");
    scanf("%d", &i);
    a = i % 2;
    if(a== 1)
    {
        printf("%d������\n", i);
    }
    else
    {
        printf("%d��ż��\n", i);
    }
    system("pause");
    return 0;
}