#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the two numbers:");
	scanf("%f%f",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%f \n %f",a,b);
	}
