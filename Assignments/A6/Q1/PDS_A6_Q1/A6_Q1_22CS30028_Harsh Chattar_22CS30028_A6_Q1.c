/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 6
Description : using function recursion to print k terms of t(n) = 3*t(n-1)*t(n-2) - 2*t(n-2)*t(n-3) +1
*/

#include <stdio.h>


int print_term(int n) //function to print nth term of the series
{
	if(n == 0) return 0; //returning already defined values
	if(n == 1) return 1;
	if(n == 2) return 2;

	int ans = 3*print_term(n-1)*print_term(n-2) - 2*print_term(n-2)*print_term(n-3) + 1; //calculating nth term using the formula given
	return ans; //returning the nth term
}


int main()
{
int k;
printf("Enter no. of terms : "); //taking no. of terms as input
scanf("%d",&k); 

if(k<0) printf("INVALID INPUT"); //checking for negative inputs. (invalid inputs)
else {
	for(int i = 0;i<k;i++)
	{
		printf("%d, ",print_term(i)); //passing i into print_term function to print i'th term of the series
	}

}




return 0;
}
