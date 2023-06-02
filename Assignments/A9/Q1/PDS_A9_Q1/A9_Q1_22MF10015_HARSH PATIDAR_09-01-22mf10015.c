//NAME : HARSH PATIDAR
// ROLL NO . : 22MF10015
// SECTION : 2
// PROBLEM 1
//DESCRIPTION ;


#include<stdio.h>


int f(int i);
int main(){
    int n ,h=0,k=0 , t=0,a=0, b=1, s,l;
printf("Value on n :");
scanf("%d",&n);
if(n<0)
    {
    printf("please give positive number");
    }

for(int i=0;i<=n;i++)
    {
   t=a+b;
   a=b;
   b=t;
   if (t==n){
    h=1;
    break;
   }

   if (t>n){
    k=i;
     break;
            }
}
if(t==n){
    printf("%d is a fibonacci number",n);
}
else{
 s=f(k+1);
 l=f(k+2);

 if ((n-s)==(l-n)||(n-s)<(l-n))
  printf("nearest fibonacci number is : %d",s);
  if ((n-s)>(l-n))
printf("nearest fibonacci number is : %d",l);
}
return 0;
}




int f(int z)
{
if (z<2)
    {
    return z;
    }
else
    {
    return (f(z-1)+f(z-2));
    }
}
