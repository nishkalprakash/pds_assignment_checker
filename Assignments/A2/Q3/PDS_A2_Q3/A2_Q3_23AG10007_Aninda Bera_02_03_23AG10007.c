# include <stdio.h>
int main()
{
  int dep_amt,yr;
  float interest,cal_interest,total_amt;
  printf("Enter the dep_amt:\n");
  scanf("%d",&dep_amt);
  printf("Enter the time period of investment in years:\n");
  scanf("%d" ,&yr);
  printf("Enter the applicable interest rate:\n");
  scanf("%f",&interest);
  cal_interest=((dep_amt*interest)/100)*yr;
  total_amt= dep_amt+cal_interest;
  printf("The total payable amount:%f\n",total_amt);
  return 0;
}
  
  
  
