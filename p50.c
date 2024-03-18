#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter the angles of a triangle:");
	scanf("%f%f%f",&a,&b,&c);
	d=a+b+c;
	if(a<180 && b<180 && c<180)
	{	if(d==180)
		{
			printf("The triangle is valid");
		}
	
		else
		{
			printf("The triangle is invalid");
		}
	}
	else{
		printf("Invalid input");
	}
	return 0;
}
