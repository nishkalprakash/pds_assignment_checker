/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 8
Description: Print all palindrome substrings
*/

#include <stdio.h>
int main(){
	char c[100];
	scanf("%s", c);
	int count, length, flag=0; 

	for(int i=0; c[i]!='\0'; i++){
		for(int j=i+1; c[j]!='\0'; j++){
			count=0; length=j-i+1;
			//to check for a palindrome substring
			for(int k=0; k<length; k++){
				if(c[i+k]==c[j-k]) //comparing letters one by one from ends
					count++;
			}
			//to print the palindrome substring
			if(count==length){
				flag++;
				for(int m=i; m<=j; m++)
					printf("%c", c[m]);
				printf(" ");
			}
		}
	}
	if(flag==0)
		printf("No palindrome substrings present");

	return 0;
}