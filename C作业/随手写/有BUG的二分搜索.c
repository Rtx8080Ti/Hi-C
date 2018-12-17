//  Created by 王中东 on 2018/12/17.
//  Copyright © 2018 王中东. All rights reserved.
//


#include <stdio.h>
int search(int key, int a[], int len) //search函数 采用二分搜索
{
    int ret = -1;            //搜索不到返回-1；
    int left = 0;            //左值为0；
    int right = len - 1;    //右值为数组最后一个
    while (left <= right)    //当左值小于等于右值时运行 ##BUG出现在这个地方，必须考虑左值等于右值的时候 注意等于运算符需要紧跟小于运算符。
    {
        int mid = (left + (right-left)/2);    //中间值位置等于左右值和的一半 
        //printf("mid=%d\tret=%d\tleft=%d\tright=%d\tkey=%d\tlen%d\t\n",mid,ret,left,right,key,len);
        if (a[mid] == key)        //当中间值位置是寻找的数时
        {
            ret = mid;        //返回值等于中间值的位置
            break;            //跳出循环
        }
        else if (a[mid] > key)    //如果中间值大于寻找值
        {
            right = mid - 1;    //让右值等于中间值减一
        }
        else {
            left = mid + 1;
        }
        
    }
    return ret;
}
int main()
{
    int k = 46;
    int i;
    int a[] = { 2,4,7,11,13,16,21,27,32,36,40,46 };
    i = search(k, a, sizeof(a) / sizeof(a[0]));
    printf("%d\n", i);
    //system("pause");
    return 0;
}
