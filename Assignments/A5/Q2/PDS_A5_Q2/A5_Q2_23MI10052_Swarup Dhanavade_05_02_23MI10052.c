// swarup jayaram dhanavade
// 23MI10052

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[50],n,max=0,min=0,count=0;
  
  printf("\n Enter number of randoms numbers (Maximum 50):");//maximum 50
  scanf("%d",&n);

  //Reading n random numbers
  for(int i=0;i<n;i++){
    a[i]=rand()%41 +10;
  }

  // Priting the array values
  for(int i=0;i<n;i++){
    printf(" a[%d] = %d \n",i, a[i]);
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<0;k++){
	if(a[i] + a[j] + a[k] <=6= && i!=j!=k) printf ("sum %d , %d and %d is less than 60 ", a[i],a[j],a[k]);
      }
    }
  }
   
  
