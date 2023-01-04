/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 7
Description: Check for anagrams in 2 strings
*/

#include <stdio.h>
int main(){
	int n;
	printf("Enter number of characters in word");
	scanf("%d", &n);
	char a1[n+1];
	char a2[n+1];
	a1[n]='\0'; a2[n]='\0';
	printf("Enter the words\n");
	scanf("%s", a1);
	scanf("%s", a2);
	
	int count=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if( a1[i]==a2[j] ){
				count++;
			}
		}
	}
	if(count==n)
		printf("Anagram\n");
	return(0);
}
