//���ֲ���
//��һ�������������ҵ�ĳ����
//�ҵ��˷�����������Ҳ�������-1
#include <stdio.h>
#include <stdlib.h>

                    //���ﴫ������arrʵ������һ����ַ��Ҳ����һ��ָ��
int binarr_search(int arr[], int k, int sz)
{
    int i = 0;
    
    int left = 0;
    int right = sz - 1;

    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]>k)
        {
            right = mid-1;
        }
        else if(arr[mid]<k)
        {
            left = mid+1;
        }
        else
            return mid;
    }
    if(left>right)
        return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 17;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ret = 0;
                        //���ﴫ��ȥ��ʵ����arr����Ԫ�صĵ�ַ
    ret = binarr_search(arr, k,sz);
    if(ret == -1)
        printf("�Ҳ���\n");
    else
        printf("�ҵ��ˣ��±���%d", ret);
    system("pause");
    return 0;
}