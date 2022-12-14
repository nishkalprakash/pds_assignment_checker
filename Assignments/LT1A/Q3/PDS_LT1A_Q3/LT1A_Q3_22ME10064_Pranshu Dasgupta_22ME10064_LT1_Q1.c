/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Question 1
Description: Program to check if a given triangle is acute angled*/

#include <stdio.h>
#include <math.h>

float side(float x1, float y1, float x2, float y2);
int check_triangle(float s1, float s2, float s3);
void check_angle(float s1, float s2, float s3);

int main(){
	float x1, x2, x3, y1, y2, y3, A, B, C;
	printf("Input all the coordinates of the triangle: ");
	scanf("(%f,%f),(%f,%f),(%f,%f)", &x1, &y1, &x2, &y2, &x3, &y3);
	A=side(x1,y1,x2,y2);
	B=side(x2,y2,x3,y3);
	C=side(x3,y3,x1,y1);
	if (check_triangle(A,B,C)) check_angle(A, B, C);
	else printf("Invalid");
	return 0;
}

float side(float x1, float y1, float x2, float y2){  //Function to calculate the length of the side of a triangle, given the coordinates
	float s, sq;
	sq=(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
	s=pow(sq, 0.5);
	return s;
}

int check_triangle(float s1, float s2, float s3){  //To check if the given three sides make up a triangle
	if ((s2+s3>s1) && (s3+s1>s2) && (s1+s2>s3)) return 1;
	else return 0;
}

/*Using the cosine rule in triangles,
		cosA= (b*b + c*c - a*a)/(2*b*c)
where a, b and c are the lengths of the sides of a triangle. These are positive quantities. Therefore only the numerator is responsible for deciding the sign of cosA. If cosA is positive (or the numerator is positive), it means that the angle A is acute OR angle A lies between 0 and 90 degrees. If the numerator is 0 then it is right angled since cos90=0. If the numerator is negative, then the angle is obtuse since cos values from 90 to 180 degrees are negative.*/

void check_angle(float s1, float s2, float s3){
	float A, B, C;  //A, B and C denote the numerator parts of the cosine rule
	A=s2*s2+s3*s3-s1*s1;
	B=s3*s3+s1*s1-s2*s2;
	C=s1*s1+s2*s2-s3*s3;
	if ((A>-0.01 && A<0.01) || (B>-0.01 && B<0.01) || (C>-0.01 && C<0.01)) printf("Right Angled"); //If cos of any one angle is zero
	else if (A>0 && B>0 && C>0) printf("Acute Angled"); //If cos of all angles in the triangle are positive
	else printf("Obtuse Angled"); //Only case remaining for a triangle is obtuse. Cosine of one of the angles must be negative.
}

