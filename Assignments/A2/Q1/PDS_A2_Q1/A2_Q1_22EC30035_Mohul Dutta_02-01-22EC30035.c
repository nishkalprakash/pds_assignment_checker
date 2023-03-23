#include<stdio.h>//header file
int main(){
int n;
printf("Enter an integer ");
scanf("%d",&n);//taking in an input
int S1,S3;
long S2;
S1=(n*(n+1))/2;//using the direct arithmetic progression formula
S2=(long)(n)*(long)((n+1))*(long)((2*n+1))/6;//using another maths formula
S3=(n%10)+((n/10)%10)+(n/100)%10;// as its given its a 3 digit number so finding the remainder after diving n,n/10 , n/100 by 10

printf("S1=%d\n",S1);
printf("S2=%lu\n",S2);
printf("S3=%d",S3);
return 0;
}
