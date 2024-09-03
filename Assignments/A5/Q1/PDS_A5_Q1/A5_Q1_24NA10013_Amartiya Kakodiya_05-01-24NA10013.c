//NAME:Amartiya Kakodiya
//ROLL NO.:24NA10013
//to get an array of size N and print the original array and rearrange the array 
#include<stdio.h>
# define N 100
int main()
{
  int n;
  int a[n],i,j;
  
  scanf("%d",&n);
if(n<N){  
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("original Array:");
    for (i=0;i<n;i++)
    printf("%d\t", a[i]);
}
 
else{
     printf("Error:n>100");
}
 return 0;
}

