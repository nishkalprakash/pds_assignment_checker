//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
int main()
{
  int km,time;
  printf("ENTER THE DISTANCE TRAVELLED AND TIME TAKEN\n");
  scanf("%d %d", &km,&time);
  if (time<1){
    if(km<=8){
      printf("THE FARE IS %d", 20);
	}
    else if(km>8 && km<=12){
      printf("THE FARE IS %d", 20 + (km-8)*10);
    }
    else if(km>12 && km<=16){
      printf("THE FARE IS %d", 20 + 4*10 + (km-12)*8);
     }
    else if(km>16 && km<=20){
      printf("THE FARE IS %d", 20 + 4*10 + 4*8 + (km-16)*6);
    }
    else{
      printf("THE FARE IS %d", 20 + 4*10 + 4*8 + 4*6 +(km-20)*5);
    }
  }
    else if(time>=1 && time<12){
       if(km<=8){
      printf("THE FARE IS %d", 20+300);
       }
    else if(km>8 && km<=12){
      printf("THE FARE IS %d", 20 + (km-8)*10 + 300);
    }
    else if(km>12 && km<=16){
      printf("THE FARE IS %d", 20 + 4*10 + (km-12)*8 + 300);
     }
    else if(km>16 && km<=20){
      printf("THE FARE IS %d", 20 + 4*10 + 4*8 + (km-16)*6 + 300);
    }
    else{
      printf("THE FARE IS %d", 20 + 4*10 + 4*8 + 4*6 +(km-20)*5 + 300);
    }
    }
    else if(time>12 && time<24){
       if(km<=8){
      printf("THE FARE IS %d", 20+500);
	}
    else if(km>8 && km<=12){
      printf("THE FARE IS %d", 20 + (km-8)*10 + 500);
    }
    else if(km>12 && km<=16){
      printf("THE FARE IS %d", 20 + 4*10 + (km-12)*8 + 500);
     }
    else if(km>16 && km<=20){
      printf("THE FARE IS %d", 20 + 4*10 + 4*8 + (km-16)*6 + 500);
    }
    else{
      printf("THE FARE IS %d", 20 + 4*10 + 4*8 + 4*6 +(km-20)*5 + 500);
    }
    }
    else{
      if(km<=8){
      printf("THE FARE IS %d", 20);
	}
    else if(km>8 && km<=12){
      printf("THE FARE IS %d", 20 + (km-8)*10);
    }
    else if(km>12 && km<=16){
      printf("THE FARE IS %d", 20 + 4*10 + (km-12)*8);
     }
    else if(km>16 && km<=20){
      printf("THE FARE IS %d", 20 + 4*10 + 4*8 + (km-16)*6);
    }
    else{
      printf("THE FARE IS %d", 20 + 4*10 + 4*8 + 4*6 +(km-20)*5);
    }
    }
  return 0;
}
      
    
      
    
