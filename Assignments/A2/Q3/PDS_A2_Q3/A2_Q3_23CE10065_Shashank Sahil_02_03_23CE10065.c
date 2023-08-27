//Lab 2
// Roll number -23CE10065
// Shashank Sahil



#include <stdio.h>

unsigned int  amount;
unsigned int  period;
float rate ; 
int main(){
  printf( " Enter the principle amount \n");
  scanf("%d",&amount);
  printf("Enter the period in years   \n");
  scanf("%d",&period);
  printf( " Enter the rate of interest per year \n");
  scanf("%f",&rate);
  float x =( amount * rate * period )/100;
  printf("Your final payable amount is %f",amount+x);
  
    return 0;

}
