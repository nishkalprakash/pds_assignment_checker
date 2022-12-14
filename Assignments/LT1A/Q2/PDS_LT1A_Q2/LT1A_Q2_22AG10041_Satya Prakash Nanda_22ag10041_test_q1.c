/*
satya prakash nanda
22ag10041
section 14
lab test 1
set A
ques 1
*/
#include<stdio.h>
int main()
{
int n;							//declaration of variable
printf("enter a number:");  				 // asking for an input
scanf("%d", &n);
int count=1;
for(int i=1; i<=n; i++){                		  //first loop
	for(int j=1; j<=i; j++){			//second loop(nested)
			printf(" %d ",count);
			count++;			//count++ for increment of number 
		}
	printf(" \n");
	}

return 0;
}
