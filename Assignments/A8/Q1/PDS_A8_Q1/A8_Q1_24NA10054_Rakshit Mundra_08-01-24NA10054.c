#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int digits(int n);
int IsPalindrome(int n);


char* i_to_str(int n, int dgts){
	char *str= (char*)malloc(dgts+1);
	str[dgts+1]='\0';
	for (int i =dgts; i>0; i--){
		str[i]= n%10;
		n/=10;
	}
	return str;

}


int main()
{
	printf("\n %d \n", IsPalindrome(52125));
	return 0;
}


int digits(int n)
{	
	//base case
	if (n/10==0) return 1;
	
	//recursive call
	else {n/=10; return digits(n)+1;}

}

int IsPalindrome(int n)
{	
	int dgt=digits(n);
	char* n_str= i_to_str(n,digits(n));
		
		//base case
		if (dgt==2){
			if (n/10==n%10) return 1;	
		}
		else if (dgt == 1){
			printf("Here\n");
			return 1;
					}
		
		
		//recirsive call
		if (dgt>2){
			if (n_str[dgt-1]==n_str[0] && IsPalindrome((n%(int)pow(10, digits(n)-1))/10))
				return 1;
			else return 0;
		}

}
