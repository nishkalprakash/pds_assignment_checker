//Roll No:<23MT10034>
//Name:<N Chandra Siddharth>

#include<stdio.h>
#include<math.h>
int main ()
{
  int distance,hour;
  printf("Enter the distance:");
  scanf("%d",&distance);
  printf("Enter hours:");
  scanf("%d",&hours);
  int x;
  if(hours<1){
    printf("x=0");
  }
  else if(hours<12 && hours>1){
    printf("x=200");
  }
  else if(hours>12 && hours<24){
    printf("x=500");
  }
  else{
    printf("2500+(300)(hours/24)");
  }
  int y;
  if(distance<8){
     y=20;
  }
  else if(distance>8 && distance<12){
    y= 20+(distance-8)*10;
      }
  
  else if(distance>12 && distance<16){
    y= 60+(distance-12)*8 ;
  }
  else if(distance>16 && distance<20){
    y= 92+(distance-16)*6;
  }
  else(distance>20){
      y= 116+(distance-20)*5 ;
    }
   printf("Total Amount=%d",x+y);
return 0;
}
