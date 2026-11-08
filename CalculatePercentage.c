#include<stdio.h>
int Percentage(int Marks,int totalMarks)
{
	float percentage = 0.0f;
	if(Marks > totalMarks || Marks < 0 ||(totalMarks < 0))
	{
		printf("Invalid input :\n");
		return percentage;
	}
	percentage = (((float)Marks / (float)totalMarks)*100);
	return percentage;
	
}

int main()
{
	int Value1 = 0,Value2=0;
	float res = 0.0f;
	printf("Enter the Marks: \n");
	scanf("%d",&Value1);
	printf("Enter the total marks: \n");
	scanf("%d",&Value2);

	res = Percentage(Value1,Value2);

	printf("Percentage is :%f ",res);



	return 0;
}