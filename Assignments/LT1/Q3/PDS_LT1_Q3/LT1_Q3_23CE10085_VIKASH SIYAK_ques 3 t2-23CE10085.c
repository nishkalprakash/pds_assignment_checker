     //roll no-23CE10085
    //NAME-vikash siyak

#include<stdio.h>
int i,n,second_max,second_min,second_min,max,min;
    int main(){
      printf("enter the number of positive integer");
      scanf("%d",&n);
      for(i=1;i<=n;i++){
	printf("%d",i);
      }
      for(i=1;i<n;i++){
      if(i>max){
	max=i;
      }
      if(i<min){
	min=i;
      }
      if(i>max-1){
	second_max=i;
	  }
      if(i<min-1){
	second_min=i;
      }
      printf("%d",max);
      printf("%d",min);
      printf("%d",second_max);
      printf("%d",second_min);
      }
      return 0;
    }
