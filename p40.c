#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("The largest number between %d and %d is %d",a,b,a);
	}
	else
	{ 
		printf("The largest number between %d and %d is %d",a,b,b);
	}
	return 0;
}
