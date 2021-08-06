#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{

    int a = 10;
    int b = 20;
    Swap(&a,&b);
    printf("a = %d, b = %d", a, b);
    system("pause");
    return 0;
}