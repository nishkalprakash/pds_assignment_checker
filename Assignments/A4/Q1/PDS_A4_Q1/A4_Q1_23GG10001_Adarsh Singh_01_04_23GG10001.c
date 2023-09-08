#include<stdio.h>
int main(){
  int dist;
  int time;
  int c_fuel;
  int c_time;
  int cost;
  printf("Enter the distance travelled in km:\n");
  scanf("%d",&dist);
  printf("Enter the time taken:\n");
  scanf("%d",&time);
  if(dist<=8){
    c_fuel=20;
  }
  else if((dist<=12)&&(dist>8)){
    c_fuel=20+((dist-8)*10);
  }
  else if((dist<=16)&&(dist>12)){
    c_fuel=60+((dist-12)*8);
  }
  else if((dist<=20)&&(dist>16)){
    c_fuel=92+((dist-16)*6);
  }
  else{
    c_fuel=116+((dist-20)*5);
  }

  if((time>=1)&&(time<12)){
    c_time=200;
  }
  else if((time>=12)&&(time<24)){
    c_time=300;
  }
  else{
    c_time=300*(time/24);
  }
  cost=c_time + c_fuel;
  printf("The total cost of the taxi is: %d",cost);
  return 0;
}  
