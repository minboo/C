/*���1-100֮�������*/

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