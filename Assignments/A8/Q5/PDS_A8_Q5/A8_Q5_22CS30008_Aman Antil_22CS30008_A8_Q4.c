/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 8
Description : Program to find palindrome
*/
int sl(char a[]){
	int i=0;
	while(a[i]!='\0') i++;
	return i;
}
//function to calculate string length

#include <stdio.h>
int main(){
	char c[100];
	int p,q, flag=1;
	scanf("%s", c);
	for(int i=0;i<sl(c);i++){
		int j;
		for(j=i+1;j<sl(c);j++){
			//if same character appears then check all characters in between
			if(c[i]==c[j]) {
				int fl=1;
				for(int u=i+1;u<j;u++) if(c[u]!=c[j-(u-i)]) fl=0;
				if(fl) {for(int y=i;y<=j;y++) {printf("%c", c[y]);flag=0;} printf(" ");}
			}
		
		}
	}
	//if no palindrome exists then flag=1
	if(flag) printf("No palindrome substrings present");


	return 0;
}