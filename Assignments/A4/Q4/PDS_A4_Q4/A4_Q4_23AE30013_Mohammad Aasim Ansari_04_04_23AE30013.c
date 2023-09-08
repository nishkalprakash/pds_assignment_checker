#include<stdio.h>
#include<stdlib.h>
int main(){
  int i=1;
  int a,b,c,d;
  int x;

  do{
    printf("Enter the number\n");
    scanf("%d",&x);
    if (x>=5){
      a=x;
      break;
      printf("Enter the number\n");
      scanf("%d",&b);
      if(b==1){
	printf("Enter the number\n");
	scanf("%d",&c);
	printf("Enter the number\n");
	scanf("%d",&d);
	break;
	if(d==7){
	  printf("Pattern found",d);
	  break;
	}
      }
    }
  }
  while(i>0);{
    return 0;
  }
}
      
  
      
  
  
