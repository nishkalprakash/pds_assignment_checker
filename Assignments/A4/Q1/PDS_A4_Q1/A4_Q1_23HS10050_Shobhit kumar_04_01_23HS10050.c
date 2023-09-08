// Roll no:23HS10050
// Name:Shobhit kumar

#include<stdio.h>
int main(){
  
  int hr,km,rent,taxi_fare,day,Total_rent;
  taxi_fare=0;
  rent=0;
  Total_rent=0;
  printf("Enter the value of kilometer covered");
  scanf("%d", &km);
  printf("Enter the hour covered");
  scanf("%d", &hr);
  
  day=hr/24;
  
  if(hr<1){
    rent=0;
  }
  else if(1<=hr<12){
    rent+=200;
  }
  else if(hr>=12 && hr<24){
    rent+=300;
  }
  else if(hr>=24 && hr<48){
    rent+=300;
  }
  
  rent=rent + ((day-2)*300);
  

    if(km<8){
      taxi_fare+=20;
    }

    else if(km>=8 && km<12){
      taxi_fare+=(km-8)*10;
    }
    else if(km>=12 && km<16){
      taxi_fare+=(km-12)*8;
    }
    else if(km>=16 && km<20){
      taxi_fare+=(km-16)*6;
    }
    else if(km>=20){
      taxi_fare+=(km-20)*5;
    }
  
    Total_rent= rent + taxi_fare;
    printf("total rent=%d\n",Total_rent);

    return 0;

}
    
      
  
  

