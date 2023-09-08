//tanishq sura
//23CS10071

#include<stdio.h>

int main(){
  int n,i,j,k,l=0,m=0,p=0,o=0;
  printf("\nenter a single digit no.:");
  scanf("%d",&n);
  while(n>=0){
    //l denotes 1 if last no was 5
    //m denotes 1 when 51 was the last two nos
    //p denotes 1 when 51x is last nos.
    //o denotes 1 when 51x7 is input
    printf("\nenter a single digit no.:");
    scanf("%d",&n);
    if(n<0)
       break;

    else if(n==5)
      l=1;
    else if((n==1)&&(l==1)){
      m=1;
      l=0;}
    else if(m==1){
      p=1;
      if(n==5)
	l=1;
      else
	m=0;
    }
    else if((p==1)&&(n==7)){
      o=1;
      printf("pattern found");
      break;
    }
  }
  if(n<0);
  return 0;
}
      
      
    
     
	
	
	
