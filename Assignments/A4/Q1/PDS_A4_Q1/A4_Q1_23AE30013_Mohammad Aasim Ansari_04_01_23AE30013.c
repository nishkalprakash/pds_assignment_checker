#include<stdio.h>
#include<stdlib.h>
int main(){
  int km,hr,rs,money;
  int sum=0;
  printf("Enter the km and hr");
  scanf("%d %d",&km,&hr);


  if (hr<1){
    sum=0;
  }
  if (hr>=1&&hr<=12){
    sum=200;
  }
  if (hr>=12&&hr<=24){
    sum=300;
  }
  if (hr>24){
    sum=800;
  }
  if (km<=8){
    rs =20;
  }
  if(km>8&&km<=12){
    rs =30;
  }
  if(km>12&&km<=16){
    rs =38;
  }
  if(km>16&&km<=20){
    rs =44;
  }
  if(km>20){
    rs =49;
  }
  money=rs+sum;
  printf("Taxi fare is %d ",money);
}
  
    
