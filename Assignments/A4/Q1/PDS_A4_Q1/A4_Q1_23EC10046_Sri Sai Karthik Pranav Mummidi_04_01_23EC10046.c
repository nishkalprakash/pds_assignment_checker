//rollno: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int km,hr,sum,sum1,sum2;
  printf("enter total number of kms travelled=");
  scanf("%d",&km);
  printf("enter hrs taxi was retained=");
  scanf("%d",&hr);
  if(hr<1){
    sum=0;}
  else if(1<=hr<12){
    sum=200;}
  else if(12<=hr<24){
    sum=500;}
  else if(24<=hr){
    if(hr%24==0){
      sum=200+hr/24*300;}
    else{
      sum=(200+(hr/24)+1)*300;}
  }
  if(km<=8){
    sum1=20;

  }
  else if(8<km && km<=12){
    sum1=20+10*(km-8);

  }
  else if(12<km && km<=16){
    sum1=60+8*(km-12); }
  else if(16<km && km<=20){
    sum1=92+6*(km-16);}
  else if(20<km){
    
    sum1=116+5*(km-20);}
  sum2=sum+sum1;
 
  printf("taxi fare=%d",sum2);
  return 0;
}
