#include<stdio.h>
int main(void)
{
	int i = 1, sum = 0;
	while (i <= 100)//此为while循环体内部
	{
		sum = sum + i;
		i++;//自加
	}
	printf("sum=%d", sum);
	return 0;


}