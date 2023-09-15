//Roll No.:23MI10033
//Name:Piyush Bisht

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int rdm[50],n,count=0;
  printf("Enter a number upto 50");
  scanf("%d",&n);
  for (int i=0;i<n;i++){
    rdm[i]=rand()%41+10;
    printf("%d, ",rdm[i]);
  }
  for (int i=0;i<n-2;i++){
    for (int j=i+1;j<n-1;j++){
      for (int k=j+1;k<n;k++){
	if ((rdm[i]+rdm[j]+rdm[k])==60){
	  count++;
	  printf("\nTriplet %d :\nindices: %d, %d, %d \nvalues:  %d, %d, %d",count, i, j, k, rdm[i], rdm[j], rdm[k]);
	}
      }
    }
  }
  printf("\nNo. of triplets found = %d",count);
  return 0;
}
