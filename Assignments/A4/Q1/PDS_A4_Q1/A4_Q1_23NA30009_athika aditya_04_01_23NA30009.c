//rol no -23NA30009
//athika

#include<stdio.h>

int main(){
  
  int distance,time;
  int rental,fuel;
  int extratime;
  int taxifare = 0;
  
  printf("enter distance travelled (in km):\n");
  scanf("%d",&distance);
  
  printf("enter the hours the taxi was retained:\n");
  scanf("%d",&time);

  if(time<1){
    rental= 0;
  }
  
  if(time>=1 && time <=12){
    rental=200;
  }

  if(time>=12 &&time<=24){
    rental =500;
  }

  if(time> 24){
    extratime=(time-24)/24+1;
    rental=500+300*extratime;
      }
  
  
  if (distance>=0 && distance<=8){
    fuel=20*distance;
  }

  if(distance >8  & distance <=12){
    fuel=(20*8)+(10*distance-8);
    }
  

  if(distance >12 && distance <=16){
    fuel=(20*8)+(10*4)+(8*distance-8);
  }
   

if(distance >16 && distance<=20){
    fuel=(20*8)+(10*4)+(8*4)+(6*(distance-16));
  }

   
  return 0;
}
