// Roll No.:23IM30025
// Name : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
 
  int debt,yrs;          //defining that dept and years should be in integers
  float irt;             //defining that interest can be in float character
  //taking user input for required data
  printf("Enter Amount For Fix Deposit:");
  scanf("%d",&debt);
  printf("Enter period of deposit in years:");
  scanf("%d",&yrs);
  printf("Enter applicable interest rate:");
  scanf("%f",&irt);
  //calculation of payable amount
  float pay;
  pay= ((debt)*(100+(irt*yrs)))/100;
  printf("Total amount payable at the end of deposit period(assuming fixed rate computed):%f",pay);
  return 0;
}
