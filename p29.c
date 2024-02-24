#include<stdio.h>
int main()
{	float w1,w2,avg;
	int n1,n2;
	printf("Weight of item1:");
	scanf("%f",&w1);
	printf("Number of item1:");
	scanf("%d",&n1);
	printf("Weight of item2:");
	scanf("%f",&w2);
	printf("Number of item2:");
	scanf("%d",&n2);
	avg=((w1*n1)+(w2*n2))/(n1+n2);
	printf("Average value= %f",avg);
	return 0;
	}
