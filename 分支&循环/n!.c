/*����n�Ľ׳�*/
/**************
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int i = 0;
    int s = 1;
    printf("��Ҫ������ٵĽ׳ˣ�����������:");
    scanf("%d", &n);
    for(i = 1; i < n+1; i++)
    {
        s = s * i;
        printf("%d\n", s);
    }
    printf("%d�Ľ׳�Ϊ��%d\n", n, s);
    system("pause");
    return 0;
}
******************/

/*����1��+2��+3������+ 10��*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int s = 1;
    int count;
    // for(i = 1; i < 11; i++)
    // {
    //     s *= i;
    //     printf("%d\n", s);
    //     count += s;
    // }
    while(i <= 3)
    {
        s *= i;
        count += s;
        i++;
    }
    printf("%d\n", count);

    system("pause");
    return 0;
}