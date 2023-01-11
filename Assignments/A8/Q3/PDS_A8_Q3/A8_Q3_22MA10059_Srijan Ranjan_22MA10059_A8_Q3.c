/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:8
Description: This program takes a string and performs different functions with it.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%[^\n]",str);																	//Input of the string.
	int i=0;
	while(str[i]!='\0'){                                                                    //Counting number of characters
		i++;
	}
	printf("Length counted without using library: %d\n",i);
	printf("Length counted by strlen(): %ld\n",strlen(str));									//Counting number of characters using function.
	int words=1;
	int j=0;
	while(str[j]!='\0'){																	//Counting number of words.
		if(str[j]==' ') words++;
		j++;
	}
	printf("No of words = %d\n", words);
	int k=0;
	int sentance=0;																			//Counting number of sentances.
	while(str[k]!='\0'){
		if(str[k]=='.') sentance++;
		k++;
	}
	printf("No of sentance = %d\n", sentance);
	int l=0;																				//Counting number of vowels.
	int vowels=0;
	while(str[l]!='\0'){
		if(str[l]=='a'||str[l]=='e'||str[l]=='i'||str[l]=='o'||str[l]=='u'||str[l]=='A'||str[l]=='E'||str[l]=='I'||str[l]=='O'||str[l]=='U'){
			vowels++;
		}
		l++;
	}
	printf("No of vowels = %d\n", vowels);
	return 0;
}
