//t.Sritan//
//23AE10036//
#include<stdio.h>
int main(){
  int a,b,c,d,x,y;
printf("enter coordinates of bottom left point and bottom right point \n");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if (!((c>=a)&&(d>=b))){
   printf("ill formed rectangle");
 }
 else{
   printf("enter coordinates of a point p");
 scanf("%d %d",&x ,&y);
 if (((x>c)||(y>d))||((x<a)||(y<b))){
   printf("the point lies outside of rectangle");}
 else if (((a<x)&&(x<c))&&((b<y)&&(y<d))){
   printf("point lies in rectangle");
 }
 else if (((a<x)&&(x==c))&&((b<y)&&(y<d))){
  printf("point lies on right side of rectangle");}

 else if (((a==x)&&(x<c))&&((b<y)&&(y<d))){
  printf("point lies on left side of rectangle");}

 else if (((a<x)&&(x<c))&&((b==y)&&(y<d))){
  printf("point lies on bottom side of rectangle");}

 else if (((a<x)&&(x<c))&&((b<y)&&(y==d))){
  printf("point lies on top side of rectangle");}

 else if ((x==c)&&(y==d)){
  printf("point lies on top right corner of rectangle");}

 else if ((x==a)&&(y==b)){
  printf("point lies on bottom left corner of rectangle");}

 else if ((x==a)&&(y==d)){
  printf("point lies on top left corner of rectangle");}

 else if ((x==c)&&(y==b)){
  printf("point lies on bottom right corner of rectangle");}
 
 }
 

  return 0;}
