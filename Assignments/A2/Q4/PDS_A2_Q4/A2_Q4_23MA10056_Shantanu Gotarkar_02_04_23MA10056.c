#include <stdio.h>
//#include<math.h>

int main()
{
  int m ;
  int n ;
  int sum ;
  int diff ;
  int prod ;
  int IntegerQuotient ;
  int IntegerRemainder;
  float FloatQuotient ;
  int sumofthesquares;
  int squareofthesum;
  float avg;
    float avgsumofthesquares ;
    printf("Enter the two integers");
    scanf("%d%d",&m,&n);
    sum=m+n;
    diff= m-n ;
    prod=m*n ;
    
    IntegerQuotient=m/n ;
    IntegerRemainder =m%n ;
    FloatQuotient =m/n ;
    sumofthesquares= (m*m)+(n*n);
    squareofthesum= (m+n)*(m+n);
    avg=( m+n)/2.0;
    avgsumofthesquares=( (m*m)+(n*n)) /2.0 ;
    printf("The sum is %d\n",sum);
    printf("The difference is %d\n",diff);
    printf("The product is %d\n",prod);
    printf("The Integer quotient is %d\n",IntegerQuotient);
    printf("The Integer Remainder is%d\n",IntegerRemainder);
    printf("The Floating point quotient is %f\n",FloatQuotient);
    printf("The Sum of the Squares is %d\n",sumofthesquares);
    printf("The Square of the sum is %d\n",squareofthesum);
    printf("The average of the two numbers is %f\n",avg);
    printf("The average of the sum of the squares is %f\n",avgsumofthesquares);
    return 0 ;
}
