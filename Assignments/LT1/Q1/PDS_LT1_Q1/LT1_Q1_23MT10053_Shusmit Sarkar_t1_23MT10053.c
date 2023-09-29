#include<stdio.h>
int main(){
  int n;
  int d=0;
  int Num =0;
  int D=0;
  int Number = 0;
 printf("Input number : ");
 scanf("%d",&n);
 if( n>9999 ) printf("Error");
 else {
  while(n!=0 ){
  d = n%10;
  Num = Num*10 + d + 1;
  n/=10;
  }
 while(Num!=0 ){
  D = Num%10;
  Number = Number*10 + D;
  Num/=10;
  }
 printf("Encode : %d", Number);


}
return 0;
}
