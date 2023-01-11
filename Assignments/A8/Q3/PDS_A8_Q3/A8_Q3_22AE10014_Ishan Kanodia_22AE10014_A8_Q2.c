/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 8
Question No. : 2
Description : Reading a text message from the keyboard
*/

#include<stdio.h>
#include<string.h>

int main(){

	char text[100];
	int arr[26];
	for(int i=0;i<26;i++)arr[i]=0;
	int len=0;
	char ch,cc='a';
	int words=0,sentences=0,vowels=0;
	do {
		ch=getchar();
		text[len]=ch;
		len++;
		if(ch==' ')words++;
		if(ch=='.')sentences++;
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')vowels++;
		for(int j=0;j<26;j++,cc++)
			if(cc==ch||cc==ch+32)arr[j]++;
	}
	while(ch!='\n');
	text[len+1]='\0';
	
	printf("Length counted without using library: %d\n",len-1);

	printf("Length counted by strlen(): %d\n",strlen(text)-2);
	
	printf("Number of words: %d\n",words+1);

	printf("Number of sentences: %d\n",sentences);

	printf("Number of vowels: %d\n",vowels);

	printf("Frequency count of each alphabet: \n");

	cc='a';
	for(int j=0;j<26;j++,cc++){
			printf("'%c' = %d\n",cc,arr[j]);
			
	}		

return 0;
}
