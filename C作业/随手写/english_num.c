//
//  main.c
//  11
//
//  Created by 王中东 on 2018/12/7.
//  Copyright © 2018 王中东. All rights reserved.
//

#include <stdio.h>
int a[]={1,2,3,4,5,6,7};
char *eng[] = {"one","two","three","four","five","six","seven"};
int search(int key,int a[],int len){//search 函数    //search函数(寻找的数字，数组a[]，数组长度）
    int ret = -1;  //中间值
    for (int i=0;i<len;i++){  //遍历数组
        if (key == a[i]){    //如何数字等于key
            ret = i;        //该数字在数组a 中的位置赋值给ret
            break;        //跳出遍历
        }
    }
    return ret;            //返回ret
}
int main()
{
    int a[]={1,2,4,5,6,7,8,1,22,33,42,56,21,4,};    //数组a
    int k=5;
    int r=search (k,a,sizeof(a)/sizeof(a[0]));        //返回值ret赋值给r
    printf ("%s\n",eng[r]);                //输出数字的英文
    
    return 0;
}
