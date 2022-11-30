/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 4
 Description : Program to print sum of digits
*/
#include<stdio.h>
#include<math.h>

int main(){
    int n,temp;
    int sum=0;
    scanf("%d",&n);    //taking the input form user
    if(n<0){
       n=-n;           //convert negative number to positive number
       while(n>0){
            temp=n%10;   //storing last digit of n
            sum=sum+temp;  // adding the last digit of n in sum
            n=n/10;        //chaning the value of n
       }
       printf("%d\n",-sum);  //print the value of sum
    }
 
    else {                   //repeating same process for n>0
       while(n>0){
            temp=n%10;
            sum=sum+temp;
            n=n/10;
       }
       printf("%d\n",sum);    //print the value of sum
    }
}
