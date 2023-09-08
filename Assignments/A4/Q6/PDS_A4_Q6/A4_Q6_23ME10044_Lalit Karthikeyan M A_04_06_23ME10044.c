//Roll NO.: 23ME10044
//Name: Lalit Karthikeyan

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int s, smalls = 100,smallnum,a,dig,x;
  srand(time(NULL));

  printf("\nThe 20 random numbers between 5000 and 6000 are: \n\n");

  for(int i=0; i<20; i++){              //Loop to generate random numbers between 5000 and 6000
    
    s=0;
    x=(rand()%1000) +5001;
    a=x;
    
    while(x>0){                        //Loop to find sum of digits
      
      dig=x%10;
      s+=dig;
      x=x/10;
    }
    
    printf("Number: %d   Sum of digits:  %d \n",a,s);
    
    if(s<smalls) {                      //Condition to update number with small sum of digits
      smallnum=a;
      smalls=s;
    }
    
  }
  
  printf("\n\nThe number with smallest sum of digits is: %d   Sum of digits: %d \n", smallnum, smalls);
  
  return 0;
}
	   
    
      
      
      
    
    

  
