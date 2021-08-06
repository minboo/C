//二分查找
//在一个有序数组中找到某个数
//找到了返回这个数，找不到返回-1
#include <stdio.h>
#include <stdlib.h>

                    //这里传过来的arr实际上是一个地址，也就是一个指针
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
                        //这里传过去的实际是arr的首元素的地址
    ret = binarr_search(arr, k,sz);
    if(ret == -1)
        printf("找不到\n");
    else
        printf("找到了，下标是%d", ret);
    system("pause");
    return 0;
}