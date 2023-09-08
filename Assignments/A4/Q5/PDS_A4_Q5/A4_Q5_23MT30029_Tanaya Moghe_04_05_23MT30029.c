//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
int main()
{ 
	int a,j,sum=0,maxa=0, maxb=0;
	printf("Enter an integer value\n");
	scanf("%d", &a);
	if(a>9){
		while(a>0){
			j=a%10;
			sum= sum+j;
			if(j>=maxa && j>=maxb){
				maxb = maxa;
				maxa=j;
			}
			else if(j<=maxa && j>=maxb)
			maxb=j;
			a/=10;
			}
   		printf("The sum of digits is %d\n", sum);
		printf("Largest = %d , second largest = %d\n", maxa, maxb);
		}
	else {
    		printf("largest digit = %d , second largest = 0\n", a);
 		printf("sum = %d\n", a);
		}
	return 0;
}

