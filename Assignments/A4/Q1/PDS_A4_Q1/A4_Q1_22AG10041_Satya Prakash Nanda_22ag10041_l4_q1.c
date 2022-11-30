/*
satya prakash nanda
22AG10041
asignment 4
ques1
*/

#include<stdio.h>
#include<math.h>
int main()
{
   int num, n;
   
   printf("enter a number whose factors you want to evaluate:");
   scanf("%d",&num);
   
  

    if(num==0){printf("0\n");}

if(num<0){num=0-num;}



   for(int i=1; i<=num; i++){
      

      if(num%i==0){
                      printf(" %d ", i);
                      }
                             }
   
      




return 0;
}
