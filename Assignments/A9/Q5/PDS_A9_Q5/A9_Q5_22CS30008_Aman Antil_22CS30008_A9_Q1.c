/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 9
Description : Program to find days between dates
*/
#include <stdio.h>
#include<stdlib.h>
typedef struct{
	int d;
	int m;
	int yy;
} date; // structure for date
date x,y;
int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31}; //defining array for non leap year
int mthl[12]={31,29,31,30,31,30,31,31,30,31,30,31}; //defining array for leap year
date readdate(date a){
	while(1){
	scanf("%d", &a.d);
	scanf("%d", &a.m);
	scanf("%d", &a.yy);
	if(a.yy%4){
		if((a.d<1)||(a.d>mth[a.m-1])||(a.m<1)||(a.m>12)) {printf("Invalid date. Enter again\n"); continue;}
		else return a;
	}
	else{
		if((a.d<1)||(a.d>mthl[a.m-1])||(a.m<1)||(a.m>12)) {printf("Invalid date. Enter again\n"); continue;}
		else return a;
	} //conditions to check invalid inputs. will take input until valid date
	}
}
void printdate(){
	printf("X = %d/%d/%d \nY = %d/%d/%d \n", x.d,x.m,x.yy,y.d,y.m,y.yy);
}//function for printing date
int finddays(date x,date y){
	int t1=0,t2=0;
	int tyx=(x.yy)-2000;
	int tyy=y.yy-2000;
	t1=(tyx*365)+(tyx/4); //finding total days from 31/12/1999
	t2=(tyy*365)+(tyy/4); //adding extra days for leap year
	if(x.yy%4){
		for(int i=0; i<x.m-1;i++) t1+=mth[i]; // adding months
		for(int i=0; i<y.m-1;i++) t2+=mth[i];
	}
	else {
		for(int i=0; i<x.m-1;i++) t1+=mthl[i]; // leap year condition
		for(int i=0; i<y.m-1;i++) t2+=mthl[i];
	}
	t1+=x.d;
	t2+=y.d;
	int ans= (t1-t2>0) ? (t1-t2) : (t2-t1); //making answer positive
	return ans;
}

int main(){
	//calling finctions
	printf("X = ");
	x=readdate(x);
	printf("Y = ");
	y=readdate(y);
	printdate();
	printf("Days = %d\n", finddays(x,y));
	return 0;
}