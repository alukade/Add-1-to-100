#include<stdio.h>
int main(void)
{
	int i = 1, sum = 0;
	while (i <= 100)//��Ϊwhileѭ�����ڲ�
	{
		sum = sum + i;
		i++;//�Լ�
	}
	printf("sum=%d", sum);
	return 0;


}