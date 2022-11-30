#include<stdio.h>

int main() {
   int a;
   int c=1;

   printf("Enter any number:");
   scanf("%d",&a);
   printf("The factors of the no. are:");

if(a>0) {
	while(c<=a) {
	    if(a%c==0)
		printf("%d ",c);
	    c++;
	}
}
else if(a==0)
	printf("0");
     else if(a<0){
	  while(c<=(-a)) {
             if(a%c==0)
      		printf("%d ",c);
                c++;
	  }
	}

printf("\nThankyou");
return 0;
}

