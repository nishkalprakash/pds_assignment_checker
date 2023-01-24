/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 9
Discription : To check if circles intersect
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct circle{    				//declaration of struct	storing the data of a circle	
	int x;
	int y;
	float r;
};
struct circle readcircle(){  			//function to read the data of circle
	struct circle a;
	scanf("%d",&a.x);
	scanf("%d",&a.y);
	scanf("%f",&a.r);
	return a;
}
int IsIntersectingCirle(struct circle a, struct circle b){	//function to find if the circles are intersecting or not 
	float s,d,flag;
	s=a.r+b.r;						//sum of radius
	d=sqrt((b.y-a.y)*(b.y-a.y)+(b.x-a.x)*(b.x-a.x));	//distance between the centres
	flag=(d<=s)?1:0;
return flag;
}
int main(){
	int flag;
	struct circle p,q;
	printf("x y r\n");			//scan function called 
	p=readcircle();
	q=readcircle();
	flag=IsIntersectingCirle(p, q);		//checking function called
	if(flag==1) printf("Circles Intersect\n");
	else if(flag==0) printf("Circles Don't Intersect\n");
return 0;
}
