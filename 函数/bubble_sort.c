//冒泡排序，对arr数组排成升序
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int sz)
{
    //确定冒泡顺序的次数
    int i = 0;
    for(i = 0; i < sz; i++)
    {
        //每一次冒泡要比较的次数
        int flag = 1;  //假设数组已经是升序
        int j = 0;
        for(j = 0; j < sz-i-1; j++)
        {
            if(arr[j]>arr[j+1])  //比较前后两个数如果前数大则交换顺序
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
                flag = 0; //本次排序的数据不全是升序
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