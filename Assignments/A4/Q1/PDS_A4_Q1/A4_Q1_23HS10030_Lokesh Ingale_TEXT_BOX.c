//Name:Lokesh Nitin Ingale
//Roll No:23HS10030
#include<stdio.h>
int main()
{
  int HT,KT,Taxi_f=0,days ;
  // Taking inputs
  printf("Enter Kilometers travelled and Hours rented\n");
  scanf("%d%d",&KT,&HT);
  days=HT/24;
 if(HT<1){
 Taxi_f=Taxi_f+0;
}
 if(HT>=1 && HT<12){
Taxi_f+=200;
}
 if(HT>=12 && HT<24){
Taxi_f+=300;
}
 if (HT>=24 && HT<=48){
Taxi_f+=300;
}
 if( HT>48){
   Taxi_f=Taxi_f+ ((days-1)*300);
 }

 if (KT<=8)
     Taxi_f+=20;
 if(KT>8  && KT<=12)
   Taxi_f=20+Taxi_f+(KT-8)*10;
 if(KT>12 && KT<=16)
   Taxi_f+=20+Taxi_f+(KT-8)*10+(KT-12)*8;
 if(KT>16 && KT<=20)
   Taxi_f+=20+Taxi_f+(KT-8)*10+(KT-12)*8+(KT-16)*6;
 if(KT>20)
   Taxi_f+=20+Taxi_f+(KT-8)*10+(KT-12)*8+(KT-16)*6+(KT-20)*5;
 printf (" The Taxi Fare is:%d",Taxi_f);
 return 0;
}