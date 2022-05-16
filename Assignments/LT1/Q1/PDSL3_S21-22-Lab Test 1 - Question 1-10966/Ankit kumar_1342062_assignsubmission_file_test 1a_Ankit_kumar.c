/*Ankit kumar
Roll no.21MI10010*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
int main() {
int monthsal,houseloan,lifeinsu,medicinsu;
printf("pls enter your monthsal,houseloan,lifeinsu,medicinsu\n");
scanf("%d %d %d %d",&monthsal,&houseloan,&lifeinsu,&medicinsu );
int yearsal=monthsal*12;
//printf("%d",yearsal);
int x,y,z;
if(250000>=houseloan) x=houseloan;
else x=250000;
if(150000>=lifeinsu) y=lifeinsu;
else y=150000;
if(50000>=medicinsu) z=medicinsu;
else z=50000;
yearsal-=(x+y+z);
if(yearsal<=250000){
    printf("0");
}
else if(yearsal<=500000){
    float ans=.05*(yearsal);
    printf("%f",ans);
}
else if(yearsal<=750000){
    float ans=12500+.1*(yearsal);
     printf("%f",ans);
}
else if(yearsal<=1000000){
    float ans=37500+.15*(yearsal);
     printf("%f",ans);
}
else if(yearsal<=1250000){
    float ans=75000+.2*(yearsal);
     printf("%f",ans);
}
else if(yearsal<=1500000){
    float ans=125000+.25*(yearsal);
     printf("%f",ans);
}
else{
    float ans=187500+.3*(yearsal);
     printf("%f",ans);
}
  return 0;
}