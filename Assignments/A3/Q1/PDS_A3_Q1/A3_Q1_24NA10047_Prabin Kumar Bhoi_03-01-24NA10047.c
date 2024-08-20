#include<stdio.h>
int main() {
	int DD,MM,YYYY;
	
	printf("Enter the date:");
	scanf("%d%d%d",&DD,&MM,&YYYY);
	
	printf("%d%d%d",DD,MM,YYYY);
	
	if ((MM==2) && (YYYY % 400 == 0) && (DD<=29)) {
		printf("Valid date");
	}
	else if ((MM==1,3,5,7,8,10,12) && (DD<=31)) {
		printf("Valid date");
	}
	else if ((MM==4,6,9,11) && (DD<=31)) {
		printf("Valid data");
	}
	else {
		printf("Invallid data");
	}	


	return 0;
	}
