/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 8
QUESTION :substring palindrome 

*/

#include<stdio.h>
#include<stdlib.h>

int ispalindrome(char * str,int len){
	int =0,j=len-1;
	while(i<j){
		if(s[i]!=s[j]){
			return 0;
		}			
		i++;j--;
	}
	return 1;
}

int main(){
	char str1[1000];
	int i=0;
	char c;
	//taking string1 input
  	scanf("%c",&c);
	
  	while(c!='\n'){
		str1[i]=c;
    		++i;
    		scanf("%c",&c);
  	}
	str1[++i]='\0';

	int flag=0;
	for(int j=2;j<i-1;j++){
		for(int k=0;k<i-1;k++){
			char * subs=(char*)malloc(i*sizeof(char));
			for(int l=0;l<i;l++){
				subs[l]=str1[k+l];
				
			}			
		}
	}

	return 0;
}
