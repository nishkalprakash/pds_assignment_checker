//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:6
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
int searchset(int *A,int n,int x)
{ int i;
 for(i=0;i<n;i++)
 {if(A[i]==x)
  printf("the value is present");}
}



int *Buildset(int *A,int n)
{int i,x;
  A=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
  {printf("enter the values:");
   scanf("%d",&A[i]);
  }
 printf(" enter the value to be searched:");
 scanf("%d",&x);
 searchset(A,n,x);
} 





int main()
{int n *A;
 printf("enter the value of n:");
 scanf("%d",&n);
 Buildset(A,n);
return 0;
}
