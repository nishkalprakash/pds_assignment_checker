/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 8*/
#include<stdio.h>
#define max_size 100
int main()
{
  int i,j,a[ max_size][ max_size],m,n,min,tempr[3],tempc[3],max;
  printf(" Enter the number of elements of rows and coloumns: \n");
scanf("%d %d",&m,&n);
  printf(" Enter the  elements of   rows and coloumns: \n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
}
 
for(i=0;i<m;i++)
{  
  min=a[i][0];
  for(j=0;j<n;j++)
    { 
      if(min>a[i][j])
      min=a[i][j];
    }
   tempr[i]=min;  
}
printf("minmumas of rows : \n"); 
 for(i=0;i<3;i++)
{
  printf("%d\n",tempr[i]);
}
for(i=0;i<m;i++)
{  
  max=a[0][j];
  for(j=0;j<n;j++)
    { 
      if(max<a[j][i])
      max=a[j][i];
    }
   tempc[i]=max;  
}
  printf("Maximuma of coloumn: \n");

 for(i=0;i<3;i++)
{
  printf("%d\n",tempc[i]);
}   
int flag=0;
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
    { 
      if(tempr[i]==tempc[j])
     {
      flag=1;
       printf("The saddle point is %d\n",tempr[i]);
     }
    }

}
if(flag==0)
printf("There is no saddle point");
 return 0;
}




      
