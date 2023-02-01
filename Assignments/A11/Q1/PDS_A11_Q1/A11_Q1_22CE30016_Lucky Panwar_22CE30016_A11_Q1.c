/*  NAME - LUCKY PANWAR
    ROLL NO. - 22CE30016
    ASSIGNMENT NO. - 11
    QUESTION NO. - 1     */



#include<stdio.h>
#include<stdlib.h>

 float series_sum(int n){
 	if(n==1){ 
                  return 1.0; } // BASE CONDITION FOR RECURISVE FUNCTION 
 	else { 
                return (1/(float)n) + series_sum(n-1); 
             }
     }


 int main()
{  
  	int n ;
        printf("Enter the value of n such that 0<= n <= 99999\n");
        scanf("%d",&n); 
        printf("%.3f\n",series_sum(n));
        return 0;
}
