/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 5
* Description :to check if given string is anagram or not
*/

#include<stdio.h>
#include<string.h>
int main(){
	char s1[200];	//declaration of first character array
	char s2[200];	//declaration of 2nd char array
	printf("input first string :");
	fgets(s1,200,stdin);	//fgets method to get string as input
	int size1=strlen(s1);
	printf("input 2nd string :");
	fgets(s2,200,stdin);
	int size2=strlen(s2); //strlen function from string.h library
	
	int c=0; //counter variable to check for common elements
	for(int i=0;i<size1;i++){
		for(int j=0;j<size2;j++){
			if(s1[i]==s2[j]) c++;
		}
	}	
	
	if(c==size1 || c==size2){	//if condition checks if no of common elements = size1 or size2 then it works
		printf("Anagram\n");
	}
	else{
		printf("NOT Anagram\n");	
	}
	return 0;
}

