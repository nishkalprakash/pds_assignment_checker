//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:8
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
int main()
{int n,i,j;
 printf("enter the number of elements in a row=");
 scanf("%d",&n);
 int a[n][n];
 printf("enter the values of the array:");
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
   {scanf("%d",&a[i][j]);}
  }
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
   {printf("%d ",a[j][i]);}
  }
 printf("\n");
return 0;
}
