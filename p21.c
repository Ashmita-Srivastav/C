#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,z;
	printf("Enter the sides of triangle:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2 ;
	z=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area = %f",z);
	}
