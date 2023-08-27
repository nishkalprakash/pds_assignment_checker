//ROLL NO:23ME10063
//NAME:Prem Pastagia

# include <stdio.h>

int main()
{
  float a,fpart;
  int ipart;
  
  printf("Please enter a decimal number\n");
  scanf ("%f" ,&a);
  ipart=(int)a;
  fpart=a-ipart;
  printf("Integer part= %d \n" ,ipart);
  printf("Fractional part= %f \n" ,fpart);
  
  return 0;
}
