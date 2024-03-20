#include<stdio.h>
int main()
{
	float sp,cp,p,l;
	printf("Enter the selling price:");
	scanf("%f",&sp);
	printf("Enter the cost price:");
	scanf("%f",&cp);
	if (sp>cp)
	{  
		p= sp-cp;
		printf("The profit is %f",p);
	}
	else if(sp<cp)
	{
		l=cp-sp;
		printf("The loss is %f",l);
	}
	else
	{ 	printf("It is neither profit nor loss");
	}
}
		
