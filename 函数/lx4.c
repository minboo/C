//用递归的方式计算n的阶乘
#include <stdio.h>
#include <stdlib.h>
int Fun(int n)
{
    if(n==1)
        return 1;
    else
        return n*Fun(n-1);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", Fun(n));
    system("pause");
    return 0;
}