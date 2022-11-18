/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system:ubuntu 20.04
Sec 3*/
#include<stdio.h>
int main(){
 char typ;
 float kg,base,gst,total;
 printf("Enter type of wood n or s:");
 scanf("%c",&typ);
 printf("Enter qty of wood in kg");
 scanf("%f",&kg);
 if (typ=='n'){
  base=1100*kg;
  gst=0.20*base;
}
  else{
   base=780*kg;
   gst=0.15*base;
  }
  printf("\n------------\n") ;
  printf("Base price=%.2f",base);
  printf("GST=%.2f",gst);
  total=base+gst;
  printf("Total price=%.2f",total);
  printf("\n------------\n") ;
}

