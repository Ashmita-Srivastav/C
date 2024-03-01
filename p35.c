#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a!=b!=c)
	{
		if(a>b&&a>c)
		{
			printf("The largest number between %d,%d and %d is %d",a,b,c,a);
		}
		else if(b>a&&b>c)
		{
			printf("The largest number between %d,%d and %d is %d",a,b,c,b);
		}
		else
		{ 
			printf("The largest number between %d,%d and %d is %d",a,b,c,c);
		}
	}
	else{
		printf("Enter distinct numbers");
		}
	return 0;
}
