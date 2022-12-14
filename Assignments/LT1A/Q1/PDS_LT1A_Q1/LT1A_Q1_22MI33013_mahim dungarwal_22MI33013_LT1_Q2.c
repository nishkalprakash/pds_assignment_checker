#include <stdio.h>

int main () 
{
int n;
int sum =0;
int j =2;
int i = 1;
printf("enter value of n :  ");
scanf("%d", &n);

while (j <=n){ 

while(i<j) {
if(j%i == 0) {
sum = sum + i ;
}

if(sum == j ) {
printf("%d is a perfect number", j);
}
}
j++;
}
return 0;
}

