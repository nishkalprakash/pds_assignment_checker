//Roll No - 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>
int main()
{
  int m;
  int  n;
  printf("Enter numbers m and n respectively");
  scanf("%d", &m);
  scanf("%d", &n);

  printf("\n m=%d and n=%d\n", m, n);
  printf("Some operations on m and n:\n");

  int sum = m+n;
  int difference = m-n;
  int product = m*n;
  int integer_quotient = m/n;
  int integer_remainder = m%n;
  float floating_quotient = (float)(m/n);
  int sots = (m*m)+(n*n);
  int sqots = (m+n)*(m+n);
  float avg =(float) ((m+n)/2);
  float asos = (float)((m*m)+(n*n));

  printf("The Sum %d\n",sum);
  printf("The Difference %d\n", difference);
  printf("The product %d\n", product);
  printf("The integer quotient %d\n", integer_quotient);
  printf("The integer remainder %d\n", integer_remainder);
  printf("The Floating point quotient %f\n",floating_quotient);
  printf("The sum of the squares %d\n", sots);
  printf("The square of the sum %d\n", sqots);
  printf("The average of m and n is: %f\n ",avg);
  printf("The average of the sum of squares: %f\n", asos);

  return 0;
}
	 
  
