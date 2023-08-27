 #include <stdio.h>

int main ()
{
  float num;
  printf("Enter a number\n");
  scanf("%f",&num);
  printf("%f", num);
  printf("integer part of numberis %d",(int)num);
  printf("fractional part is %.3f",num-(int)num);
  return 0;

}
