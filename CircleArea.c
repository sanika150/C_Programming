#include<stdio.h>

float Area(float Radius)
{
    float Ans = 0.0f;
    float PI=3.14;
    Ans = PI * Radius * Radius;
    return Ans;

}
int main()
{

    float Value = 0.0f;
    float Res = 0.0f;
    printf("Enter the raduis of circle:\n");
    scanf("%f",&Value);

    Res = Area(Value);
    printf("Area of circle is :%f\n",Res);
    return 0;
}