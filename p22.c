#include <stdio.h>
int main()
{
	float a,b;
	printf("Enter the two numbers:");
	scanf("%f%f",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;	
	printf("%f \n %f",a,b);
	}
