//Roll No.:23MI31012
//Name:ESLAVATH NAVEEN
//SET:2
#include <stdio.h>
#include <stdlib.h>
int main(){
  int x,z,rand();
  float y;
  printf("Enter the number of random no.: ");
  scanf("%d\n", &x);
  x=rand()%100;
  z=x/10;
  y=z*10;
  printf("%d\n",x);
  if(x>=0 && x<=9){
    printf("0-9: %0.1f\n",y);
  }
  if(x>=10 && x<=19){
     printf("10-19: %0.1f\n",y);
  }
  if(x>=20 && x<=29){
     printf("20-29: %0.1f\n",y);
  }
  if(x>=30 && x<=39){
     printf("30-39: %0.1f\n",y);
  }
  if(x>=40 && x<=49){
     printf("40-49: %0.1f\n",y);
  }
  if(x>=50 && x<=59){
     printf("50-59: %0.1f\n",y);
  }
  if(x>=60 && x<=69){
     printf("60-69: %0.1f\n",y);
  }
  if(x>=70 && x<=79){
     printf("70-79: %0.1f\n",y);
  }
  if(x>=80 && x<=89){
     printf("80-89: %0.1f\n",y);
  }
  if(x>=90 && x<=99){
     printf("90-99: %0.1f\n",y);
  }
  return 0;
}
  
