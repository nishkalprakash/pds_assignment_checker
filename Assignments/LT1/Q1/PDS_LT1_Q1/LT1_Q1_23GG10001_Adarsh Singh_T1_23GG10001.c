//Roll No.:23GG10001
//Name:Adarsh Singh

#include<iostream>
#include<math.h>
int main(){
  int n,count=0,i;
  printf("Enter the value of n");
  scanf("%u",&n);
  while(n>0){
    count++;
    n=n/10;
  }
  for(i=1;i<=count;i++){
    if(i==1){
      if(n%10==0){
	n=(n/10)+1;
      }
      else if(n%10==1){
	n=(n/10)+2;
      }
      else if(n%10==2){
	n=(n/10)+3;
      }
      else if(n%10==3){
	n=(n/10)+4;
      }
      else if(n%10==4){
	n=(n/10)+5;
      }
      else if(n%10==5){
	n=(n/10)+6;
      }
      else if(n%10==6){
	n=(n/10)+7;
      }
      else if(n%10==7){
	n=(n/10)+8;
      }
      else if(n%10==8){
	n=(n/10)+9;
      }
      else(n%10==9){
	  n=(n/10)+10;
      }
    }
    else if(i==2){
      if((n/10)%10==0){
	n=n
      }
  return 0;
}  
