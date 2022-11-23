/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 3 
Description - 
*/


#include <stdio.h>
 
int main() {
	int d,m,s;
	printf("Enter day and month: ");
	scanf("%d%d",&d,&m);

	if (m>0 &&m<=12){
		switch(m){
		case 1 :
			if (d>0 &&d<32){
				s=d-(d/7)*7;
				switch(s){
				case 1 : {printf("Saturday"); break;}
				case 2 : {printf("Sunday"); break;}
				case 3 : {printf("Monday"); break;}
				case 4 : {printf("Tuesday"); break;}
				case 5 : {printf("Wednesday"); break;}
				case 6 : {printf("thursday"); break;}
				case 0 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		case 2 :
			if (d>0 &&d<29){
				s=d-(d/7)*7;
				switch(s){
				case 5 : {printf("Saturday"); break;}
				case 6 : {printf("Sunday"); break;}
				case 0 : {printf("Monday"); break;}
				case 1 : {printf("Tuesday"); break;}
				case 2 : {printf("Wednesday"); break;}
				case 3 : {printf("thursday"); break;}
				case 4 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
			    	break;
		case 3 :
			if (d>0 &&d<32){
				s=d-(d/7)*7;
				switch(s){
				case 5 : {printf("Saturday"); break;}
				case 6 : {printf("Sunday"); break;}
				case 0 : {printf("Monday"); break;}
				case 1 : {printf("Tuesday"); break;}
				case 2 : {printf("Wednesday"); break;}
				case 3 : {printf("thursday"); break;}
				case 4 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;	
		case 4 :
			if (d>0 &&d<31){
				s=d-(d/7)*7;
				switch(s){
				case 2 : {printf("Saturday"); break;}
				case 3 : {printf("Sunday"); break;}
				case 4 : {printf("Monday"); break;}
				case 5 : {printf("Tuesday"); break;}
				case 6 : {printf("Wednesday"); break;}
				case 0 : {printf("thursday"); break;}
				case 1 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		case 5 :
			if (d>0 &&d<32){
				s=d-(d/7)*7;
				switch(s){
				case 0 : {printf("Saturday"); break;}
				case 1 : {printf("Sunday"); break;}
				case 2 : {printf("Monday"); break;}
				case 3 : {printf("Tuesday"); break;}
				case 4 : {printf("Wednesday"); break;}
				case 5 : {printf("thursday"); break;}
				case 6 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		case 6 :
			if (d>0 &&d<31){
				s=d-(d/7)*7;
				switch(s){
				case 4 : {printf("Saturday"); break;}
				case 5 : {printf("Sunday"); break;}
				case 6 : {printf("Monday"); break;}
				case 0 : {printf("Tuesday"); break;}
				case 1 : {printf("Wednesday"); break;}
				case 2 : {printf("thursday"); break;}
				case 3 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		case 7 :
			if (d>0 &&d<32){
				s=d-(d/7)*7;
				switch(s){
				case 2 : {printf("Saturday"); break;}
				case 3 : {printf("Sunday"); break;}
				case 4 : {printf("Monday"); break;}
				case 5 : {printf("Tuesday"); break;}
				case 6 : {printf("Wednesday"); break;}
				case 0 : {printf("thursday"); break;}
				case 1 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		case 8 :
			if (d>0 &&d<32){
				s=d-(d/7)*7;
				switch(s){
				case 6 : {printf("Saturday"); break;}
				case 0 : {printf("Sunday"); break;}
				case 1 : {printf("Monday"); break;}
				case 2 : {printf("Tuesday"); break;}
				case 3 : {printf("Wednesday"); break;}
				case 4 : {printf("thursday"); break;}
				case 5 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		case 9 :
			if (d>0 &&d<31){
				s=d-(d/7)*7;
				switch(s){
				case 3 : {printf("Saturday"); break;}
				case 4 : {printf("Sunday"); break;}
				case 5 : {printf("Monday"); break;}
				case 6 : {printf("Tuesday"); break;}
				case 0 : {printf("Wednesday"); break;}
				case 1 : {printf("thursday"); break;}
				case 2 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		case 10 :
			if (d>0 &&d<32){
				s=d-(d/7)*7;
				switch(s){
				case 1 : {printf("Saturday"); break;}
				case 2 : {printf("Sunday"); break;}
				case 3 : {printf("Monday"); break;}
				case 4 : {printf("Tuesday"); break;}
				case 5 : {printf("Wednesday"); break;}
				case 6 : {printf("thursday"); break;}
				case 0 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		case 11 :
			if (d>0 &&d<32){
				s=d-(d/7)*7;
				switch(s){
				case 5 : {printf("Saturday"); break;}
				case 6 : {printf("Sunday"); break;}
				case 0 : {printf("Monday"); break;}
				case 1 : {printf("Tuesday"); break;}
				case 2 : {printf("Wednesday"); break;}
				case 3 : {printf("thursday"); break;}
				case 4 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		case 12 :
			if (d>0 &&d<32){
				s=d-(d/7)*7;
				switch(s){
				case 3 : {printf("Saturday"); break;}
				case 4 : {printf("Sunday"); break;}
				case 5 : {printf("Monday"); break;}
				case 6 : {printf("Tuesday"); break;}
				case 0 : {printf("Wednesday"); break;}
				case 1 : {printf("thursday"); break;}
				case 2 : {printf("Friday"); break;}
				}
					
			}else printf("Invalid Date");
				break;
		}
	}  else printf("Invalid Date"); 	

    return 0;
    
    
}

