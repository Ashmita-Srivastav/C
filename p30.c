#include<stdio.h>
int main()
{	float d1,avg;
	int s1;
	printf("Input total distance in Km:");
	scanf("%f",&d1);
	printf("Input total fuel spent in litres:");
	scanf("%d",&s1);
	avg=d1/s1;
	printf("Average consumption(km/lt)= %f",avg);
	return 0;
	}
