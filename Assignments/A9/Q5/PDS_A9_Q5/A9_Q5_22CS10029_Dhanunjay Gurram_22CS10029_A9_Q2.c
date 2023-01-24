/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:9*/
#include <stdio.h>
#include <stdlib.h>
struct Date{
	int dd;
	int mm;
	int yyyy;
};
struct Date ReadDate(struct Date*,struct Date*);
struct Date ReadDate(struct Date *x,struct Date *y){
	printf("X = ");
	scanf("%d %d %d",&x->dd,&x->mm,&x->yyyy);
	printf("Y = ");
	scanf("%d %d %d",&y->dd,&y->mm,&y->yyyy);
}
void PrintDate(struct Date *);
void PrintDate(struct Date *x){
	printf("%d/%d/%d\n",x->dd,x->mm,x->yyyy);
}
void FindDays(struct Date *x,struct Date *y){
	int days_x=0,days_y=0;
	int days;
	for (int i=2000;i<x->yyyy;i++){
		if (i%4==0) days_x+=366;
		else days_x+=365;
	}
	for (int i=2000;i<y->yyyy;i++){
		if (i%4==0) days_y+=366;
		else days_y+=365;
	}
	switch ((x->mm)-1){
		case 1:days_x+=31; break;
		case 2:if (x->yyyy%4==0) days_x+=60;
		else days_x+=59; break;
		case 3:if (x->yyyy%4==0) days_x+=91;
		else days_x+=90; break;
		case 4:if (x->yyyy%4==0) days_x+=121;
		else days_x+=120; break;
		case 5:if (x->yyyy%4==0) days_x+=152;
		else days_x+=151; break;
		case 6:if (x->yyyy%4==0) days_x+=182;
		else days_x+=181; break;
		case 7:if (x->yyyy%4==0) days_x+=213;
		else days_x+=212; break;
		case 8:if (x->yyyy%4==0) days_x+=244;
		else days_x+=243; break;
		case 9:if (x->yyyy%4==0) days_x+=274;
		else days_x+=273; break;
		case 10:if (x->yyyy%4==0) days_x+=305;
		else days_x+=304; break;
		case 11:if (x->yyyy%4==0) days_x+=335;
		else days_x+=334; break;
	}
	switch ((y->mm)-1){
		case 1:days_y+=31; break;
		case 2:if (y->yyyy%4==0) days_y+=60;
		else days_y+=59; break;
		case 3:if (y->yyyy%4==0) days_y+=91;
		else days_y+=90; break;
		case 4:if (y->yyyy%4==0) days_y+=121;
		else days_y+=120; break;
		case 5:if (y->yyyy%4==0) days_y+=152;
		else days_y+=151; break;
		case 6:if (y->yyyy%4==0) days_y+=182;
		else days_y+=181; break;
		case 7:if (y->yyyy%4==0) days_y+=213;
		else days_y+=212; break;
		case 8:if (y->yyyy%4==0) days_y+=244;
		else days_y+=243; break;
		case 9:if (y->yyyy%4==0) days_y+=274;
		else days_y+=273; break;
		case 10:if (y->yyyy%4==0) days_y+=305;
		else days_y+=304; break;
		case 11:if (y->yyyy%4==0) days_y+=335;
		else days_y+=334; break;
	}
	days_x+=x->dd; days_y+=y->dd;
	days=days_x-days_y;
	if (days<0) days=days*-1;
	printf("Days = %d\n",days);}
int main(){
	struct Date *x,*y;
	x=(struct Date *)malloc(sizeof(struct Date));
	y=(struct Date *)malloc(sizeof(struct Date));
	ReadDate(x,y);
	printf("\nX = ");
	PrintDate(x);
	printf("Y = "); 
	PrintDate(y);
	FindDays(x,y);
	return 0;
}