/*��ӡ1��100֮��3�ı���*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    for(i = 1; i <=100; i++)
    {
        if(i%3==0)
        {
            printf("%d\n",i);
        }
    }
    system("pause");
    return 0;
}
*/

/* �������������Լ��*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 15, n = 4, r;
    while(m%n)
    {
        r = m %n;
        m = n;
        n = r;
    }
    printf("%d\n", n);
    system("pause");
    return 0;
}
*/

/*��ӡ1000~2000֮�������*/
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     //�ܱ�4�����Ҳ��ܱ�100������������
//     //�ܱ�400������������
//     int year = 0;
//     for(year = 1000; year <=2000; year++)
//     {
//         if(year%4 == 0 && year%100 != 0)
//         {
//             printf("%d ", year);
//         }
//         if(year%400 == 0)
//         {
//             printf("%d ", year);
//         }
//     }
    
//     system("pause");
//     return 0;
// }

/*��ӡ100~200֮�������*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //ֻ�ܱ�1��������������������
    //�Գ���
    //�ж�i�Ƿ�Ϊ����
    //����2~i-1������i�������������κ�һ�����ܱ������������������������
    int i = 0;
    for(i = 100; i <=200; i++)
    {
        int j = 0;
        for(j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(i == j)
        {
            printf("%d  ", i);
        }
    }
    system("pause");
    return 0;
}
