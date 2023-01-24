/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 9
QUESTION NO. : 1
DESCRIPTION: does operations on 2 dates
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int m;
	int d;
	int y;
} Date;
Date ReadDate(){
	Date a;
	scanf("%d %d %d",&a.d,&a.m,&a.y);
	return a;
}
void PrintDate(Date x){
	printf("%d/%d/%d\n",x.d,x.m,x.y);
}
int total_days(Date x){
	int f,totxd;
	if(x.y%4==0 && (x.y%400!=0|| x.y%1000==0))
		f=29;
	else
		f=28;
	switch(x.m)
    {
    case 1:
            totxd=x.d;
        break;
    case 2:
            totxd=x.d+31;
        break;     
    case 3:
            totxd=x.d+31+f;
        break;     
    case 4:
            totxd=x.d+31+f+31;
        break;     
    case 5:
            totxd=x.d+31+f+31+30;        
        break;     
    case 6:
            totxd=x.d+31+f+31+30+31;
        break;     
    case 7:
            totxd=x.d+31+f+31+30+31+30;
        break;     
    case 8:
            totxd=x.d+31+f+31+30+31+30+31;
        break;     
    case 9:
            totxd=x.d+31+f+31+30+31+30+31+31;
        break;     
    case 10:
            totxd=x.d+31+f+31+30+31+30+31+31+30;
        break;     
    case 11:
            totxd=x.d+31+f+31+30+31+30+31+31+30+31;
        break;     
    case 12:
            totxd=x.d+31+f+31+30+31+30+31+31+30+31+30;
        break;
    }
    return totxd;
}
void FindDays(Date x, Date y){
	int totxd,totyd;
	totxd=total_days(x);
	totyd=total_days(y);
	int max=x.y>y.y?x.y:y.y;
	int min=x.y<y.y?x.y:y.y;
    for(int t=min;t<max;t++){
    	if(t%4==0 && (t%400!=0 || t%1000==0)){
    		if(x.y>y.y)
    			totxd+=366;
    		else if(y.y>x.y)
    			totyd+=366;
    	}else{
    		if(x.y>y.y)
    			totxd+=365;
    		else if(y.y>x.y)
    			totyd+=365;
    	}
    }
    int diff=totxd>totyd?totxd-totyd:totyd-totxd;
    printf("Days= %d",diff);
}
int main(){
	Date x,y;
	printf("X= ");
	x=ReadDate();
	printf("Y= ");
	y=ReadDate();
	printf("X= ");
	PrintDate(x);
	printf("Y= ");
	PrintDate(y);
	FindDays(x,y);
}