#include<stdio.h>
int main()
{
    int a;
    printf("Enter total marks(out of 100):");
    scanf("%d",&a);
    if(a>=90 && a<=100){
        printf("Your grade is O");
    }
    else if(a>=80 && a<=89){
        printf("Your grade is E");
    }
    else if(a>=70 && a<=79){
        printf("Your grade is A");
    }
    else if(a>=60 && a<=69){
        printf("Your grade is B");
    }
    else if(a>=50 && a<=59){
        printf("Your grade is C");
    }
    else if(a>=40 && a<=49){
        printf("Your grade is D");
    }
    else{
        printf("Your grade is F");
    }
}
