#include<stdio.h>
int power (int x, int n)// power function 
{ int powerpart = 1;

for(int j=1;j<=n;j++)
{
  powerpart = powerpart * x ;
  }
  return powerpart;
}

int fact (int n)//factorial function 
{int k=1 ;

for(int i=1;i<=n;i++)
{ k= k*i;}
return k;}

int main()// the main function where we mention power function and factorial function 
{float sum ;
sum = 0 ;
int x;
int n;
printf("ENTER THE VALUE OF NUMBER X");
scanf("%d",&x);
printf("ENTER THE VALUE OF NUMBER N");
scanf("%d",&n);
for (int l=0;l<=n-1;l++)
{sum = sum +  (float)power (x,l) /  fact(l) ;}// the final function where we are using the two functions 
 printf("the sum of the first n terms of the given series :%f",sum );
 
 return 0 ; 
}
