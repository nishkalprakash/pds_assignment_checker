
#include <stdio.h>
int main(){

int n;
long S1, S2, S3;
printf("Enter the value of n:\n");  //to accept the value of n from the user
scanf("%d",&n);
S1=(n*(n+1))/2;
S2=(n*((2*n)+1)*(n+1))/6;
S3=(n%10)+((n/10)%10)+((n/100)%10);
printf("The value of S1 is: %d\n",S1);
printf("The value of S2 is: %d\n",S2);
printf("The value of S3 is: %d\n",S3);
return 0;


}







