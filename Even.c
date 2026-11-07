#include<stdio.h>
#include<stdbool.h>
int Even(int No1)
{
	if ((No1 % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int Value1 = 0;
	int res = 0;
	printf("Enter the first number from user: \n");
	scanf("%d",&Value1);
	

	res = Even(Value1);

	if (res == true)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}



	return 0;
}