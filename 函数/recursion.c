//自写一个函数，判断一个字符串的字符个数
/*
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* arr) //需用指针类型接收
{
    int count = 0;
    while(*arr != '\0') //用*arr取到数组的字符
    {
        count++;
        arr++;   //数组元素下标++
    }
    return count;
}

int main()
{

    char arr[] = "hello";
    printf("%d\n", my_strlen(arr));//传递的是数组arr首元素的地址
    system("pause");
    return 0;
}*/

//用递归的方式来实现
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* arr)
{
    if(*arr != '\0')
    {
        return 1+my_strlen(arr+1);
    }
    else
        return 0;
}

int main()
{
    char arr[] = "hell0000o";
    printf("%d\n", my_strlen(arr));
    system("pause");
    return 0;
}