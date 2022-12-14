/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Question 1
a program to take a numbers and gives the user max and second max of the numbers 
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{
	int max=-1 , max_2=-2 ,n ;
	printf("enter numbers:\n");
	do{
	scanf("%d",&n);
	if(n>max_2){
		if(n>max){                                                   //setting values of max and max_2
			max_2 = max;
			max = n ;
			}
		else max_2 =n;
		}

	if(n<0) break;                                        // loop breaks in N<0                                                                                     

	if(max_2 == -1) printf("largest number = %d  \nSecond largest number : not entred yet \n \n",max);               
	else printf("\nlargest number = %d  \nSecond largest number =%d \n \n",max ,max_2 );


	} while(1);                                

	printf("<program termiates>\n\n");
	

	return 0;
}
