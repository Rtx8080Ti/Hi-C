//
//  squares.c
//  
//
//  Created by 王中东 on 2018/12/1.
//

#include <stdio.h>
int main(void)
{
    int num = 1;
    while (num < 21)
    {
        printf("%4d%6d\n",num,num*num);
        num ++;
    }
    printf("%1.5f\n",7/4);
    return 0;
}
