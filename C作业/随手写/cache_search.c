//windows 1709  MVS2017
#include <stdio.h>
struct {				//����һ���ṹ
	int amount;			//����һ����������
	char *name;			//����һ���ַ�������
}coins[] = {			//��������coins
	{1,"penny"},		//{n,"char"}
	{2,"nickel"},
	{10,"dine"},
	{25,"quarter"},
	{50,"half-dollar"}
};

int main()				//������
{
	int r;				//��r��
	int key = 10;		//Ѱ�ҵ���
	int a[] = { 1,2,3,50,4,5,6,7,8,9,10,11,14,32,34,56,23,25,60, };	
	for (int i = 0; i < sizeof(coins) / sizeof(coins[0]);i++)	//�ӵ�һ���ҵ���len��
	{
		if (key == coins[i].amount) {			//���Ѱ�ҵ�������coins[]��amount�����е�����
			printf("%s\n", coins[i].name);		//���coins[]�����еĶ�Ӧ���ֺ�����ַ���
			break;
		}
	}
	system("pause");
	return 0;
}