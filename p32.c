#include<stdio.h>
#include<math.h>
int main()
{	float p,r,t,si,ci;
	printf("Input Principle amount:");
	scanf("%f",&p);
	printf("Input Rate:");
	scanf("%f",&r);
	printf("Input time(in years):");
	scanf("%f",&t);
	si=(p*r*t)/100;
	ci=p*pow(1+(r/100),t);
	printf("SIMPLE INTEREST=%f",si);
	printf("COMPOUND INTEREST=%f",ci);
	return 0;
}
