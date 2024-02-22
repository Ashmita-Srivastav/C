#include<stdio.h>
int main()
{
	float a,b,c,d,e,tot,avg,per;
	printf("Enter the marks subject 1:");
	scanf("%f",&a);
	printf("Enter the marks subject 2:");
	scanf("%f",&b);
	printf("Enter the marks subject 3:");
	scanf("%f",&c);
	printf("Enter the marks subject 4:");
	scanf("%f",&d);
	printf("Enter the marks subject 5:");
	scanf("%f",&e);
	tot=a+b+c+d+e;
	avg=tot/5;
	per= (tot*100)/500;
	printf("Average=%f Percentage=%f",avg,per);
}
	
