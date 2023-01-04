//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:7
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
void sort(int *a,int n)
{int i,j,temp;
 for(j=0;j<n;j++)
  {for(i=1;i<n;i++)
    {if(a[i-1]<=a[i])
      {temp=a[i];
       a[i]=a[i-1];
       a[i-1]=temp;}
    }
   }
}
 
int main()
{ int *a,i,n;
  printf("enter the value of n:");
  scanf("%d",&n);
  a=(int*)malloc(n*sizeof(int));
  printf("values of array are:");
  for(i=0;i<n;i++)
  {scanf("%d",&a[i]);}
  sort(a,n);
  for(i=0;i<n;i++)
  {printf("%d",a[i]);}
 printf("\n");
if((a[0]/10>0)&&(a[n-1]/10==0)&&((a[0]/10)<=a[n-1]))
 {printf("%d",a[n-1]);
  for(i=0;i<n-1;i++)
   {printf("%d",a[i]);}
  printf("\n");}

return 0;
}
