//windows 1709  MVS2017
#include <stdio.h>
struct {				//定义一个结构
	int amount;			//包含一个数字数组
	char *name;			//包含一个字符串数组
}coins[] = {			//数组名称coins
	{1,"penny"},		//{n,"char"}
	{2,"nickel"},
	{10,"dine"},
	{25,"quarter"},
	{50,"half-dollar"}
};

int main()				//主函数
{
	int r;				//第r个
	int key = 10;		//寻找的数
	int a[] = { 1,2,3,50,4,5,6,7,8,9,10,11,14,32,34,56,23,25,60, };	
	for (int i = 0; i < sizeof(coins) / sizeof(coins[0]);i++)	//从第一个找到第len个
	{
		if (key == coins[i].amount) {			//如果寻找的数等于coins[]中amount数组中的数字
			printf("%s\n", coins[i].name);		//输出coins[]数组中的对应数字后面的字符串
			break;
		}
	}
	system("pause");
	return 0;
}