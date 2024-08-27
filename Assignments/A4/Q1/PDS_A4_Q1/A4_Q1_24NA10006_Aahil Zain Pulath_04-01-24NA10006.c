//lab 4 assingment 1
#include<stdio.h>
int main()
{
int N,a=1,b=-1,i=1,diff1,temp1;
//above line variable has been declared
printf("ENTER VALUE OF N:");
scanf("%d",&N);
//after this you will see N validity and N upto 2 special cases
if (N<=0) 
 {
 printf("N is invalid:");
 }
else if(N==1)
{
printf("1");}
else if (N==2)
{
printf("1 -1");
}
//this is where pattern printing is N for more than 2 
else if (N>=2)
{
 printf("1 -1");
 while (i<=(N-2))
  {
   diff1=a-b;
   printf(" %d \t",diff1);
   a=b;
   temp1=diff1;
   b=temp1;
   i++;
   }
}   
return(0);
}
