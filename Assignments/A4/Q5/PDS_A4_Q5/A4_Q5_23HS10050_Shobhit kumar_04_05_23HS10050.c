//Roll no:23HS10050
//Name: Shobhit kumar

#include<stdio.h>
int main(){
  int x,sum=0,max=0,max2=0;
  printf("Enter the number:");
  scanf("%d",&x);
    
  while(x!=0){
    sum=sum=(x%10);
    if(x%10>max){
      max2=max;
      max=x%10;      
      
    }
    if((x%10)>max2 && (x%10)<max){
      max2=x%10;
    }
    x=x/10;
  }
  

    printf("Sum of digits=%d\n",sum);
    printf("Largest=%d\n",max);
    printf("Second largest=%d\n",max2);
    return 0;
}
  
