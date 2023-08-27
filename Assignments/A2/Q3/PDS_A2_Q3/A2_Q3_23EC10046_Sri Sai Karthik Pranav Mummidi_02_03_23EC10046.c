//Rollno: 23EC10046
//Name: Mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int amt,yrs;
  printf("enter your amount to be deposited=");
  scanf("%d",&amt);
  printf("\nenter number of years=");
  scanf("%d",&yrs);
  float roi;
  printf("\nenter rate of interest=");
  scanf("%f",&roi);
  float interest;
  interest=(amt*yrs*roi)/100;
  float tamt;
  tamt=interest+amt;
  printf("total amount payable=%.3f",tamt);
  return 0;
}
  
