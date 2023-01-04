/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 7
Question No. : 3
Description : Anagram or not Anagram
*/

#include<stdio.h>
#include<string.h>

int main(){
	int n;
	int count=0;
//	printf("Enter the number of letters in the word : ");
//	scanf("%d",&n);
	char word1[100],word2[100];						//Declaring of the arrays
	scanf("%s",&word1);						//Reading the first string
	scanf("%s",&word2);						//Reading the second string
	n=strlen(word1);	
for(int i=0;i<n;i++){						//Initialising a loop for word1
		for(int j=0;j<n;j++){					//Initialising a nested loop for word2
			if(word1[i]==word2[j])				//Conditional statement
				count++;
		}
	}
	if(count==n)
		printf("Anagram ");
	else printf("Not Anagram ");					//Printing the result

return 0;
}
