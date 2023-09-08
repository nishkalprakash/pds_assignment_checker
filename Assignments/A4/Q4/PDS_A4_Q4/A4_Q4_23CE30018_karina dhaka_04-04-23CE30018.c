//roll no:23CE30018
//name:Karina Dhaka
#include<stdio.h>
int main()
{
  int i,num=0;
  printf("enter a single digit  number:");
  scanf("%d",&i);
  num=num*10+i;
  if(i<0)
    return 0;
  else{
    for(i>=0;i<=9;i++){
    if((num%10==7)&&(num%1000==1)&&(num%1000==5)){
	printf("pattern found");
      }
    }
    }
    return 0;
    }

  
	
    
    
    
      
   
  
