#include<stdio.h>
#include<stdlib.h>
	int print_term(int n)
	{
	int answer;
	if(n==0)
	{return 0;} //  baseline condition that is given
	if(n==1)
	{return 1;} // baseline condition that is given 
	if(n==2)
	{return 2;} // baseline condition that is given
	answer=3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;
	// The above line is the recursive function that calls the function multiple times
	return answer;
}
	int main()
{
	int num_1;
	printf("Enter the number");
	scanf("%d",&num_1);
	// The integer is declared to use the for loop that will print the values
	int i;
	if(num_1>=0){
	for(i=0;i<num_1;i++)
	{
	printf("%d ",print_term(i)); // This printf command will print the value for every iteration
	}
}
	if(num_1<0)
	{printf("Invalid input");} // In a general mathematical sense, terms can't be negative.
	return 0;
}

	

