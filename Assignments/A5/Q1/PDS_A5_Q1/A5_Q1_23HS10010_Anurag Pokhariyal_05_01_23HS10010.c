// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int arr[50],num,count = 0;
  printf("Enter the number of random numbers to be generated:");
  scanf("%d",&num);
  for(int i =0;i<num;i++){
    arr[i]=rand()%91 +10;
    printf("The integer index %d is %d\n",i,arr[i]);
  }
  for(int i=0;i<num-2;i++){
    int temp;
    if(i%2==0 && arr[i]>arr[i+2]){
      temp = arr[i];
      arr[i]= arr[i+2];
      arr[i+2]=temp;
      count ++;

    }
    
  }

  printf("The number of interchanges are %d\n",count);
  for(int i =0;i<num;i++){
    printf("The integer index %d is %d\n",i,arr[i]);
  }

  return 0;
}
