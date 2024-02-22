#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter two number:");
	scanf("%f%f",&a,&b);
	b = (a+b) - (a=b);
	printf("%f %f",a,b);
}
