#include<stdio.h>
float DisplayClass(float Percentage)
{
	
	if((Percentage < 0) || (Percentage > 100))
	{
		printf("Invalid Marks :");
		
	}

	if((Percentage >=00.00) && (Percentage < 35.00))
	{
		printf("You are fail..\n");
	}
	else if((Percentage >=35.00) && (Percentage < 50.00))
	{
		printf("you are pass..\n");
	}
	else if((Percentage >=50.00) && (Percentage < 60.00))
	{
		printf("Second class..\n");
	}
	else if((Percentage >=60.00) && (Percentage < 75.00))
	{
		printf("First class..\n");
	}
	else if((Percentage >=75.00) && (Percentage < 100.00))
	{
		printf("First class with distinction..\n");
	}	
}

int main()
{
	float Value1 = 0.0f;
	
	printf("Enter the Percentage: \n");
	scanf("%f",&Value1);
	

	DisplayClass(Value1);

	//printf("Percentage is :%f ",res);



	return 0;
}


    