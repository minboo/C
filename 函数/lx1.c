//дһ�������ж�һ�����ǲ�������
#include <stdio.h>
#include <stdlib.h>

int is_prime(int x)
{
    int i = 0;
    for(i = 2; i < x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    } 
        return 1;  
}

int main()
{
    int a = 10;
    if(is_prime(a) == 1)
        printf("%d������\n", a);
    else
        printf("%d��������\n", a);
    system("pause");
    return 0;
}