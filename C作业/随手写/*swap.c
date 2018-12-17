//
//  main.c
//  swap函数 用指针交换a,b的值.
//
//  Created by 王中东 on 2018/12/17.
//  Copyright © 2018 王中东. All rights reserved.
//

#include <stdio.h>
void swap(int *pa,int *pb);     \\swap函数不需要返回值
int main(void)      \\主函数
{
    int a = 5;
    int b = 6;
    swap(&a,&b);      \\调用swap函数
    printf("a=%d,b=%d.\n",a,b);     \\输出a和b的值
    return 0;
}

void swap(int *pa,int *pb)      \\swap函数本体
{
    int t = *pa;      \\pa的地址上的数字赋值给t
    *pa = *pb;        \\pb的地址上的数字赋值给pa
    *pb = t;          \\t的值赋值给pb所在的地址的数字
}
