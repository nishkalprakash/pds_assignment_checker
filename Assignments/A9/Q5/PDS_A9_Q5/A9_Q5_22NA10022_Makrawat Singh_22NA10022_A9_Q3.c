/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 9
 Description :write a program to store and print two dates and print the number of days between them
 */

#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

struct date
{
	int dd;
	int mm;
	int yyyy;
};

void PrintDate(struct date x){
	printf("%d/%d/%d",x.dd,x.mm,x.yyyy);

}
int days(struct date a){
	int date=0;
	int arr[12]={31,59,90,120,151,181,212,243,273,304,334,365};
	if(a.mm>1){
		if(a.yyyy%4==0&&a.mm>2){
			date=date+arr[a.mm-2];
		}
		else if(a.yyyy%4==0&&a.mm<=2){
			date=date+arr[a.mm-2];
		}
		else if(a.yyyy%4!=0&&a.mm<=2){
			date=date+arr[a.mm-2];
		}
		else{
			date=date+arr[a.mm-2]-1;
		}
	}
	
	date=date+a.dd;
	return date;
}
void FindDays(struct date x,struct date y){
	int t=0;int diff=0;int p=0;

	if(x.yyyy!=y.yyyy){
		if(x.yyyy-y.yyyy>0){
			for(int i=y.yyyy;i=x.yyyy;i++){
				if(i%4==0){
					p++;
				}
			}
			t=x.yyyy-y.yyyy;
			diff=diff+t*365+p;
			diff=diff+days(x)-days(y);
		}
		else{
			for(int i=x.yyyy;i=y.yyyy;i++){
				if(i%4==0){
					p++;
				}
			}
			t=y.yyyy-x.yyyy;
			diff=diff+t*365+p;
			diff=diff+days(y)-days(x);
		}
		printf("Days= %d",diff);
	}	
	else{
		if(days(x)>=days(y)){
			diff=(days(x)-days(y));
		}
		else{
			diff=(days(y)-days(x));
		}
		printf("Days= %d",diff);
	}
}

int main(){
	struct date x,y;
	printf("X = ");

	scanf("%d %d %d",&x.dd,&x.mm,&x.yyyy);
	printf("Y = ");

	scanf("%d %d %d",&y.dd,&y.mm,&y.yyyy);
	PrintDate(x);
	printf("\n");
	PrintDate(y);
	printf("\n");
	
	printf("\n");
	FindDays(x,y);
	printf("\n");
	

}