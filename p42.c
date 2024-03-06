#include<stdio.h>
int main()
{
	char a;
	printf("Enter an alphabet:");
	scanf("%c",&a);
	if(a>='a'&& a<='z'|| a>='A' && a<='Z')
	{
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
		{	printf("%c is a vowel",a);
		}
		else if(a=='b'||a=='c'||a=='d'||a=='f'||a=='g'||a=='h'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='u'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z')
		{ 
			printf("%c is a consonant",a);
		}
		else
		{
			printf("%c is not an alphabet",a);
		}
	}
	else{
		printf("Enter an alphabet");
		}
	return 0;
}
