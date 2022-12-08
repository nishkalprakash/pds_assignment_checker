/*  Section 14
Roll No  : 22HS10010
Name :Archit Bharani
Assignment No : 5
Description : */
#include <stdio.h>
int power(int , int );
int fact(int );
int power(int x,int n)
{
int p=1;
for(int i=1;i<=n;i++){
p=p*x;
}
return p;
}

int fact(int n){
int factorial=1,i;
for(i=1;i<=n;i++){
factorial=1;
factorial=factorial*i;
}
return factorial;
}


int main()
{
int x,n;
printf("Enter value of x: ");
scanf("%d",&x);
printf("Enter value of n: ");
scanf("%d",&n);
float sum=0;
int i;
for(i=0;i<n;i++){
sum=sum+((float)power(x,i))/(fact(i));
}
printf("Sum= %f",sum);
return 0;
}

