#include<stdio.h>
int main()
{
    int a,b,o,c;
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    printf("Enter the operation(add-1,subtract-2,multipy-3,divide-4):");
    scanf("%d",&o);
    if(o==1){
        c=a+b;
        printf("%d + %d is %d",a,b,c);
    }
    else if(o==2){
        c=a-b;
        printf("%d - %d is %d",a,b,c);
    }
    else if(o==3){
        c=a*b;
        printf("%d * %d is %d",a,b,c);
    }
    else{
        c=a/b;
        printf("%d / %d is %d",a,b,c);
    }
}
