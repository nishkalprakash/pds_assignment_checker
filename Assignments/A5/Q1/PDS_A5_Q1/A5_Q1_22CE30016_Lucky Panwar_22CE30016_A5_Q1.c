/* SECTION - 14
   NAME - LUCKY PANWAR
   ROLL NO. - 22CE30016
   ASSIGNMENT - 5
   DESCRIPTION - PROGRAM TO FIND SUM OF FIRST n TERMS OF THE FOLLOWING SERIES --> 1 + x + (x^2)/2! + (x^3)/3! + ... + (x^n)/n! */

#include<stdio.h>


 int fact (int n);

 int main()
{ 
  int x,n; 
  float sum;
  printf("Enter the value of x and n such that n<=10.\n"); 
  scanf("%d %d",&x,&n);
 
  int fact (int n);
  sum = fact (n) ;
  printf("THE SUM OF FIRST n TERMS OF THE FOLLOWING SERIES --> 1 + x + (x^2)/2! + (x^3)/3! + ... + (x^n)/n! is %f /n", sum);
  return 0;
}
 
   int fact (int n){
      int a , pro = 1 ;
      for(a=1;a<=n;a++){
                 pro = pro*a ; 
                 return (pro);
              } 
      
                             
                              
