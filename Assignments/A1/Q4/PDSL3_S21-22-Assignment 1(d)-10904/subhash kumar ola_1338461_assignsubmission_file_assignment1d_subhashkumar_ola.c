#include<stdio.h>
#include<math.h>
int main(){
float x1,y1,x2,y2,x3,y3,x,y,z,p,l1,l2,l3;
printf("Work with triangles/n");
printf("enter the vertices of a triangle,v1(=x1,y1)/n");
scanf("%f%f",&x1,&y1);
// read v1
printf("enter v2(=x2,y2)/n");
scanf("%f%f",&x2,&y2);
// read v2
printf("enter v3(=x3,y3)/n");
scanf("%f%f",&x3,&y3);
// read v3
float area;
area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
printf("area is %f",area);
l1= sqrt((x2-x1)(x2-x1) + (y2-y1)(y2-y1));
l2= sqrt((x1-x3)(x1-x3) + (y1-y3)(y1-y3));
l3= sqrt((x3-x2)(x3-x2) + (y3-y2)(y3-y2));
if (l1>l3 && l1>l2){

    x= l1;
    y=l2;
    z=l3;

}
else if (l2>l3 && l2>l1){

    x=l2;
    y=l3;
    z=l1;
}
else if (l3>l2 && l3>l2){

    x=l3;
    y=l1;
    z=l2;
}
p= sqrt((y*y)+(z*z));
if (p==x){
    printf("Right angle triangle\n");
}
else if (x<p){
    printf("acute angled\n");
}
else if (x>p){
    printf("obtuse angled triangle\n");
}
 if (l1==l2 && l2==l3){
    printf("Equilateral triangle\n");
 }
 else if ( l1!=l2 && l2!=l3 && l3!=l1){
    printf("all sides are different\n");
 }
 else printf("it is an isosceles triangle\n");




    return 0;
}
