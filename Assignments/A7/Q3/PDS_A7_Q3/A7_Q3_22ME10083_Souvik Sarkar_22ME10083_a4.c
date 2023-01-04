/*SOUVIK SARKAR
ROLL NO> 22ME10083
LAbn NO> 7*/

//Programme to identify anagram or not
#include<stdio.h>
// header file for array
#include<string.h>
#include<stdlib.h>
void main(){
	//varriable initializaton
	int f=0,n,m;
	char a[100],b[100];
	// I/p of first array
	//printf()
	printf("Enter your word:\n");
	scanf("%s",a);
	printf("\n%s",a);
	//I/p of second array
	printf("\nEnter the word (may be in diiferent worder):\n");
	scanf("%s",b);
	printf("\n%s",b);
	// Logic
	if(strlen(a)!=strlen(b)){
		printf("NOT Anagram\n");
		exit(1);
	}
	//m=strlen(a);
	//printf("%d",m);
	for (int i=0;i<strlen(a);i++)
	{
		for(int j=0;j<strlen(a);j++){
			if(a[i]==b[j]);
				f++;
		}
	}
	// result
	if(f==strlen(a))
		printf("\nAnagram");
	else
		printf("\nNOT anagram");

}