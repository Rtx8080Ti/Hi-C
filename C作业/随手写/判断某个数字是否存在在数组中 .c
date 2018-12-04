//
//  main.c
//  1
//
//  Created by 王中东 on 2018/12/4.
//  Copyright © 2018 王中东. All rights reserved.
//输入一个数字，查询在数组a当中的第几位
#include <stdio.h>
int search(int key,int a[],int length); //声明secarch函数，注意变量用逗号分隔；
int main(void)
{
    int x; //x是输入的数字；
    int loc;//loc是数字的位数；
    int a[13]={0}; //定义数组中的某个数，其余数字会用0补齐；
    scanf("%d",&x);//获取输入
    loc = search(x,a,sizeof(a)/sizeof(a[0]));//通过search函数获取数字位数赋值给loc，不存在返回-1；
         if (loc != -1){//判断位数是否存在，不存在返回-1；
             printf("%d在数组的第%d位上",x,loc);//存在的话输出位数；
         }
                    else{//不存在输出不存在
                        printf("%d不存在",x);
                    }
}
int search(int key, int a[],int length) //search函数定义
                    {
                        int i;//循环变量i;
                        int ret = -1;//默认不存在，返回-1；
                        for (i=0;i<length;i++){//for循环遍历数组，查询数字是否在数组；
                            if (key == a[i]){ //判断是否存在；
                                ret = i;//找到数字，数字位数返回给ret；
                                break;//跳出循环；
                            }
                        }
                        return ret;//返回数字的位数
                    }
