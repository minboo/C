/*输出1-100之间的奇数*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 0; i < 101; i++)
    {
        if(i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
    return 0;
}