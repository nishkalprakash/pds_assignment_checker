#include<stdio.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

  int main()
  {
      int m,x,y,z,n,tax;

      printf("Monthly salary=\n");
      scanf("%d",&m);
      printf("house loan=\n");
      scanf("%d",&x);
      printf("life insurance premium=\n");
      scanf("%d",&y);
      printf("medical insurance=\n");
      scanf("%d",&z);

      /*yearly income =n*/
      n = m*12 -x-y-z;

      if(n<=250000){
        printf("total tax=0\n");}

      else if(n>250000&&n<=500000){
        tax=0.05*n;
        printf("total tax =%d",tax);}

      else if(n>500000&&n<=750000){
        tax=12500+ 0.1*(n-500000);
        printf("total tax=%d",tax);}

      else if(n>750000&&n<=1000000){
        tax=37500+0.15*(n-750000);
         printf("total tax=%d",tax);}

       else if(n>1000000&&n<=1250000){
        tax=75000+0.20*(n-1000000);
         printf("total tax=%d",tax);}

       else if(n>1250000&&n<=1500000){
        tax=125000+0.25*(n-1250000);
         printf("total tax=%d",tax);}

       else if(n>1500000){
        tax=187500+0.30*(n-1500000);
         printf("total tax=%d",tax);}

  }

