//NAME: AYUSH KUMAR SINGH
//Roll No.: 23MT10015

#include <stdio.h>
#include <math.h>
int main(){
  int amount, year;
  printf("Entre Amount=\n");
  scanf("%d", &amount);
  printf("Entre Years=\n");
  scanf("%d", &year);
  float intrest;
  printf("Entre Intrest Rate=\n");
  scanf("%f", &intrest);
  printf("Total amount payable =%.2f\n", amount + (amount*year*intrest/100));
    
  
  return 0;
}

