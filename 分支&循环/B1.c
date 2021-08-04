/*编写代码，演示多个字符从两端移动，向中间汇聚*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
int main()
{
    char arr1[] = "Hello world,how are you?";
    char arr2[] = "########################";

    int left = 0;
    int right = strlen(arr1)-1;

    while(left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        Sleep(500);
        system("cls");
        printf("%s\n", arr2);
        left++;
        right--;

    }
    //printf("%s", arr2);
    system("pause");
    return 0;
}