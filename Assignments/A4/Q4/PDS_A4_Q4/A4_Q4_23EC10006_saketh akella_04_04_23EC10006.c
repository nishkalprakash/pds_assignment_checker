#include<stdio.h>

int main(){
  int i = 1;
  int x;
  printf("enter the numbers \n");
  while(i>0){
    printf("enter a single digit number \n");
    scanf("%d",&x);
    
    if(x<0){
      break;
    }
    else  if(x==5){
       printf("enter a single digit number \n");
       scanf("%d",&x);
       if(x<0){
	 break;}
       else  if(x==1){
	  printf("enter a single digit number \n");
          scanf("%d",&x);
	  if(x<0){break;}
	  printf("enter a single digit number \n");
          scanf("%d",&x);
	  if(x<0){ break;}
	  else  if(x==7){
             printf("patern formed \n");
	     break;
	   }
	   }
       }
    }
    
  return 0 ;
}
