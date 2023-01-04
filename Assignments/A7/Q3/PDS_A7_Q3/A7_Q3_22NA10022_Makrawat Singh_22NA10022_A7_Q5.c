/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 7
 Description : to check whether two strings are anagram or not
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char s1[100],s2[100];
	int m=0;
	scanf("%s",s1);
	scanf("%s",s2);
	
	if(strlen(s1)==strlen(s2)){
	for(int i=0;i<strlen(s1);i++){
			int hsh=1;
			m++;
			for(int j=0;j<strlen(s2);j++){
				if(s1[i]==s2[j]){
					hsh=0;
					continue;
				}
			}
			if(hsh==1){printf("NOT Anagram");break;}
			if(m==strlen(s1)) printf("Anagram");
		
	}
	}else printf("NOT Anagram");
	return 0;
}
