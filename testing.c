#include <stdio.h>

unsigned int GetP(unsigned int);
int Modulation(unsigned int);

int main()
{
	unsigned int a = 1;
	unsigned int *list = &a;
	unsigned int *list2 = list;
	unsigned int num = 0;
	printf("input : ");
	scanf("%u", &num);
	//printf("1 ");
	printf("this is p : %u", GetP(num));
	return 0;
	
}

unsigned int GetP(unsigned int num)
{
	unsigned int count = 2;
	unsigned int p = 0;
	while(count<=num)
	{
		if(Modulation(count) == 1)
		{
			p += 1;
			//printf("%u ", count);
		}
		count += 1;
	}
	return p;
}

int Modulation(unsigned int num)
{
	unsigned int count = 2;
	while(count < num)
	{
		if(num%count == 0)
		{
			return 0;
		}
		count += 1;
	}
	return 1;
}
