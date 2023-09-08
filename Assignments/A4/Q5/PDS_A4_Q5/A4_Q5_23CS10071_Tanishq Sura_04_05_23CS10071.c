//tanishq sura
//23CS10071

#include<stdio.h>

int main(){
  int n,i,j,sum=0,max1=0,max2=0;
  printf("give integer");
  scanf("%d",&n);
  
  for(i=1;n!=0;i++){
    j=n%10;
    n=n/10;
    sum=sum+j;
    if(j>max1)
      max1=j;
    else if(j>max2)
      max2=j;
  }
  printf("the sum of digits is : %d\n",sum);
  printf("the largest digit is : %d\n",max1);
  printf("the second largest digit is : %d\n",max2);
  return 0;
}
  
