# include <stdio.h>
int main()
{
  int d,t,price;
  printf("Enter the distance travelled:\n");
  scanf("%d",&d);
  printf("Enter the time travelled:\n");
  scanf("%d",&t);
  if(d<=8){
    price=20;}
  else if(d>8&&d<=12){
    price=20+(10*(d-8));}
  else if(d>12&&d<=16){
    price=20+10*4+8*(d-12);}
  else if(d>16&&d<=20){
    price=20+10*4+8*4+6*(d-16);}
  else{
    price=20+10*4+8*4+6*4+5*(d-20);}
  if(t<1){
    price=price+0;}
  else if(t>1&&t<12){
    price=price+200;}
  else if(t>12&&t<=24){
    price=price+300;}
  else{
    price=price+300*(t/24);}
  printf("price is:%d",price);
  return 0;
}
    
