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
    a[i]=rand()%91 +10;
  }

  // Priting the array values
  for(int i=0;i<n;i++){
    printf(" a[%d] = %d \n",i, a[i]);
  }
    
  for(int i=0;i<n-2;i+2){
  if(a[i]>a[i+2])
    { 
      max=a[i];
      min=a[i+2];
      a[i]=min;
      a[i+2]=max;
      count += 1;
      printf("a[%d]=%d",i,a[i]);
    }
   }
  for(int i=0;i<n;i++) printf(" a[%d] = %d \n",i, a[i]);
  printf("Counts of number of interchanges is = %d",count);
  
  return 0;      
}
