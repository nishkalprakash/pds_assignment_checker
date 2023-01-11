#include<stdio.h>
int main()
{
int a,b,i,j,k,z,count2=0;
printf("Enter the number of rows ");
scanf("%d",&a);
printf("Enter the number of columns ");
scanf("%d",&b);
int arr[a][b];
for(int i=0;i<a;i++)
{
printf("Enter The elements of %d row ",i+1);
for(int j=0;j<b;j++)
{
  scanf("%d",&arr[i][j]);
}
}
int count=0;
int count1=0;
for(int i=0;i<a;i++)
{
   for(int j=0;j<b;j++)
{
   for(int k=0;k<a;k++)
{                      //Checking column condition
   if(arr[i][j]<=arr[k][j])
  count++;
}
   for(int z=0;z<b;z++)
{                    //Checking row condition
    if(arr[i][j]>=arr[i][z])
count1++;
}

if(count==1 && count1==1){
printf("Saddle point is %d",arr[i][j]);
count2++;
}
count=0;
count1=0;
}
}
if(count2==0)
printf("No Saddle point");
return 0;
}
