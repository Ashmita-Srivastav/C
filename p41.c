#include<stdio.h>
int main()
{
	char a;
	int b;
	printf("Enter an alphabet:");
	scanf("%c",&a);
	b=a;
	if(a>96 && a<=123)
	{	b=a-32;
		a=b;
		printf("%c",a);
	}
	else if(a>=65 && a<=90)
	{ 
		printf("The alphabet is already in uppercase");
	}
	return 0;
}
