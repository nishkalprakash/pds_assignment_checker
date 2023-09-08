//Lab 4
// Name- Shashank Sahil
// Roll number - 23CE10065
int rental;
int distance;
int dfare;
int rfare;
#include <stdio.h>
int main(){
   printf("Enter the kilometers travelled");
   scanf("%d",&distance);
   printf("Enter the hours of rental");
   scanf("%d",&rental);
   
   if(rental < 1){
    rfare = 0;
   }
   if(rental >=1 && rental < 12  ){ 
    rfare = 200;
   }
    if(rental >=12 && rental < 24  ){ 
    rfare = 500;
   }
    if(rental >= 24   ){ 
    int b = rental / 24;
    rfare = 500 + b*300;
   }
   if (distance <= 8 ){
    dfare = 20;
   }
   if ((distance <= 12) && (distance > 8)){
    dfare = (20 + (distance - 8)*10);
   }
   if ((distance <= 16) && (distance > 12)){
    dfare = 20 + (distance -12)*8 + 40;
   }
  if ((distance <= 20) && (distance > 16)){
    dfare = 20 + (distance -16)*6 + 40 + 32;
   }
   if ((distance > 20)){
    dfare = 20 + (distance -20)*5 + 40 + 32 + 24;
   }
   int p = dfare+ rfare;
   
 printf( " Final fare is %d ", p);




}