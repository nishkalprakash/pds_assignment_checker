#include<stdio.h>
 int main (){
 int n,i;
printf( "enter any number");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {
 int remainder=n%i;
 if(remainder==0)
 printf ("%d\n",i);
}
return 0;
}
