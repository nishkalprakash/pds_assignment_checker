#include <stdio.h>

int main ()
{
	int a, b ,c,d;  
	printf("the total number of kilometer travelled taxi   \n");

 	scanf("%d", &a );

	printf("the total  time taken by the taxi in hours \n");

	scanf("%d", &b );
 	
	if(0<=a && a<=8){ 
	c=20;
	
	}
	else if (8<a && a<=12) {
	 c= (a-8)*10+20;
	
	}
       else if (12<a && a<=16) {
	 c= (a-12)*8+60;
	
	}
	else if(16<a && a<=20) {
	 c= (a-16)*6+92;

	}
	else if(20<a) {
	 c= (a-20)*5+116;

	
	} 

       if(b>1 && b<=12) {
	 d= 200+c;

	
	}
	else if(b>12 && b<=24) {
	 d= 500+c;

	printf("payable amount is %d \n",d);
	}
	else if (b>24) {
	int e=b/24; // days
        if(b%24!=0)
           e=e+1;
        
        int f=(e-1)*300+500;
        d=f+c;
        
	printf("payable amount is %d \n",d);
	}
  	return 0;
}
