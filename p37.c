#include<stdio.h>
int main()
{
	char a,b;
	printf("Enter an alphabet:");
	scanf("%c",&a);
	if(a>='A'&& a<='Z')
	{
		b=a+32;
		printf("%c in lowercase is %c \n",a,b); 
	}
	else{
		printf("%c is already in lowercase \n",a);
		}
	return 0;
}
