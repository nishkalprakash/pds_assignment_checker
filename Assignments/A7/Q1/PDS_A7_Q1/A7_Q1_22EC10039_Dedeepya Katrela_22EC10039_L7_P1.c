//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:7
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <stdlib.h>
int main()
{int *a,n,p,i,j,temp;
 a=(int*)malloc((n+1)*sizeof(int));
 printf("enter the value of n:");
 scanf("%d",&n);
 printf("enter the values of array(in sorted order):");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);}
 printf("enter a new value p:");
 scanf("%d",&p);
 
 for(i=0;i<n;i++)
 {if(p<a[i])
  {for(j=n;j>i;j--)
    {printf("%d\n",a[j]);
      a[j]=a[j-1];}
   a[i]=p;
  break;  
  }
 } 
if(p>a[n-1])
 {a[n]=p;}

 printf("output array:");
 for(i=0;i<n+1;i++)  
 {printf("%d ",a[i]);}
printf("\n");

return 0;
}
