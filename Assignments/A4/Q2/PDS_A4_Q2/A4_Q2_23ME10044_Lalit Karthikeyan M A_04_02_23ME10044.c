//Roll NO.: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int max=-1,a;
  srand(time(NULL));
  
  printf("The 20 Random Numbers between 1 and 100 are: \n\n");
  
  for(int i=0; i<20; i++){    //Loop to get 20 Numbers.
    
    a = rand()%100+1;        //To get a random number each time we run the loop
    if(a>max){max=a;}        //to find the max among 20
    printf("%d\n",a);
    
  }
  
  printf("\n\nThe maximum value is: %d\n",max);   //printing the maximum value.

  return 0;
}
