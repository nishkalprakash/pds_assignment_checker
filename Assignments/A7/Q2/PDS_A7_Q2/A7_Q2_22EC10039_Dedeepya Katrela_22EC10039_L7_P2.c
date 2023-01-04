//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:7
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>

int main()
{int a[100],b[100],n,i,j,r=0,p,count,m;
 printf("enter the number of values of the array:");
 scanf("%d",&n);
 printf("values of array:");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);}
  printf("enter the value of m:");
  scanf("%d",&m);
 for(i=0;i<n;i++)
 {count=0;
   for(j=0;j<n;j++)
   {if(a[i]==a[j])
     count++;} 
  if(count==m)
   {b[r]=a[i];
    r++;}
 }
 if(r>0)
 {for(i=0;i<r;i++)
   {printf("%d ",b[i]);}
  printf("appears %d times\n",m);
 }
 else
 printf("no number appears %d times\n",m);
 
return 0;
}
