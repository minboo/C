/*����һ�����������е�һ��������ʾ���±�*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 0;
    printf("��Ҫ�ҵ����ǣ�");
    scanf("%d", &k);
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int sz = sizeof(arr)/sizeof(arr[0]);//�����������
    int left = 0;//���±�
    int right = sz - 1;//���±�
    while(left <= right)
    {
        int mid = (left+right)/2;
        if(arr[mid]>k)
        {
            right = mid - 1;
        }
        else if(arr[mid]<k)
        {
            left = mid + 1;
        }
        else
        {
            printf("�ҵ��ˣ��±���%d\n", mid);
            break;
        }
    }
    if(left>right)
    {
        printf("��Ǹû����������Ҳ�����\n");
    }
    
    system("pause");
    return 0;
}