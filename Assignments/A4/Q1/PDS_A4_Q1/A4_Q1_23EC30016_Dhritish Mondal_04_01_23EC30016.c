//roll no : 23ec30016
// name : dhritish mondal
#include<stdio.h>
int main()
{
  int km,hr;
  printf("Enter the km : ");
  printf("Enter the hr : ");
  int fare;
  scanf("%d %d", &km,&hr);
  if (hr<1) {
    fare=0; }
  else   if ((1<=hr)&&(hr<=12)){
    fare= 200; }
  else   if ((12<hr)&&( hr<=24)) {
     fare = 500; }
   else if (hr>24){
     fare =hr/24* 300+500; }
  printf("%d\n",fare);
  
  if (km<9){
    fare = fare + 20; }
  else if((8<km)&&( km<=12)) {
    fare =fare +20+ 10*(km-8);}
  else if((12<km)&&(km<=16)) {
    fare =fare +20+40+8*(km-12);}
  else if((16<km)&&( km<=20)) {
    fare = fare+20+40+32+ 6*(km-16);}
    else if(km>20) {
      fare =fare + 5*(km-20)+116;}
  printf(" the total fare is %d", fare);
    return 0;
    }
  
