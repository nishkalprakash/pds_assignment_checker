/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 9
Description :  to find if two circles intersect.
*/
#include<stdio.h>
#include<math.h>//please use -lm 
struct circle{// structure
int x;
int y;
float r;	
};
int IsIntersectingCircle(struct circle a , struct circle b){// function to check if circle intersects

int d = pow(a.x-b.x,2)+pow(a.y-b.y,2);
int e = sqrt(d);// distance formula
float r = a.r+b.r;
if(r>e){
return 1;
}
else{
return 0;
}

}
int main(){
struct circle a, b;// structure a & b
printf("Enter coordinates of circle 1:");
scanf("%d%d",&a.x,&a.y);
printf("Enter radius of circle 1:");
scanf("%f",&a.r);
printf("Enter coordinates of circle 2:");
scanf("%d%d",&b.x,&b.y);
printf("Enter radius of circle 2:");
scanf("%f",&b.r);
int f=IsIntersectingCircle(a,b);
if(f==1){
printf("Circles Intersect\n");//print
}
if(f==0){
printf("Circles DON'T Intersect\n");
}
}
