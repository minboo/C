#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age = 0;
    printf("请输入你的年龄:");
    scanf("%d",&age);
    if(age <18)
    {
        printf("未成年");
    }
    else if(age >= 18 && age < 28)
    {
        printf("青年");
    }
    else if(age >=28 && age <50 )
    {
        printf("中年");
    }
    else if(age >= 50 && age < 90)
    {
        printf("老年");

    }
    else
        printf("老不死");
    system("pause");
    return 0;
}