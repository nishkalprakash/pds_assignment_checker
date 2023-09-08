#include<stdio.h>
#include<stdlib.h>
int main(){
  int km,hr;
  int sum=0;

  
  printf("enter km travelled and hrs");
  scanf("%d %d",&km,&hr);

   if(hr<1){
     sum+=0;}

   if((hr>=1)&&(hr<12)){
       sum+=200;}

   if((hr>=12)&&(hr<24)){
     sum+=500;}

   if(hr>=24){
     sum=800+(300*(hr/24));
             }
   if(km<=8){
     sum+=20;
             }
   if((km>8)&&(km<=12)){
     sum+=20+(10*(km-8)) ;
             }
   if((km>12)&&(km<=16)){
     sum+=20+(10*4)+(8*(km-12)) ;
             }
   if((km>16)&&(km<=20)){
     sum+=20+(10*4)+(8*4)+(6*(km-16)) ;
             }
   if(km>20){
     sum+=20+(10*4)+(8*4)+(4*6)+(5*(km-20));}
   
   printf("the taxi fare is %d",sum);
  
    
    return 0;
}
