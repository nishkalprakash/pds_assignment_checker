//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS
 
#include<stdio.h>
int pow(int a,int b)
{ int i,term=1;
  for(i=1;i<=b;i++)
   {term=term*a;}
return(term);
}

void armstrong(int n)
{int count=0,i,A[10],term,sum=0,a;
  a=n;
  while (n>0)
   {A[count]=n%10;
    n=n/10;
    count++;}
  for(i=0;i<count;i++)
   {term=pow(A[i],count);
    sum=sum+term;}
  if(sum==a)
   {printf("%d ",a);}
}



int main()
{   int n,i;
   printf("enter the value of n:");
   scanf("%d",&n);
   if(n<=0)
    {printf("invalid input\n");}
   else
    {for(i=1;i<=n;i++)
      {armstrong(i);}
    }
return 0;
}













