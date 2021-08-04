/*查找一个有序数组中的一个数，显示其下标*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 0;
    printf("您要找的数是：");
    scanf("%d", &k);
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int sz = sizeof(arr)/sizeof(arr[0]);//计算数组个数
    int left = 0;//左下标
    int right = sz - 1;//右下标
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
            printf("找到了，下标是%d\n", mid);
            break;
        }
    }
    if(left>right)
    {
        printf("抱歉没有这个数，找不到。\n");
    }
    
    system("pause");
    return 0;
}