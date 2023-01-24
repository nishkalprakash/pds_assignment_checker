/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 9
QUESTION : to find area of rectangle given its diagonally opposite points

*/
#include<stdio.h>	//including important header files
#include<math.h>
#include<stdlib.h>

//creating struct rectangle to store coordinates 
typedef struct rectangle{
	double lx;
	double ly;	
	double rx;
	double ry;
}pds;

double dop(pds a){			//function to find distance btw two points
	double dist=sqrt(pow(a.lx-a.rx,2)+pow(a.ly-a.ry,2));
	return dist;
}

double area(pds a){		//function to create area of rectangle 
	double diag=dop(a);
	double aor=(diag*diag)/2.0;		//using the formula diagonal squared divided by 2s
	return aor;
}

int main(){	
	pds a;
	printf("enter coordinates : \n");
	printf("enter lowerleft coordinates : ");
	scanf("%lf %lf",&a.lx,&a.ly);
	printf("enter upperright coordinates : ");
	scanf("%lf %lf",&a.lx,&a.ly);
	double ans=area(a);			//area function call
	printf("Area : %.0lf\n",ans);

	return 0;
}
