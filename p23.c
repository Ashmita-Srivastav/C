#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the distance(in meter):");
	scanf("%d",&a);
	b=a%1000;
	c=a/1000;
	
	printf("%d Km %d meter \n",c,b);
	}
	
