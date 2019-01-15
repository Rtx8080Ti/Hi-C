#include<stdio.h>

int main() //Hailstone 函数
{
    int length = 1;
    int n;
    printf("n=");
    scanf("%d",&n);
    while (1 < n)
    {
        (n % 2) ? n = 3 * n + 1 : (n /= 2);
        printf("n=%d\n",n);
        length ++;
    }
    printf("长度=%d\n",length);
}
