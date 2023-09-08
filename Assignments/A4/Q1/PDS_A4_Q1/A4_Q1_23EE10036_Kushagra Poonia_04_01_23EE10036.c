//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int main(){
  int dist = 0;
  int rent = 0;
  int travel_chrg = 0;

  printf("Enter the distance travelled and the rental time:\n");
  scanf("%d %d", &dist, &rent);

  if(dist>0){ //First 8Km
    travel_chrg += 20;
    if(dist<8){
      dist = 0;
    }
    if(dist>=8){
      dist -= 8;
    }
  }
  if(dist>0){ //Next 4Km
    if(dist<4){
      travel_chrg += 10*dist;
      dist = 0;
    }
    if(dist>=4){
      dist -= 4;
      travel_chrg += 40;
    }
  }
  if(dist>0){//Next 4Km
    if(dist<4){
      travel_chrg += 8*dist;
      dist = 0;
    }
    if(dist>=4){
      dist -= 4;
      travel_chrg += 32;
    }
  }
  if(dist>0){//Next 4Km
    if(dist<4){
      travel_chrg += 6*dist;
      dist = 0;
    }
    if(dist>=4){
      dist -= 4;
      travel_chrg += 24;
    }
  }
  if(dist>0){//Beyond 20Km
    travel_chrg += 6*dist;
  }
  //Now rental charge

  if(rent > 0){
    travel_chrg += 200;
    if(rent < 12){
      rent = 0;
    }
    if(rent > 12){
      rent -= 12;
    }
  }
  if(rent > 0){
    if(rent < 12){
      rent = 0;
      travel_chrg += 300;
    }
    if(rent > 12){
      rent -= 12;
      travel_chrg += 300;
    }
  }
  if(rent > 0){
    travel_chrg += 300*(rent/24);
  }

  printf("The travel charge = %d\n", travel_chrg);
}
  
  
  

  

  
  
     
  
    
  
