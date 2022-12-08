//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS

#include<stdio.h>

int power(int x,int n)
{ int i,term=1;
  if(n>0)
  {for(i=1;i<=n;i++)
     {term=term*x;}
  }

 return(term);
}

int fact(int n)
{ int i,term=1;
  if(n>0)
   {for(i=1;i<=n;i++)
     {term=term*i;}
   }
 return(term);
}

int main()
{ int i,n,x;
  float sum;
  printf("enter the value of x and value number of terms (n):");
  scanf("%d %d",&x,&n);
  for(i=0;i<n;i++)
    { sum=sum+((float)power(x,i)/fact(i));}
  printf("sum of first %d terms is:%f\n",n,sum);


return 0;
}




