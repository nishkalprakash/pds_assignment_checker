//Roll No:<23NA10017>//
//Name:<Harshavarda Kumarasamy>//
#include <stdio.h>

int main()
{
  int deposit;
  int period;
  float interest;
  float total;

  printf("Type in the deposit amount:\n");
  scanf("%d", &deposit);

  printf("Type in the deposit period in years:\n");
  scanf("%d", &period);

  printf("Type in the applicable interest rate:\n");
  scanf("%e", &interest);

  total= deposit + ( deposit * interest / 100 ) * period;

  printf("Your total payable amount at the end of deposit period is:\n%f", total);

  return 0;
}
	
	
	
