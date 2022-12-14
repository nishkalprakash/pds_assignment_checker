/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Lab Test No. : 1
Description : Taking three coordinates as input from the user and showing if it is an acute angled triangle or an obtuse angled triangle or a right angled triangle
*/

#include<stdio.h>
#include<math.h>

double lensqr(int qx1,int qy1,int qx2,int qy2){//Creating a function for finding out the length of the side
	double length;
	int X=qx2-qx1;
	int Y=qy2-qy1;
	length=(pow(X,2)+pow(Y,2));
	return(length);//Returning length
}

int abs(int a){//Creating a function to find out the modulus of an integer
	if(a<0)
		return(-a);
	else return(a);
}

int main(){
	int x1,x2,x3,y1,y2,y3;
	double L1,L2,L3;
	printf("Enter (x1,y1),(x2,y2),(x3,y3) : ");
	scanf(" %d %d   %d %d   %d %d ",&x1,&y1,&x2,&y2,&x3,&y3);//Taking input

	L1=lensqr(x2,y2,x3,y3);//Defining the lengths of sides
	L2=lensqr(x1,y1,x3,y3);
	L3=lensqr(x1,y1,x2,y2);

	double l1=sqrt(L1);
	double l2=sqrt(L2);
	double l3=sqrt(L3);

	if(l1+l2<=l3 || l1+l3<=l2 || l3+l2<=l1)//Defining conditions for coordinates to become a valid triangle
		printf("Invalid ");
	else if(abs(l1-l2)>l3 || abs(l1-l3)>l2 || abs(l3-l2)>l1)
		printf("Invalid ");
else{//conditions for acute obtuse and right angles triangles
	if((L1)==(L2+L3))
		printf("Right Angled");
	else if((L2)==(L1+L3))
		printf("Right Angled");
	else if((L3)==(L2+L1))
		printf("Right Angled");

	else if(L1>L2+L3 || L2>L1+L3 || L3>L2+L1)
		printf("Obtuse Angled\n");
	else if(L1<L2+L3 || L2<L1+L3 || L3<L2+L1)
		printf("Acute Angled\n");
	else printf("None\n");
}
return 0;
}
