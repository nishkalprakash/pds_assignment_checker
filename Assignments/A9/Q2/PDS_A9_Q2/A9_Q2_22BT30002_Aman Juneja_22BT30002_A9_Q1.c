/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 9
QUESTION :TO FIND If given two circles they intersect or not

*/
#include<stdio.h>	//including important header files
#include<math.h>
#include<stdlib.h>

typedef struct circle{			//declaring a struct circle datatype
	int x;
	int y;
	float r;
}q;


				
double dop(q a,q b){	//function to find distance btw two points
	double dist=sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
	return dist;
}

//intersection function returns 1 if intersect else returns 0
int IsIntersectingCircle(q m,q n){
	double p=dop(m,n);
	float sor;
	sor=m.r+n.r;
	if(sor>=p){
		return 1;	
	}
	return 0;
}

int main(){
	q a,b;		//declaration of struct circle type object
	printf("x y r\n");
	scanf("%d %d %f",&a.x,&a.y,&a.r);		//scanning data from user
	scanf("%d %d %f",&b.x,&b.y,&b.r);
	
	if(IsIntersectingCircle(a,b)){			//if statement works if function returns 1 as the return value
		printf("Circles Intersect\n");	
	}
	else{
		printf("Circles DON'T Intersect\n");
	}
	return 0;
}

