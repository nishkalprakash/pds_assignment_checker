#include<stdio.h>
int main(){
 //T.Sritan Reddy
  //23AE10036
  int pamount,period;
  float irate,famount;
  printf("enter the principal amount and time period \n");
  scanf("%d %d",&pamount,&period);


  printf("enter the interst rate \n");
  scanf("%f",&irate);
  
  famount=pamount+((pamount*irate*period)/100);
  printf("total payable amount is %f \n",famount);

     return 0;
}
