//windows 1709  MVS2017 2018年12月10日14:08:10
#include <stdio.h>
int maxid( int a[],int len) {   //maxid函数返回数组最大值的下标
	int ret = 0;                //默认第一个
	for(int i=0;i<len;i++)      //循环找出最大的值
	if (a[i] > a[ret])          //找出最大的值
	{
		ret = i;                //最大值的下标赋值给ret
	}
	return ret;                 //返回下标
}
int pra0(int len, int a[])      //pra0函数 打印数组
{
	for (int i = 0;i < len;i++) //遍历数组打印
	{
		
		printf("%d ",a[i]);
		// printf("当前i=%d len=%d\n", i, len);
	}
	return 0;
}
int main()				//主函数
{
	//int key = 10;		//寻找的数
	int a[] = { 1,61,3,50,};            //需要排序的数组
	int len = sizeof(a) / sizeof(a[0]); //len等于数组长度
	for (int i = len - 1;i > 0;i--)     //遍历数组 把最大值从右向左依次排序
	{
		int max = maxid(a, i+1);        //使用maxid函数找到最大的数字
		int r = a[max];                 //让中间值是当前最大值
		a[max] = a[i];                  //把最后的数字赋值给最大值
		a[i] = r;                       //把当前最大值赋值给len-1位置的数
	}
	
	
	pra0(len, a);                       //使用pra()函数打印数组
	//system("pause");
	return 0;
}
