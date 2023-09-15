// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int arr[50],num;
  printf("Enter the number of random numbers to be generated:\n");
  scanf("%d",&num);
  printf("The array is: ");
  for(int i =0;i<num;i++){
    arr[i]=rand()%41 +10;
    printf("%d,",arr[i]);
  }
  printf("\n");
  for(int i = 0;i<num;i++){
    for(int j = 0;j<num;j++){
      for(int k = 0;k<num;k++){
	if (i != j && i!= k && i<j && i < k && j< k){
	  if(arr[i]+arr[j]+arr[k]==60){
	    printf("The triplet with the indices [%d],[%d],[%d] is %d %d %d\n",i,j,k,arr[i],arr[j],arr[k]);
	  }

	}
      }
    }
  }
  

  return 0;
}
