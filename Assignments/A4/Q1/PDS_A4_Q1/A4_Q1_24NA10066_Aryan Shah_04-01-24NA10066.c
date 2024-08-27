#include<stdio.h>
int main(){
   int n,s = 1,a=0,sum ;                     //Declaring variables with suitable data types
   printf("Enter the number of terms for the  sequence : ") ;
   scanf ("%d",&n);                          //User input for n 
   if (n == 0 || n < 0) printf("N is Invalid") ;      //Condition for non positive n
   else {
       for (int i = 1; i<= n ; i++){
          
          //Expression to show desired sequence
           if(i%2 != 0){
              sum = a + s ;
              s = sum ; 
              printf("%d ", sum) ;
           }
           else{
              sum = -1*(a + s) ;
              a = -1*sum ;
              printf("%d ", sum);
           }
       }
   }
}
