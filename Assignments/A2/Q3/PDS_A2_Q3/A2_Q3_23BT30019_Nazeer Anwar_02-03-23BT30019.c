//ROLL NO:23BT30019
//NAME:NAZEER ANWAR
#include<stdio.h>
int main()
{
  int principle ;
  int time ;
  float rate ;
  printf("Enter the amount to be deposit");
  scanf("%d" ,&principle );
  printf("Enter the time period");
  scanf("%d" ,&time );
  printf("Enter the rate");
  scanf("%f" , &rate );
  float si =(principle*rate*time)/100;
       float amt=principle+si ;
       printf("Total amount payable at the end= %f " , amt );
}
