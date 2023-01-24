#include<stdio.h>
 typedef struct date{
  int dd;
  int mm; 
  int yyyy;
 }date;
 
 struct date ReadDate(date x){
 
   printf("ente date in formate dd/mm/yyyy");
   scanf("%d",&x.dd);
   scanf("%d",&x.mm);
   scanf("%d",&x.yyyy);
   return(x);
    }
 void printdate(date x)
 {
    printf("X =  %d/%d/%d",x.dd,x.mm,x.yyyy); 
 }
 void finddays(date d1,date d2){
   date z;
   z.dd =d2.dd -d1.dd;
   z.mm=d2.mm-d1.mm;
   z.yyyy=d2.yyyy-d1.yyyy;
   if (z.dd<0){
    z.dd =(-1)*z.dd;
   }
    if (z.mm<0){
    z.mm =(-1)*z.mm;
   }
    if (z.yyyy<0){
    z.yyyy =(-1)*z.yyyy;
   }
   int leap;
   if(z.yyyy>3){
    leap =z.yyyy/4;
    }
   int tdays=0;
   for (int i=d1.mm;i<d2.mm;i++){
   
     if(i==2){
     tdays+=28;
     }
     else if(i==3||i==5||i==7||i==8||i==10||i==12){
     tdays+=31;
     }
     else if(i==4||i==6||i==9||i==11){
     tdays+=30;
     }
     else if(i==0){
     tdays+=0;
     }
   }
   
   int d=z.dd + tdays +(365*z.yyyy) + leap;
   printf("total days =%d",d);
 }
  int main()
  {
   date d1;
   date d2;
   ReadDate(d1);
    ReadDate(d2);
   printdate(d1);
   printdate(d2);
   
   finddays(d1,d2);
  return 0;
  }
 
