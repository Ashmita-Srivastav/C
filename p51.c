#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of the triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c &&   b+c>a && a+c>b)
	{	printf("%d %d %d forms a triangle \n",a,b,c);
	}
	else{
		printf("%d %d %d do not forms a triangle \n",a,b,c);
	}
}
