/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : Test 1
 Description : Program to print all armstrong number less than equal to N
*/
#include<stdio.h>
#include<math.h>
//defining a function that returns the number of digits in an integer
int num_digits(long int a){  
   int temp=1;
   for(int i=1;i<=7;i++){
       if(a/10==0){
          break;
        }
       else{
          a=a/10;
          temp=temp+1;
        }
       
   }
   return temp;
} 
int main(){
   long int n;
   scanf("%ld",&n);
   if(n<=0){
       printf("Invalid Input");  //print invalid input when number is 0 or negative
   }
   else{
        int sum;
   	for(long int i=1;i<=n;i++){
      	        sum=0;
       		int z;
                long int m=i;     //m stores the value of i
       		z=num_digits(i);
                long int k=i;      //k stores the value of i but will be used for operation
       		while(k>0){          //loop runs till k is >0
            		int t;
            		t=k%10;  
            		sum=sum+pow(t,z);
            		k=k/10;
                }
                if(m==sum){
                   printf("%ld ",m);      // printing all the required values
                }
        }
   }
        
}
