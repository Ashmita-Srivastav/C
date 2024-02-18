#include<stdio.h>
int main()
{
	int a, b, c,d, e;
	printf("Enter time in seconds: ");
	scanf("%d", &a);
	b = a/3600;
	c = a%3600;
	d = c/60;
	e = c%60;
	printf("%d Hour %d Minute and %d Second",b,d,e);
	return 0;
}
