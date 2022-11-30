/*SECTION:14
ROLL NO:22CE10025
NAME:GAURAV MEENA
ASSIGNMENT NO:4
DESCRIPTION NO:FACTORS
*/

#include<stdio.h>

int main(){
int x;
printf("Enter a number x");
scanf("%d",&x);


int i;
      if(x<0)
      x=x*(-1);

for(i=1;i<x;i++)

{
if(x%i==0){
        printf("all the factor of x is %d\n",i);
        
} 
}
return 0;
}
