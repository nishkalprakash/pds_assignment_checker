/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.:22ME10083
*	Assignment: 8
*	Topic:2D array & Strings
*	Question no.:4
*	Programme to check all the pallindromic word in a i/p word
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void palindrome(char c[], int p){
	int i,j;
	for(i=p-1;i>=0;i--){
		for(j=0;j<p;j++){
			if(c[i]!=c[j]){
				printf("%d",p);
				exit(1);
			}
		}
	}
		printf("palindromic sub word is %s",c);

			
}
void main(){
	//Varriable initialization
	char c[100];
	//input 
	printf("Enter the word\n");
	scanf("%s",c);
	palindrome(c,strlen(c));

}
