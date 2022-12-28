//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:6
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
int gcd(int m,int n)
{ int rem,temp;
  if(m>n)
  {temp=m;
   m=n;
   n=temp;}
  if(n%m==0)
    return m;
  else
    return(gcd(m,n%m));
}
void coprime(int a,int b)
{ int g;
  g=gcd(a,b);
  if(g==1)
   printf("(%d , %d)  ",a,b);
}
void pair(int p[],int size)
{ int i,j;
  for(i=0;i<size;i++)
   {for(j=i+1;j<size;j++)
      {coprime(p[i],p[j]);}
   }
}

int main()
{int *p,n,i;
 printf("enter the value of n:");
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 printf("enter the values of array:");
 for(i=0;i<n;i++)
  {scanf("%d",&p[i]);}
 for(i=0;i<n;i++)
  {
   
   if(p[i]<0)
    {printf("Invalid entries:All should be positive numbers\n");
     return 0;}
  }
  
 
 pair(p,n);

return 0;
}
