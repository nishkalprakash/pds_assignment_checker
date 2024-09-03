#include<stdio.h>
int main()
{
#define N 100
int num[N];
int i,k,n,t;
scanf("%d", &n);
  if(n>100){
    printf("Error: n>100");
    return 0;}
for(i=0;i<n;i++)
   scanf("%d",&num[i]);
printf("Original Array: ");
      for(i=0;i<n;i++){
      printf("%d ",num[k]);
      k++;
      }
printf("\nRearranged Array: ")
for(i=0;i<n;i++)
   for(j=i,j<n,j++)
      t=num[i];
      num[i]=num[j];
      num[j]=t;
      printf("%n",num[i]);
      return 0;
}

