/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:8*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char msg[100];
	int *alphabet;
	char alphabets[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	alphabet=(int *)calloc(26,sizeof(int));
	int words=0,sentences=0,vowels=0,count=0,test=1;
	int i=0;
	while(msg[i-1]!='\n'){
		scanf("%c",&msg[i]);
		i++;
	}
	msg[i-1]='\0';
	printf("Length counted without using library:%d\n",i-1);
	printf("Length counted by strlen():%ld\n",strlen(msg));
	for (int k=0;k<i-1;k++){
		if (msg[k]==' ') words++;
	}words++;
	printf("Number of words:%d\n",words);
	for (int k=0;k<i-1;k++){
		if (msg[k]=='.') sentences++;
	}
	printf("Number of sentences:%d\n",sentences);
	for (int k=0;k<i-1;k++){
		switch (msg[k]){
			case 'a':
			case 'A':vowels++; break;
			case 'e':
			case 'E':vowels++; break;
			case 'i':
			case 'I':vowels++; break;
			case 'o':
			case 'O':vowels++; break;
			case 'u':
			case 'U':vowels++; break;
		}
	}
	printf("Number of vowels:%d\n",vowels);
	printf("Frequency count of each alphabet:\n");
	for (int j=0;j<i-1;j++){
		switch (msg[j]){
			case 'a':
			case 'A':alphabet[0]++; break;
			case 'b':
			case 'B':alphabet[1]++; break;
			case 'c':
			case 'C':alphabet[2]++; break;
			case 'd':
			case 'D':alphabet[3]++; break;
			case 'e':
			case 'E':alphabet[4]++; break;
			case 'f':
			case 'F':alphabet[5]++; break;
			case 'g':
			case 'G':alphabet[6]++; break;
			case 'h':
			case 'H':alphabet[7]++; break;
			case 'i':
			case 'I':alphabet[8]++; break;
			case 'j':
			case 'J':alphabet[9]++; break;
			case 'k':
			case 'K':alphabet[10]++; break;
			case 'l':
			case 'L':alphabet[11]++; break;
			case 'm':
			case 'M':alphabet[12]++; break;
			case 'n':
			case 'N':alphabet[13]++; break;
			case 'o':
			case 'O':alphabet[14]++; break;
			case 'p':
			case 'P':alphabet[15]++; break;
			case 'q':
			case 'Q':alphabet[16]++; break;
			case 'r':
			case 'R':alphabet[17]++; break;
			case 's':
			case 'S':alphabet[18]++; break;
			case 't':
			case 'T':alphabet[19]++; break;
			case 'u':
			case 'U':alphabet[20]++; break;
			case 'v':
			case 'V':alphabet[21]++; break;
			case 'w':
			case 'W':alphabet[22]++; break;
			case 'x':
			case 'X':alphabet[23]++; break;
			case 'y':
			case 'Y':alphabet[24]++; break;
			case 'z':
			case 'Z':alphabet[25]++; break;
		}
	}
	for (int j=0;j<26;j++){
		if (alphabet[j]==0) continue;
		else printf("'%c'=%d,",alphabets[j],alphabet[j]);
	}
	printf(" \n");
	return 0;
}