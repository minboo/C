//ð�����򣬶�arr�����ų�����
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int sz)
{
    //ȷ��ð��˳��Ĵ���
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        //ÿһ��ð��Ҫ�ȽϵĴ���
        int flag = 1;  //���������Ѿ�������
        int j = 0;
        for(j = 0; j < sz-i-1; j++)
        {
            if(arr[j]>arr[j+1])  //�Ƚ�ǰ�����������ǰ�����򽻻�˳��
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
                flag = 0; //������������ݲ�ȫ������
            }
        }
        if(flag == 1)
            break;
    }
}
int main()
{
    int arr[] = {9,8,12,4,78,7,6,5,4,3,2,1,0,11};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    bubble_sort(arr, sz);
    for(i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    system("pause");
    return 0;
}