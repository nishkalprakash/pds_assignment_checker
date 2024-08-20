//Program to check the validity of the given date if it is valid or not
// Code creator : Aditya Chakraborty
// Roll No : 24NA10010
#include <stdio.h>
int main () {
	int x,y,z;
	printf ("Enter your date in the form of DD/MM/YYYY \n");
	scanf ("%d%d%d",&x,&y,&z);
	if (y==1){                   //this if is for the different months
		if (x>=1 && x<=31){               //the inner if is for the days for which the month is valid
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==2){
		if (x>=1 && x<=28){
			printf (" Valid date ");
			} else if (z%100==0 && z%400==0 && x>=1 && x<=29){   // this line is for the leap year correction
			printf (" Valid date");
			}else if ( z%100!=0 && z%4==0 && x>=1 && x<=29){
			printf ("Valid date");
			} else {
			printf ("Invalid date");
			}
	}else if (y==3){
		if (x>=1 && x<=31){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==4){
		if (x>=1 && x<=30){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==5){
		if (x>=1 && x<=31){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==6){
		if (x>=1 && x<=30){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==7){
		if (x>=1 && x<=31){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==8){
		if (x>=1 && x<=31){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==9){
		if (x>=1 && x<=30){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==10){
		if (x>=1 && x<=31){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==11){
		if (x>=1 && x<=30){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else if (y==12){
		if (x>=1 && x<=31){
			printf (" Valid date ");
			} else {
			printf (" Invalid date");
			}
	}else{
		printf ("Invalid date");
	}
	return 0;
}																																																																													
