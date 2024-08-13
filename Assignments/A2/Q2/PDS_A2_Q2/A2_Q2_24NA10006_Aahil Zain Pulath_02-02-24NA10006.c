//lab2 assingnment 2
#include<stdio.h>
#include<math.h>

int main()
{
  double alpha,sigma,RS,TS,D,TP,temp1;
  // defined variables
  printf("ENTER ALPHA , SIGMA , RS , TS ,D respectively:");
  scanf("%lf,%lf,%le,%le,%le",&alpha,&sigma,&RS,&TS,&D);
  //scanned from user 
  temp1=sqrt((1-alpha)/sigma);
  
  
  TP=TS*sqrt(((RS*temp1))/(2*D));
  //math formula
  printf("tp=");
  printf("%le",TP);
 }
