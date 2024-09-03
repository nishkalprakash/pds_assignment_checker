#include <stdio.h>
#define n 100
int main()
{
int num[n];//num ia array
int i,j,k,l,m,temp;
scanf("%d",&m);
if(m>n)
   printf("error: n>100");
for (i=0;i<m;i++)// input fron user
   scanf("%d",&num[i]);
printf("original array:");
for (j=0;j<m;j++)//printing the original array
    printf("%d,",num[j]);  
printf("\n");  

printf("rearranged array:");
for (l=0;l<=m-1;l++)//printing the rearranged array
  if(num[l]<0)
    printf("%d,",num[l]); 
for (l=0;l<=m-1;l++)//printing the rearranged array
  if(num[l]>0)
    printf("%d,",num[l]);   
return 0;
}
