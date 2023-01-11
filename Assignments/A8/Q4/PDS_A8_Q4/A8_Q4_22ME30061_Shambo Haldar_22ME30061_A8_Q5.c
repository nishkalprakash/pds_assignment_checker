/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 8
Description : Program to print the number of times a string appears in another string 
*/

#include<stdio.h>

int main()
{
	int i,j = 0,k,len1,len2,count;
	char check;

	printf("Enter the length of two strings: ");
	scanf("%d %d",&len1,&len2);

	char S1[len1];
	char S2[len2];

	printf("S1: ");
	scanf("%s",S1);

	printf("S2: ");
	scanf("%s",S2);

	for(i = 0;i < len2;i++){
		check = 't';
		for(k = 0;k < len1;k++){
			//for(k = 0;k < len1;k++){
			//printf("%c,%c,",S1[j+k],S2[i+k]);
			if(S1[j + k] != S2[i + k])
				check = 'f';
		}
		if(check == 't')
			count++;
	}
	printf("%d\n",count);

	return 0;
}
