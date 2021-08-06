//写一个函数判断一个数是不是素数
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
        printf("%d是素数\n", a);
    else
        printf("%d不是素数\n", a);
    system("pause");
    return 0;
}