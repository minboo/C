#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while(n>2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    system("pause");
    return 0;
}