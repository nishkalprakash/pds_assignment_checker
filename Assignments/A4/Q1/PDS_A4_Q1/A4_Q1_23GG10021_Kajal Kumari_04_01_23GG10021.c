//name_kajal_kumari
//roll_no._23GG10021
#include<stdio.h>
int main()
{
  int distance, fare;
  int time;
  printf(" enter the distance travelled",distance);
  scanf("%d", &distance);
  printf(" enter the time travelled", time);
  scanf("%d",&time);
  if(time<1){
    printf("no fare");
  }
  else if(time>=1 && time<12){
    printf(" fare is 200");
  }
  else(time<=24 && time>=12){
      printf(" fare is 500");
    }
  // additional fare
  int additional_fare;
  int distance;
 
  printf(" enter the extra distance")
    scanf("%d", &distance);
  fare=fare+ additional fare;
  
      int distance;
    if(distance=<8) {
    printf(" fare is =%d");
    fare=fare+20;
      }
    int distance, fare1;
    fare1= distance*10;
    else if(distance>8 && distance<=12)
      { printf("  fare is =%d");
     fare = fare+fare1; }
   int distance, fare2;
   fare2= distance*8;
   else if(distance>12 && distance<=16)
     { printf(" fare is=%d");
       fare= fare+fare2;}
   int distance, fare3;
   fare3= distance*6;
   else if(distance>16 && distance<=20)
     { printf(" fare is =%d");
       fare= fare +fare3;
     }
   
   int distance, fare4;
 else( distance>20 )
     { printf(" fare is %d");
       fare =fare+fare4;
     } return 0;
}
