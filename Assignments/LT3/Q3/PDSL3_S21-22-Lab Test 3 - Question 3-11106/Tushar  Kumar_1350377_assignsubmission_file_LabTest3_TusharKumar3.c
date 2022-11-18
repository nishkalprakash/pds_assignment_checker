/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
void solve(int c,int d,int divisor,int curr,int num,int i)                  //writing the program to print all the desired nummbers containing the given digits in input
 {

      num=(num*10+curr);
     if(i==5)
     {
         if(num%(c+d))                                                   //ifs condition
         printf("%d\n",num);
         return;
     }
      solve(c,d,divisor,c,num,i+1);
     solve(c,d,divisor,d,num,i+1);
 }
 int main(){
     int c,d;                           //defining the integer whose values we would be taking from users
     printf("Enter the numbers-\n");
     scanf("%d%d",&c,&d);              //taking the inputs from user
     int divisor=c+d;                  //defining a integer named divisor so that c+d isn't the divisor of the numbers we would be printing in output
     solve(c,d,divisor,c,0,1);
     solve(c,d,divisor,d,0,1);

 }
