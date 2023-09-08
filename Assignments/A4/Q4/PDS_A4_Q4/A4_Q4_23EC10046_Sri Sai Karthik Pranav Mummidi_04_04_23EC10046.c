//rollno= 23EC10046
//name= mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int num,place;
  place=0;
  while(1){
    printf("enter a digit=");
    scanf("%d",&num);
    if(num==5){
      place=1;}
    else if(num!=1&&place==1){
      place=0;}
    else if(num==1&&place==1){
      place=2;}
    else if(place==2){
      place++;}
    else if(num==7&&place==3){
      printf("the pattern is found");
      break;}
    else if(num<0){
      break;}
  }
  return 0;
}
