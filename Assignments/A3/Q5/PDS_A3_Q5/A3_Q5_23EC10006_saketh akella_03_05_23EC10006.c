#include<stdio.h>

int main(){
  int  a,b,c,d,e,f;
  printf("this program is to compute the first deravtaive of 5th degree polynomial \n");
  printf("enter the coefficients of the polynomial starting from 5th degree term \n");
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
  if(a<0||b<0||c<0||d<0||e<0||f<0){
    printf("wrong input \n");
    return 0;
  }
  printf("the inputed polynomial is %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d \n",a,b,c,d,e,f);
  printf("the first deravtive of the polynomial is %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d \n",5*a,4*b,3*c,2*d,e);
  return 0;
}
