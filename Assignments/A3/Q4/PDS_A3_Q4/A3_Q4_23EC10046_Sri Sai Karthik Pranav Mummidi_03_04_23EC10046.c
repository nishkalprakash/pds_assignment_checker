//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int a,b,c,d,x,y;
  printf("enter botto-left point(a,b):");
  scanf("%d%d",&a,&b);
  printf("enter top-right point(c,d):");
  scanf("%d%d",&c,&d);
  printf("enter a point P(x,y);");
  scanf("%d%d",&x,&y);
  if(c>a&&d>b){
    if(x==a&&y==b){
      printf("p=(%d,%d) lies on bottom-left corner",x,y);}
    else if(x==a&&y==d){
      printf("p=(%d,%d) lies on top left corner",x,y);}
    else if(x==c&&y==d){
      printf("p=(%d,%d) lies on top right corner",x,y);}
    else if(x==c&&y==b){
      printf("p=(%d,%d) lies on bottom right corner",x,y);}
    else if(x==a&&b<y<d){
      printf("p=(%d,%d) lies on left side",x,y);}
    else if(x==c&&b<y<d){
      printf("p=(%d,%d) lies on right side",x,y);}
    else if(y==b&&a<x<c){
      printf("p=(%d,%d) lies on bottom side",x,y);}
    else if(y==d&&a<x<c){
      printf("p=(%d,%d) lies on top side",x,y);}
    else if(a<x<c&&b<y<d){
      printf("p=(%d,%d) lies inside rectangle",x,y);}
    else{
      printf("p=(%d,%d) lies outside rectangle",x,y);}
   }
  else{
    printf("||| formed rectangle");}
  return 0;
}
      
