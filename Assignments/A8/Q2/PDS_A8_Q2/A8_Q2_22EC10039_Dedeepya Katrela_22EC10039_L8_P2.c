//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:8
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
int main()
{int row,col,i,j,min[10],max[10],flag;
 printf("shape of the 2D array:");
 scanf("%d %d",&row,&col);
int a[row][col];
printf("enter the values of the array:");
for(i=0;i<row;i++)
 {for(j=0;j<col;j++)
   {scanf("%d",&a[i][j]);}
 }

for(i=0;i<row;i++)
 {min[i]=a[i][0];
  max[i]=a[0][i];
  for(j=0;j<col;j++)
   {if(a[i][j]<min[i])
     {min[i]=a[i][j];}
    if(a[j][i]>max[i])
     {max[i]=a[j][i];}
   }
  }
  for(i=0;i<row;i++)
  {for(j=0;j<col;j++)
   {if(min[i]==max[j])
     {printf("saddle point is %d\n",a[i][j]);
      flag=0;
      break;}
    else
     flag=1;
   }
  }
if(flag==1)
printf("there is no saddle point\n");
return 0;
}
