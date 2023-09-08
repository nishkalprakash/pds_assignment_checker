//Roll NO.- 23CH30007
//Name - Asad Ali Jaffrey

#include<stdio.h>

int main() {
  int kms,hrs,rental, fare, total_fare;
  printf("Enter the total kms and hours\n");
  scanf("%d %d",&kms,&hrs);

  //for rental

  if (hrs<1){
    rental=0;
  }
  if (hrs>=1 && hrs<12) {
    rental=200;
  }
  if (hrs>=12 && hrs<24) {
    rental=300+200;
  }

  if (hrs>=24) {
    if (hrs%24==0) {
      rental=300+200+(hrs/24-1)*300;
    }
    else {
      rental=300+200+(hrs/24)*300;
    }
  }

  //for fare

  if (kms<=8) {
    fare = 20;
      }
  if (kms>8 && kms<=12) {
    fare = 20 + 10*(kms-8);
  }
  if (kms>12 && kms<=16) {
    fare = 20 + 10*4 + 8*(kms-12);
  }
  if (kms>16 && kms<=20) {
    fare = 20 + 10*4 + 8*4 + 6*(kms-16);
  }
  if (kms>20) {
    fare = 20 + 10*4 + 8*4 + 6*4 + 5*(kms-20);
  }

  total_fare = rental + fare;
  printf("The total fare is %d\n",total_fare);
  return 0;
}
  
  
