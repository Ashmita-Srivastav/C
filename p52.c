#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of the triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && a==c && b==c)
	{	printf("The triangle is an equilateral triangle \n");
	}
	else if(a==b || b==c || a==c)
	{
		printf("The triangle is an isosceles  triangle \n");
	}
	else{
		printf("The triangle is scalene triangle \n");
	}
}
