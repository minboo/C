/*比较三个整数的大小*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, c = 0;
    printf("输入要比较的三个数：");
    scanf("%d%d%d", &a, &b, &c);
    if(a<c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if(a<b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if(b<c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    printf("%d>%d>%d", a, b, c);
    system("pause");
    return 0;
}