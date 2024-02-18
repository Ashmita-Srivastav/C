#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the price(in paisa):");
	scanf("%d",&a);
	b=a%100;
	c=a/100;
	
	printf("%d rupees %d paisa \n",c,b);
	}
	
