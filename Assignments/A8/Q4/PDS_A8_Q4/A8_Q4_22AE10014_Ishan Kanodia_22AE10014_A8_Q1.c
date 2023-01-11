/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 8
Question No. : 1
Description : Taking input of two strings from the user and checking the number of substrings
*/

#include<stdio.h>

int main(){
	char S1[50];			//Defining arrays for strings
	char S2[50];
	int len1=0,len2=0;
	printf("S1 : ");
	scanf("%s",S1);			//Taking input of S1
	printf("S2 : ");
	scanf("%s",S2);			//Taking input of S2
	int i=0;
	while(S1[i]!='\0'){		//Finding length of S1
		len1++;
		i++;
	}
	int j=0;
	while(S2[j]!='\0'){		//Finding length of S2
		len2++;
		j++;
	}
	int count=0;
	for(int i=0;i<len2-2;i++){
		if(S1[0]==S2[i]&&S1[1]==S2[i+1]&&S1[2]==S2[i+2])
			count++;	//Computing the final count
	}
printf("Output = %d\n",count);		//Printing the final result
return 0;
}
