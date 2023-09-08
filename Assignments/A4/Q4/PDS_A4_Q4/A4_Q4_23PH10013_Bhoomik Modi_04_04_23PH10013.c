// Name : Bhoomik Modi
// Roll number: 23PH10013.c
#include <stdio.h>
int main(){// Begining of function
	int num,current=0,prev=0,t=0,b=0;//T is used in if a particular condition is satisfied condition
	for(int i=0;i>=0;++i){// Beginning of loop
	prev=current;
	printf("Enter a single digit number : ");
	scanf("%d",&num);
	current=num;
	if (current==1 && prev==5){
		t=1;
		b=0;}
	if(t&&b==2){// to check if the condition sare satisfied
		if (current==7){
			printf("pattern found\n");
			break;
		}
		}
	if(current<0){ // To exit if the num is negative
		printf("Negative digit was entered\n");
		break;
	
	}
	if(b==2){ // To check that 7 is enterd one digit after the sequence
		b=0;
	}
	++b;
      }//Ending of loop
return 0;
}// end of function
 
		
