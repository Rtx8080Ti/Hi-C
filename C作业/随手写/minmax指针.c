//
//  minmax指针.c
//  minmax函数 用指针找到最小min和最大max的值.
//
//  Created by 王中东 on 2018/12/17.
//  Copyright © 2018 王中东. All rights reserved.
//

#include <stdio.h>
void minmax(int a[],int len,int *min,int *max);     //minmax函数不需要返回值，注意*min
//void minmax(int *a,int len,int *min,int *max);
int main(void)
{
    int a[]={4,3,2,1,6,5,12,34,13,14,53,23,45,67};
    int len = sizeof(a)/sizeof(a[0]);       //数组个数等于数组总字节除以第一个数字字节数
    int min,max;                            //注意定义min，max不需要*
    minmax(a, len, &min, &max);             //注意函数内部需要用取地址&符号
    printf("min=%d,max=%d",min,max);
}

void minmax(int a[],int len,int *min,int *max)      //minmax函数本体
//void minmax(int *a,int len,int *min,int *max)
{
    *min = *max=a[0];           //初始化 min，max，a[0]相等
    for(int i=1;i < len;i++)    //从第二个数字开始遍历数组
    {
        if(*min > a[i]){        //如果有数字比min小，赋值给min
            *min = a[i];
        }
        if(*max < a[i]){        //如果有数字比max大，赋值给max
            *max = a[i];
        }
    }
}
