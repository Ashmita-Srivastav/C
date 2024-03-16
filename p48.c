#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month number:");
    scanf("%d",&a);
    if(a>0 && a<=12)
    {
    	if(a%2!=0 && a==8){
        	printf("31");
    	}
    	else if(a%2==0 && a!=2){
        	printf("30");
    	}
  		else{
  		  	printf("28 and 29 if leap year");
    	}
    }
    else
    {
    	printf("A year has only 12 months.Please enter valid input ");
	}
}
