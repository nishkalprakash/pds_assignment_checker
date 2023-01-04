//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:7
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
int sort(int *a,int n)
{int i,j,temp,count=0;
 for(j=0;j<n;j++)
  {for(i=1;i<n;i++)
    {if(a[i-1]>=a[i])
      {count++;
       temp=a[i-1];
       a[i-1]=a[i];
       a[i]=temp;}
    }
   }
return (count);
}
int main()
{int *a,n,i,count;
 printf("enter the value of n:");
 scanf("%d",&n);
 a=(int*)malloc(n*sizeof(int));
  printf("values of array are:");
  for(i=0;i<n;i++)
  {scanf("%d",&a[i]);}
  count=sort(a,n);
  printf("%d are out of order",count);
return 0;
}
 
