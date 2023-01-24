/*
SATYA PRAKASH NANDA
SECTION 14
22AG10041
LAB 10
QUESTION 2
*/
#include<stdio.h>
#include<math.h>



typedef struct circle{
	int x;
	int y;
	float r;
}cir;
void isintersectingcircle(cir c1, cir c2);   //function declaration

int main(){
cir c1;
cir c2;
printf("enter x coordinate of centre of 1st circle:");
scanf("%d",&c1.x);
printf("enter y coordinate of centre of 1st circle:");		// input data for 1st circle
scanf("%d",&c1.y);
printf("enter radius of 1st circle:");
scanf("%f",&c1.r);
printf("enter x coordinate of centre of 2nd circle:");
scanf("%d",&c2.x);
printf("enter y coordinate of centre of 2nd circle:");		//input data for 2nd circle
scanf("%d",&c2.y);
printf("enter radius of 2nd circle:");
scanf("%f",&c2.r);
isintersectingcircle(c1,c2);					//function call

return 0;
}
void isintersectingcircle(cir c1, cir c2){			// function definition
int a= (c1.x-c2.x)*(c1.x-c2.x) + (c1.y-c2.y)*(c1.y-c2.y);        
float b=sqrt(a);//b=distance between centres					
float c= c1.r+ c2.r; //c= sum of radius
if(b>c){printf("circles dont intersect");}
else{printf("circles intersect");}
}
