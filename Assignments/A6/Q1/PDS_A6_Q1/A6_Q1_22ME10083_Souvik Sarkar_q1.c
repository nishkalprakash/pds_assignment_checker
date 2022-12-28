/* NAME SOUVIK SARKAR
	ROLL NO. 22ME10083
	ASSGNMENT 1
	*/

//Proramme to calculate the value of the given term upto a positive integer
#include<stdio.h>
// creating function
int print_term(int k)
{
	int t;
	// base cases
	if(k==0)
	    return 0;
	else if(k==1)
			return 1;
		else if(k==2)
				return 2;
			 else
				// general function		
				
				return 3*print_term(k-1)*print_term(k-2)-2*print_term(k-2)*print_term(k-3)+1;
				
}
int main()
{
	// Varriables initialization
	int k,i;
	//Taking inputs
	printf("Enter any number:\n");
	scanf("%d",&k);
	//logic
	if(k<0){
		printf("Invalid input");
	}	

	for(i=0;i<k;i++)
	{
		//result
		printf("%d ,",print_term(i));
		
	}
	return 0;

}