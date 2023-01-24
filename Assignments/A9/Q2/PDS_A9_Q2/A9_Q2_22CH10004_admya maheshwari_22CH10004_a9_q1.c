/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 9
	   DESCRIPTION    : A C program to find if two circle intersect or not  
*/


#include<stdio.h>
#include<math.h>

struct circle{

int x;
int y;
float r;
		};


int main(){
	struct circle c1;
	struct circle c2;

	//input details of 1st circle

	printf("enter the value of circle1 x coordinate :");
	scanf("%d",&c1.x);
	printf("enter the value of circle1 y coordinate :");
	scanf("%d",&c1.y);
	printf("enter the value of circle1 radius r :");
	scanf("%f",&c1.r);

	//input details of 2nd circle

	printf("enter the value of circle2 x coordinate :");
	scanf("%d",&c2.x);
	printf("enter the value of circle2 y coordinate :");
	scanf("%d",&c2.y);
	printf("enter the value of circle2 radius r :");
	scanf("%f",&c2.r);

	//calculate the distance between the inputed 2 circle

	float a =sqrt((c1.x-c2.x)*(c1.x-c2.x)+(c1.y-c2.y)*(c1.y-c2.y));
	
	//to check weather the two circle intersect or not

	if ((c1.r+c2.r)>a){

		printf("circle intersect");
			   }

	else {
		printf("circle don't intersect");
}



	return 0;
}
