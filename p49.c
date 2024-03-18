#include<stdio.h>
int main()
{
	int a,fh,h,fi,tw,te,f,t,o;
	printf("Enter the amount:");
	scanf("%d",&a);
	fh=h=fi=tw=te=f=t=o=0;
	if(a>=500)
	{
		fh=a/500;
		a = a- (fh * 500);		
	}
	if(a>=100)
	{
		h=a/100;
		a = a- (h * 100);	
	}
	if(a>=50)
	{
		fi=a/50;
		a = a- (fi * 50);		
	}
	if(a>=20)
	{
		tw=a/20;
		a = a- (tw * 20);	
	}
	if(a>=10)
	{
		te=a/10;
		a = a- (te* 10);	
	}
	if(a>=5)
	{
		f=a/5;
		a = a- (f *5);
	}
	if(a>=2)
	{
		t=a/2;
		a = a- (t * 2);	
	}
	if(a>=1)
	{
		o=a/1;
		a = a- (o * 1);
	}
	printf("Total number of notes = \n");
    	printf("500 = %d\n", fh);
    	printf("100 = %d\n", h);
    	printf("50 = %d\n", fi);
    	printf("20 = %d\n", tw);
    	printf("10 = %d\n", te);
    	printf("5 = %d\n", f);
    	printf("2 = %d\n", t);
    	printf("1 = %d\n", o);

    return 0;
}

