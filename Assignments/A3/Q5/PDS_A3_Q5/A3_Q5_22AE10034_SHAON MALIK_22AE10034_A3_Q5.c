/* 
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :3
 Description :Program to print day of a date 
 */
#include <stdio.h>
int main()
{
 int dd,mm,totaldays;
 printf("Enter day and month");
 scanf("%d %d",&dd,&mm);

 if(dd<1||dd>31 || mm<1 || mm>12)
 printf("invalid date");
 else
     { 
        totaldays=dd;//days in current month
        
        //to calculate days in previous months
 	if(mm>1)
		 totaldays+=31;//Jan
 	 if(mm>2)
 		totaldays+=28;//Feb
	  if(mm>3)
 		totaldays+=31;//Mar
 	 if(mm>4)
 		totaldays+=30;//Apr
	  if(mm>5)
		 totaldays+=31;//May
 	 if(mm>6)
		 totaldays+=30;//Jun
 	 if(mm>7)
 		totaldays+=31;//Jul
	 if(mm>8)
		 totaldays+=31;//Aug
	 if(mm>9)
 		totaldays+=30;//Sep
	 if(mm>10)
		 totaldays+=31;//Oct
	 if(mm>11)
		 totaldays+=30;//Nov
	

        int rem=totaldays%7;//extra days than number of weeks from 1 jan
        
        switch(rem)
        {
		case 1:printf("Saturday");
                       break;
 		case 2:printf("Sunday");
                       break;
		case 3:printf("Monday");
                       break;		
		case 4:printf("Tuesday");
                       break;
		case 5:printf("Wednesday");
                       break;
		case 6:printf("Thursday");
                       break;
		case 7:printf("Friday");
                       break;
    }
  }

return 0;
}//end of program 

        
