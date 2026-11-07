#include<stdio.h>


int main()
{
	int Value1 = 0,Value2=0,Value3 = 0;
	
	printf("Enter the first number from user: \n");
	scanf("%d",&Value1);
	printf("Enter the second number from user: \n");
	scanf("%d",&Value2);

	printf("Before Swapping : %d %d\n",Value1,Value2);
	Value3 = Value1;
	Value1 = Value2;
	Value2 = Value3;

	printf("After Swapping : %d %d\n",Value1,Value2);
	



	return 0;
}