#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;
  printf("Enter number of numbers to be generated:");
  scanf("%d",&number);
  
  int num[50];
  for(int i=0;i<number;i++){
    printf("%d",10+ rand()%(41));
    scanf("%d",&num[50]);
  }
  for(int i=0;i<number;i++){
    for(int j=i+1;j<number;j++){
      for(int k=number-1;k>=0;k--){
	if(num[i]+num[j]+num[k]==60)
	  printf("%d %d %d",num[i],num[j],num[k]);
      }
  }
}
  return 0;
}
