#include<stdio.h>

int main(){
	char c1,c2; //Two variables to store any character
	scanf("%c %c",&c1,&c2); //Read any Two character
	printf("%c %c",c1,c2); //Print the characters
	
	// for case-1 when two characters are typed without space the output is two character printed with space in between
	// i.e. if ab is inputted the output is a' 'b
	//
	// for case-2
	// if characters are inputted with space in between i.e q' 'w then output is also two spaced characters i.e. q' 'w
	//
	// for case-3
	// if input is like ' *' then output will be ' ' * (i.e. two spaces and then a * will be printed on screen)
	//
	// for case-4
	// if a three digit number is typed i.e. 123 then only first two digits will be taken and input and returned as output with a space btw (i.e. output will be 1' '2)
	
	return 0;
}
