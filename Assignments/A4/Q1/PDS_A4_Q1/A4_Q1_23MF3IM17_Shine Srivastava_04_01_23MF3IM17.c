//Roll No. : 23MF3IM17
//Name : Shine Srivastava

#include<stdio.h>
int main()
{
  float  distance,time,rental_t,rental_d,rental;
  
  printf("Enter the distance travelled in km :\n");
  scanf("%f",&distance);
  printf("Enter the duration of time in hour :\n");
  scanf("%f",&time);

  if(distance<8){
    rental_d=20;}
  if(distance>=8 && distance<12){
    rental_d=20+(distance-8)*10;}

  if(distance>=12 && distance<16){
    rental_d=60+(distance-12)*8;}

  if(distance>=8 && distance<12){
    rental_d=92+(distance-16)*6;}

  if(distance>=20){
    rental_d=116+(distance-20)*5;}

  if(time<1){
    rental_t=0;}

  if(time>=1 && time<12)
    {
      rental_t=200;}
   if(time>=12 && time<24)
    {
      rental_t=500;}
    if(time>=24)
    {
      rental_t=500+(300*(int)time/24);}

    rental = rental_t + rental_d;
    printf("rental = %f\n",rental);

    
    
  

  
  
  
  

  

}

  
  
  
  
  
