/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<math.h>
int main(){
float x1,y1,x2,y2,x3,y3;
float a,b,c;
printf("Enter the coordinates (x1,y1),(x2,y2),(x3,y3)");
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
if ((a+b>=c)||(b+c>=a)||(a+c>=b)){
    printf("This is a valid triangle\n");
    if ((c>=a)&&(c>=b)){
        if ((a*a+b*b)==c*c){
            printf("RIGHT ANGLE TRIANGLE");
          }
        if ((a*a+b*b)>c*c){
            printf("ACUTE ANGLE TRIANGLE");
          }
        if ((a*a+b*b)<c*c){
            printf("OBTUSE ANGLE TRIANGLE");
          }
}
    if ((a>=b)&&(a>=c)){
        if ((c*c+b*b)==a*a){
            printf("RIGHT ANGLE TRIANGLE");
          }
        if ((c*c+b*b)>a*a){
            printf("ACUTE ANGLE TRIANGLE");
          }
        if ((c*c+b*b)<a*a){
            printf("OBTUSE ANGLE TRIANGLE");
          }
}
    if ((b>=a)&&(b>=c)){
        if ((a*a+c*c)==b*b){
            printf("RIGHT ANGLE TRIANGLE");
          }
        if ((a*a+c*c)>b*b){
            printf("ACUTE ANGLE TRIANGLE");
          }
        if ((a*a+c*c)<b*b){
            printf("OBTUSE ANGLE TRIANGLE");
          }
}
}
else{
     printf("This triangle is not valid");}
return 0;
}
