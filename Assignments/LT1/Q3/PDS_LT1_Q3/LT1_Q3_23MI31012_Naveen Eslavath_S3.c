//Roll No.:23MI31012
//Name:ESLAVATH NAVEEN
//SET:2

#include <stdio.h>
int main(){
  int max=0,secmax=0,small=0,secsmall=0,x;
  do(x>=0){
      printf("Enter the numbers: \n");
      scanf("%d",&x);
      if(x>max){
	max=x;
	if(x>secmax && x<max){
	  secmax=x;
	  if(x<max && x<secmax){
	    small=x;
	    if(x<secmax && x>small){
	      secsmall=x;
	    }
	  }
	}
	printf("Largest number: %d\n",max);
	printf("second largest number: %d\n",secmax);
	printf("smallest number: %d\n",small);
	printf("second smallest number: %d\n",secsmall);
      }
      return 0;
    }
	
      
     
