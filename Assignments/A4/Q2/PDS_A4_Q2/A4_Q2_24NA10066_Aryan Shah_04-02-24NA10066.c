#include<stdio.h>

int main(){
  printf("Enter positive number : \n");
  int n,largest=0,sLargest=0 ;   //Defining variable with suitable data type
  
  do {                           //Loop to take continous input
     scanf("%d",&n);             //User input of number
     if (n<0) {
        if (sLargest == 0) printf("Second number not entered yet") ;  //Condiotion for  second  number entered
        else {
               printf("Largest : %d \n",largest);
               printf("Second Largest : %d",sLargest);
          }
     }
     else{
       if (n>largest){
          sLargest = largest ;                                      //Updating largest and second largest numbers
          largest = n ;
          if (sLargest == 0) printf("Second number not entered yet \n") ;
          else {
               printf("Largest : %d \n",largest);
               printf("Second Largest : %d",sLargest);
          }
     
      }
  
    }
  }while(1);
  
  
}
