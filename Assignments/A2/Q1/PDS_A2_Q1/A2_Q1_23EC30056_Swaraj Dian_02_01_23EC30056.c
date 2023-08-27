//Roll No.: 23EC30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  float n,d; //variable declaration
  int i;
  printf("Enter the number: ");
  scanf("%f",&n);
  i=n/1;  //integer division so it take only the integer value of number
  d=n-i;
  printf("\nIntegral part=%d",i);
  printf("\nfractional part=%f\n",d);
}
  
