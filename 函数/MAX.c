/**************************
ret_type fun_name(para1, * )
{
    statement;//�����
}
    ret_type ��������
    fun_name ������
    para1 ��������
***************************/

#include <stdio.h>
#include <stdlib.h>

int get_MAX(int x, int y)
{
    /*if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }*/
    return (x>y)?(x):(y);
}
int main()
{
    int a = 10;
    int b = 50;
    int sum = get_MAX(a,b);
    printf("MAX = %d\n", sum);
    system("pause");
    return 0;
}