/*
SATYA PRAKASH NANDA
SECTION 14
22AG10041
LAB 10
QUESTION 3
*/

#include<stdio.h>
#include<math.h>
typedef struct reactangle{
	int x1;		//x1,y1= top leftcorner
	int y1;
	int x2;		//x2,y2= bottom right corner
	int y2;
}rec;

void calarea(rec r1);      //function declaration

int main(){
rec r1;
printf("enter coordinates of top left corner(x1,y1).\n");
printf("x1:");							// input of coordinates
scanf("%d",&r1.x1);						// the rectangle
printf("y1:");
scanf("%d", &r1.y1);
printf("enter coordinates of bottom right corner(x2,y2).\n");
printf("x2:");
scanf("%d",&r1.x2);
printf("y2:");
scanf("%d", &r1.y2);
calarea(r1);						//function call
return 0;
}

void calarea(rec r1){						// function definition
int a=(r1.x1-r1.x2)*(r1.x1-r1.x2) +(r1.y1-r1.y2)*(r1.y1-r1.y2);
float d=sqrt(a);
float area= d*d/2;				//d=length of diagonal
printf("area of rectangle is %.0f\n",area);
}



