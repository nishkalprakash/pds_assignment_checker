// A3_Q5_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to check for valid date and return day of the week for 2022
#include <stdio.h>
int main()
{
	int D, M; 								// Day, Month (User Defined)
	int s=0; 								// Sum of days till given month 
	int f=0;								// Flag to check for invalid day (1 = Invalid) 
	
	printf("Enter DD MM : ");
	scanf("%d%d", &D, &M); 
	
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
	
	if(f) {
		printf("Invalid Date\n"); 
		return 0; 							// Program ends here
	}
	
	switch((s+D)%7){ 						// Day of the week id (0-6) (0 = Friday)
		case 0: printf("Fri");    break;
		case 1: printf("Satur");  break;
		case 2: printf("Sun"); 	  break;
		case 3: printf("Mon"); 	  break;
		case 4: printf("Tues");   break;
		case 5: printf("Wednes"); break;
		case 6: printf("Thurs");  break;
	}										
	printf("day");							// "day" is common, so printed later on 

	return 0;
}