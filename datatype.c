#include<stdio.h>

int main()
{
	int a = 10;
	char ch ='S';
	float f = 21.5f;
	double d = 23.4556;
	
	printf("value of integer is : %d\n",a);
	printf("value of character is : %c\n",ch);
	printf("value of float is : %f\n",f);
	printf("value of double is : %lf\n",d);

	printf("Address of a is: %d\n",&(a));
	printf("Address of ch is:%d \n",&(ch));
	printf("Address of f is: %d\n",&(f));
	printf("Address of d is: %d\n",&(d));

	printf("Size of a is : %d\n",sizeof(a));
	printf("Size of ch is : %d\n",sizeof(ch));
	printf("Size of f is :%d \n",sizeof(f));
	printf("Size of d is :%d \n",sizeof(d));

	return 0;
}