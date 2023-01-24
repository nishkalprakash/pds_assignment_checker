/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 9
description: to find no of days between two dates 
*/ 




# include <stdio.h>
# include <stdlib.h>

typedef struct Date{
	int DD ;
	int MM ;
	int YYYY ;
} Date ;


//to read a date from keyboard
Date ReadDate(Date A){
	scanf("%d %d %d" , &A.DD ,&A.MM , &A.YYYY );
	return A ;
}


 // to print a date 
void print_date(Date A){
	printf("%d/%d/%d\n",A.DD ,A.MM , A.YYYY );
}

// to count no of days from 1st Jan 2000 to the input date 
int countfrom2000(Date A){
	int count = 0 ;

	// counting no days in each year 
	for(int i = 2000 ; i<A.YYYY ;i++){
		if (i%4 == 0) count+=366 ;
		else count+=365;
	}

	int feb;
	if (A.YYYY%4 == 0) feb = 29 ;
	else feb = 28;

	// counting no days in each month 
	switch(A.MM-1){
		case 11 : count+=30;
		case 10 : count+=31;
		case 9 : count+=30;
		case 8 : count+=31;
		case 7 : count+=31;
		case 6 : count+=30;
		case 5 : count+=31;
		case 4 : count+=30;
		case 3 : count+=31;
		case 2 : count+=feb;  
		case 1 : count+=31;
		case 0 : count+=0;
				
	}
	//adding no of days of the month 
	count+=A.DD ;
	


return count ;
}


// a function to print number of days between two given dates 
void find_days(Date X ,Date Y){
	int Days = countfrom2000(X) - countfrom2000(Y)    ;
	if(Days<0) Days*=-1;
	printf("\n Days = %d\n", Days); 

}


int main()
{


	Date X ,Y;
	X=ReadDate(X);
	Y=ReadDate(Y);

	printf("\n X = ");  print_date(X);
	printf("\n Y = ");	print_date(Y);

	//printf("no of daye till X = %d\n",countfrom2000(X));
	//printf("no of daye till X = %d\n",countfrom2000(Y));

	
	find_days(X ,Y);
	return 0;
}
