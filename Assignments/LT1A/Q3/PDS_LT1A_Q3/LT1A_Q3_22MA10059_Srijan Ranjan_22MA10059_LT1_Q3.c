/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Lab Test:1
Description: This program takes three coordinates and checks if the triangle is valid or inavlid and if it is right angled, obtuse or acute.
*/
#include<stdio.h>
#include<math.h>
int main(){
	float a1[2];
	float a2[2];                            //Arrays to store the coordinates of all the vertices.
	float a3[2];
	for(int i=0;i<2;i++){
		scanf("%f",&a1[i]);
	}
	for(int i=0;i<2;i++){
		scanf("%f",&a2[i]);
	}
	for(int i=0;i<2;i++){
		scanf("%f",&a3[i]);
	}
	int l[3];
	l[0]=sqrt((pow((a1[0]-a2[0]),2))+(pow((a1[1]-a2[1]),2)));
	l[1]=sqrt((pow((a3[0]-a2[0]),2))+(pow((a3[1]-a2[1]),2)));         //Calculation of all the lengths of the sides.
	l[2]=sqrt((pow((a1[0]-a3[0]),2))+(pow((a1[1]-a3[1]),2)));
	if(((l[0]+l[1])<l[2])||((l[2]+l[1])<l[0])||((l[2]+l[0])<l[1])){
		printf("Invalid\n");
	}
	else{
		if((pow(a1[0]-a2[0],2)+pow(a1[1]-a2[1],2)==pow(a1[0]-a2[0],2)||(pow(a3[0]-a2[0],2)+pow(a3[0]-a2[0],2)==pow(a3[0]-a2[0],2))||(pow(a1[0]-a3[0],2)+pow(a1[0]-a3[0],2))==pow(a1[0]-a3[0],2))){
			printf("Right Angled\n");            //Checking if the Triangle is right angled.
		}
		else{
			float m[3];
			m[0]=((a2[1]-a1[1])/(a2[0]-a1[0]));
			m[1]=((a3[1]-a1[1])/(a3[0]-a1[0]));            //Calculation of the slope of every side of the triangle.
			m[2]=((a3[1]-a2[1])/(a3[0]-a2[0]));
			if(((m[0]*m[1])<0)||((m[0]*m[2])<0)||((m[1]*m[2])<0)){
				printf("Obtuse Angled\n");                  //Checking if the triangle is Obtuse.
			}
			else{
				printf("Acute Angled\n");                   //Checking if the triangle is Acute.
			}
		}
	}
	return 0;
}