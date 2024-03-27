#include<stdio.h>
int main()
{
	int a,b,o;
	float c;
	printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    printf("Enter the operation(add-1,subtract-2,multipy-3,divide-4,remainder-5):");
    scanf("%d",&o);
    if(b!=0)
    {
   		 switch(o)
    	{	
    		case 1: c=a+b;
    	    		printf("Addition of %d and %d is %f",a,b,c);
    				break;
    			
    		case 2: c=a-b;
    	    		printf("difference of %d and %d is %f",a,b,c);
    				break;
    				
    		case 3: c=a*b;
 			       	printf("product of %d and %d is %f",a,b,c);
 			       	break;
 		       		
    		case 4: c=a/b;
    	    		printf("quotient on dividing is %d and %d is %f",a,b,c);
    	    		break;
    	    		
        	case 5: c= a % b;
        			printf("remainder on dividing %d and %d is %f",a,b,c);
        			break;
        				
    	    default: printf("Enter the apropriate operation");
    	}
    }  
    else{
    	printf("one of the entered number is 0");    
    }
}
