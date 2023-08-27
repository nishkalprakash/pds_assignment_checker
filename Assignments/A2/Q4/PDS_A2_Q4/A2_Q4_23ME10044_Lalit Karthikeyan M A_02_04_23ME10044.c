//Roll No.: 23E10044
//Name: Lalit Karthikeyan M A

#include <stdio.h>
#include<math.h>

int main(){
  int m,n;
  
  printf("Enter the first number : ");
  scanf("%d", &m);

  printf("Enter the second number : ");
  scanf("%d", &n);
  
  printf("The sum is : %d \n\n", m+n);

  printf("The difference is : %d \n\n", m-n);

  printf("The product is : %d \n\n", m*n);
 
  printf("The integer quotient is : %d \n\n", m/n);
  
  printf("The integer remainder is : %d \n\n", m%n);
  
  printf("The floating point quotient is : %f \n\n", (float(m))/(float(n)));
  
  printf("The sum of the squares is : %f \n\n", pow(m,2)+pow(n,2));
  
  printf("The square of the sum is : %f \n\n", pow(m+n,2));

  printf("The average is : %f \n\n", (float(m+n))/2);

  printf("The average of sum of squares is : %f \n\n", (float(pow(m,2)+pow(n,2))/2));
  
  return 0;

}
  
