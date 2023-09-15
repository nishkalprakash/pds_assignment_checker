// Raju Kumar
// 23EC30036
#include<stdio.h>
int main(){
  int km=0,hr=0,fare=0;
  printf("enter the kms travelled :");
  scanf("%d",&km);
  printf("enter the hrs:");
  scanf("%d",&hr);
  if(km<=8){
    fare =20;}
  else if ((8<km)&&(km<=12))
	fare=fare+(km-8)*10;
    else if ((12<km)&&(km<=16))
	fare=fare+(km-12)*8;
    else if ((16<km)&&(km<=20))
	  fare=fare+(km-16)*6;
    else (20<km);
      	 fare=fare+(km-20)*5;
	    printf("total fare %d", fare);
       return 0;
	    }


			    
				
