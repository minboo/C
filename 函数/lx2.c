//дһ�������ж�1000~2000���ж��ٸ����꣬����ӡ
#include <stdio.h>
#include <stdlib.h>

int is_leap_year(int x)
{
    if((x%4==0 && x%100 != 0) || (x%400 == 0))
    {    
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int i = 0;
    for(i = 1000; i <= 2000; i++)
    {
        if(is_leap_year(i) == 1)
        {
            printf("%d  ", i);
        }
    }
    system("pause");
    return 0;
}