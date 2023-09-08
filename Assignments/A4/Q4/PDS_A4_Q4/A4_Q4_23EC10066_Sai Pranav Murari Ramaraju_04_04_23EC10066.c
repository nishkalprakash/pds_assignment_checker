#include<stdio.h>
int main(){
  int s_num;
  int flag=0;
  while(1){
  printf("enter a single digit number : ");
  scanf("%d",&s_num);
  if(s_num<0){
    break;}
  if(s_num==5){
    flag=1;
  }
  else if(s_num==1&&flag==1){
    flag=2;
  }
  else if(s_num!=1&&flag==1){
    flag=0;
  }
  else  if(flag==2)
    flag++;
  else if(s_num==7&&flag==3){
    printf("the pattern is found");
    break;
   }
 }
  return 0;
}  
