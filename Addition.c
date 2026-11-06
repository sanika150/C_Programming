#include<stdio.h>
int Addition(int No1,int No2)
{
	int ans = 0;
	ans = No1 + No2;
	return ans;
}

int main()
{
	int Value1 = 0, Value2=0;
	int res = 0;
	printf("Enter the first number: \n");
	scanf("%d",&Value1);
	printf("Enter the second number \n");
	scanf("%d",&Value2);

	res = Addition(Value1,Value2);
	printf("Result is : %d\n",res);



	return 0;
}