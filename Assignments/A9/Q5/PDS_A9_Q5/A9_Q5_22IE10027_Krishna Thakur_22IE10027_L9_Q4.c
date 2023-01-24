#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
};
struct date ReadDate(){
	struct date a; 
	scanf("%d", &a.day);
	scanf("%d", &a.month);
	scanf("%d", &a.year);
	return a;

}
void printdate(struct date a){
	printf("%d/%d/%d\n", a.day, a.month, a.year);

}
void finddays(struct date x, struct date y){
	int d;
	int a,b;
	if (x.year>y.year){
		b=x.year;
		a=y.year;
	}
	else{
		b=y.year;
		a=x.year;
	}
	int sd;
	while(b>a){
		if (a%4==0){
			sd=sd+366;
		}
		else{
			sd=sd+365;
		}
		a++;
	}
	int p=0;
	int q=0;
	if (x.year%4!=0){
	if (x.month==1)
		p=0;
	else if (x.month==2)
		p=p+31;
	else if (x.month==3)
		p=p+59;
	else if (x.month==4)
		p=p+90;
	else if (x.month==5)
		p=p+120;
	else if (x.month==6)
		p=p+151;
	else if (x.month==7)
		p=p+181;
	else if (x.month==8)
		p=p+212;
	else if (x.month==9)
		p=p+243;
	else if (x.month==10)
		p=p+273;
	else if (x.month==11)
		p=p+303;
	else if (x.month==12)
		p=p+334;
		}
	else if(x.year%4==0){
		if (x.month==1)
		p=0;
	else if (x.month==2)
		p=p+31;
	else if (x.month==3)
		p=p+60;
	else if (x.month==4)
		p=p+91;
	else if (x.month==5)
		p=p+121;
	else if (x.month==6)
		p=p+152;
	else if (x.month==7)
		p=p+182;
	else if (x.month==8)
		p=p+213;
	else if (x.month==9)
		p=p+244;
	else if (x.month==10)
		p=p+274;
	else if (x.month==11)
		p=p+304;
	else if (x.month==12)
		p=p+335;
    }
	p=p+x.day;

	if (y.year%4!=0){
	if (y.month==1)
		q=0;
	else if (y.month==2)
		q=q+31;
	else if (y.month==3)
		q=q+59;
	else if (y.month==4)
		q=q+90;
	else if (y.month==5)
		q=q+120;
	else if (y.month==6)
		q=q+151;
	else if (y.month==7)
		q=q+181;
	else if (y.month==8)
		q=q+212;
	else if (y.month==9)
		q=q+243;
	else if (y.month==10)
		q=q+273;
	else if (y.month==11)
		q=q+303;
	else if (y.month==12)
		q=q+334;
		}
	else if(y.year%4==0){
		if (y.month==1)
		q=0;
	else if (y.month==2)
		q=q+31;
	else if (y.month==3)
		q=q+60;
	else if (y.month==4)
		q=q+91;
	else if (y.month==5)
		q=q+121;
	else if (y.month==6)
		q=q+152;
	else if (y.month==7)
		q=q+182;
	else if (y.month==8)
		q=q+213;
	else if (y.month==9)
		q=q+244;
	else if (y.month==10)
		q=q+274;
	else if (y.month==11)
		q=q+304;
	else if (y.month==12)
		q=q+335;
    }
    q=q+y.day;
    int rs;
    rs=p-q;
    if(y.year>x.year){
    	rs=rs*-1;
    }
    else if(y.year=x.year){
    	if(rs<0){
    		rs=rs*-1;
    	}
    }
    rs=rs-1;
    sd=sd+rs;
    printf("Days are approximately equal to=%d", sd);


}

int main(){
	struct date A1=ReadDate();
	struct date A2=ReadDate();
	printdate(A1);
	printdate(A2);
	finddays(A1, A2);
	return 0;
}
