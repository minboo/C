//��дһ���������ж�һ���ַ������ַ�����
/*
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char* arr) //����ָ�����ͽ���
{
    int count = 0;
    while(*arr != '\0') //��*arrȡ��������ַ�
    {
        count++;
        arr++;   //����Ԫ���±�++
    }
    return count;
}

int main()
{

    char arr[] = "hello";
    printf("%d\n", my_strlen(arr));//���ݵ�������arr��Ԫ�صĵ�ַ
    system("pause");
    return 0;
}*/

//�õݹ�ķ�ʽ��ʵ��
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