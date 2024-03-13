#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter the coefficient of x^2:");
	scanf("%f",&a);
	printf("Enter the coefficient of x:");
	scanf("%f",&b);
	printf("Enter the constant:");
	scanf("%f",&c);
	printf("The quadratic equation is %fx^2+%fx+%f",a,b,c);
	d=(-b+sqrt((b*b))-(4*a*c))/2*a;
	e=(-b-sqrt((b*b))-(4*a*c))/2*a;
	if(d=e)
	{	
		printf("Real and equal roots");
	}
	else if(d!=e)
	{ 
		printf("Real and distinct roots");
	}
	else
	{
		printf("No real roots exists");
	}
	return 0;
}
