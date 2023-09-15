//ROLL NO.:23BT30019
//NAME: NAZEER ANWAR
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,c,r=0;
int array[50];
printf("enter the number of random number to be generated\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
   array[i]=(rand() % 90)+10 ;
   }
    
printf("array content\n");
for(i=0;i<n;i++)
{
  printf("%d\n",array[i]);
   }
    
for(i=0;i<(n-2);i=i+2)
{
if(array[i]>array[i+2])
{
c=array[i];
array[i]=array[i+2];
array[i+2]=c;
r++;
}
}
printf("Array after interchanges\n");
for(i=0;i<n;i++)
{
  printf("%d\n" ,array[i]);
   }
    printf("Number of interchanges is %d\n",r);

}








