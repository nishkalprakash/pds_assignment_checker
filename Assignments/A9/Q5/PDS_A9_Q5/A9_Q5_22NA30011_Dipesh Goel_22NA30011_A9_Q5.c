#include<stdio.h>
#include<math.h>
/*
    PDS LAB ASSIGNMENT - 9
    DIPESH GOEL
    22NA30011
    PROBLEM - 5
*/

typedef struct {
    int DD;
    int MM;
    int YYYY;
} Date;

Date ReadDate(){
    // Reads a Date from the user
    Date temp;
    scanf("%2d %2d %4d", &temp.DD, &temp.MM, &temp.YYYY);
    return temp;
}

void PrintDate(Date x){
    // Prints a Date in dd/mm/yyyy format
    printf("%2d/%2d/%4d",x.DD, x.MM, x.YYYY);
}

int Check_Leap(int Y){
    if (Y%4==0) return 1;
        //if (Y%400==0) return 1;
    else return 0;
}

void FindDays(Date x, Date y){
    // Calculates number of days between the two given dates
    //printf("Inside FindDays Func\n");
    int s=0,days_till_year; 								// Sum of days till given month
	int f=0;								// Flag to check for invalid day (1 = Invalid)

	for (int i=x.YYYY;i<y.YYYY;i++){
        s+=365;
        if (Check_Leap(i)) f++;
        //printf("i= %d",i);printf("\n");
	}
	//printf("\n");printf("s= %d",s);printf("\n");
	//printf("f= %d",f);printf("\n");
    int no_of_leap_yrs= f;
    int total_days=s;
    f=0;
    s=0;
    int M=x.MM;
    int D=x.DD;
    //printf("M = %d",M);printf("\n");
    //printf("D= %d",D);printf("\n");
	switch(M-1)	{							// Adding up all the days till `M`
		case 11: if(!s) f=D>31; s+=30;		// Note: missing `break;`
		case 10: if(!s) f=D>30; s+=31;
		case 9:	 if(!s) f=D>31; s+=30;
		case 8:	 if(!s) f=D>30; s+=31;
		case 7:	 if(!s) f=D>31; s+=31;
		case 6:	 if(!s) f=D>31; s+=30;		// Note: flag is updated only once
		case 5:	 if(!s) f=D>30; s+=31;
		case 4:	 if(!s) f=D>31; s+=30;
		case 3:	 if(!s) f=D>30; s+=31;
		case 2:	 if(!s) f=D>31; s+=28;
		case 1:	 if(!s) f=D>28; s+=31;
		case 0:	 if(!s) f=D>31; break;		// If M is 1 (Jan), no day is added
		default: f=1;
	}
    int start_yr_days=s;
    f=0;
    s=0;
    M=y.MM;
    D=y.DD;
    //printf("M = %d",M);printf("\n");
    //printf("D = %d",D);printf("\n");
	switch(M-1)	{							// Adding up all the days till `M`
		case 11: if(!s) f=D>31; s+=30;		// Note: missing `break;`
		case 10: if(!s) f=D>30; s+=31;
		case 9:	 if(!s) f=D>31; s+=30;
		case 8:	 if(!s) f=D>30; s+=31;
		case 7:	 if(!s) f=D>31; s+=31;
		case 6:	 if(!s) f=D>31; s+=30;		// Note: flag is updated only once
		case 5:	 if(!s) f=D>30; s+=31;
		case 4:	 if(!s) f=D>31; s+=30;
		case 3:	 if(!s) f=D>30; s+=31;
		case 2:	 if(!s) f=D>31; s+=28;
		case 1:	 if(!s) f=D>28; s+=31;
		case 0:	 if(!s) f=D>31; break;		// If M is 1 (Jan), no day is added
		default: f=1;
	}
	int end_yr_days=s+D;

	//("total_days = %d",total_days);printf("\n");
	//printf("start_yr_days = %d",start_yr_days);printf("\n");
	//printf("end_yr_days = %d",end_yr_days);printf("\n");
	//printf("no_of_leap_yrs = %d",no_of_leap_yrs);printf("\n");
    int result = total_days-start_yr_days+end_yr_days+no_of_leap_yrs-1;
	printf("%d",result);
}




int main(){
    Date X,Y;
    printf("X = ");X= ReadDate();
    printf("Y = ");Y= ReadDate();
    printf("X = ");PrintDate(X);printf("\n");
    printf("Y = ");PrintDate(Y);printf("\n");
    printf("Days = ");FindDays(X,Y);

    return 1;

    }
