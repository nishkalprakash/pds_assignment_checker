/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 8
Description: Checking number of appearances of one string in another string
*/

#include <stdio.h>
int main()
{
	char c1[200], c2[200];
	printf("S1: ");
	scanf("%s", c1);
	printf("S2: ");
	scanf("%s", c2);

	int countC1=0, countC2=0, counter, count=0;
	for(int i=0; c1[i]!='\0'; i++){
		countC1++;	//to find length of s1 string
	}
	for(int i=0; c2[i]!='\0'; i++){
		countC2++; //to find length of s2 string
	}

	//comparing element wise.
	for(int i=0; i<countC2-countC1; i++){
		counter=0;
		for(int j=i; j<i+countC1; j++){
			if(c2[j]==c1[j-i])
				counter++;
		}
		//number of times if1 is true should be same as length of s1, so if all s1 elements match, counter=countc1
		if(counter==countC1)
			count++;
	}

	printf("%d", count);

	return 0;
}