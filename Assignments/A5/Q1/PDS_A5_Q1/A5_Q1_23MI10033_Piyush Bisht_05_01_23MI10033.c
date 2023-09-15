//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int rdm[50],n,count=0,temp;
  printf("Enter a number upto 50");
  scanf("%d",&n);
  for (int i=0;i<n;i++){
    rdm[i]=rand()%91+10;
    printf("%d, ",rdm[i]);
  }
  for (int i=0;i<n-2;i+=2){
    if (rdm[i]>rdm[i+2]){
      temp=rdm[i];
      rdm[i]=rdm[i+2];
      rdm[i+2]=temp;
      count++;
    }
  }
  printf("\n");
  for (int i=0;i<n;i++){
    printf("%d, ",rdm[i]);
  }
  printf("\nNumber of interchanges = %d",count); 
  return 0;
}
  
  
