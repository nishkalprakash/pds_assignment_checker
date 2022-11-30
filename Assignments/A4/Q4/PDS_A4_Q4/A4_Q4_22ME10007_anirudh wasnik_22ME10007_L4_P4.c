
#include<stdio.h>
int main()
{

int r,c,l,b;

printf("enter number between 2 and 10:\n");
scanf("%d",&l);

for(r=1;r<=l;r=r+1){
   for(c=1;c<=r;c=c+1){
     if(c%2==1)                              //as we need "1" at odd places and...
       printf("1");
     else
       printf("0");                         //... "0" at even places
   }

printf("\n");
}
return 0;
}
