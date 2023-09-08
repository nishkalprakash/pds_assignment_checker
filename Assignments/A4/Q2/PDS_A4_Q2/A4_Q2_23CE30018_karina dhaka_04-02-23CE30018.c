//roll no:23CE30018
// name:Karina Dhaka
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,max=0 ,x;
  for(i=0;i<=20;i++){
    x=rand()%100;
    printf("%d\t",x);
       if(x>max){
	 max=x;
       }
  }
  	 printf("max=%d\n",max);
       
 
       return 0;
  }
    
