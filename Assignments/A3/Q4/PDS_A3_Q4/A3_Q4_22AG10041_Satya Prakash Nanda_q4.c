#include<stdio.h>
int main()
{
//code to calculate electricity bill 
/*
satya prakash nanda
22ag10041
ques4
sec14
*/
int units;
float c,d,e;
printf("enter the no of units:");
scanf("%d", &units);

if(0<=units && units<=100){printf("bill is %f", 50*1.2);}
else if(100<units  && units<=200){
                                   c=(50+(units-100)*0.75)*1.2;
                                   printf("bill is %f", c);
                                  }
else if(200<units && units<=300){
                                   d=(50+ 100*0.75 +(units-200)*1.2)*1.2;
                                    printf("bill is %f", d);
                                 }
else{
     e=(50+75+120+(units-300)*1.5)*1.2;
     printf("bill is %f", e);
     }


return 0;
}
