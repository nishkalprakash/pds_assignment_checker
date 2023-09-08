//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
  //defining integers to be needed inthe program
  int n,n1,n2=0,n3=0,total=0;
  //user input
  printf("Enter the total number of integers  to be evaluated:");
  scanf("%d",&n);
  printf("Enter the numbers:");
  for(int i=1; i<=n;i++){
    scanf("%d",&n1);
    //calculation part
    total+=n1;
    if(n1>n2){
      n3=n2;
      n2=n1;
    }
   
  }
  
  //user display
  printf("The sum is:%d\n",total);
  printf("the largest:%d      ",n2);
  printf("the second largest:%d\n",n3);
    
  return 0;
}
