/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 6 
Description - 
*/


#include <stdio.h>
#include<string.h>
#define ll long long int

int main() {
	char wd1[100],wd2[100];
	int m=0;
	scanf("%s",wd1);                             // taking word 1 input
	scanf("%s",wd2);				// taking word 2 input 
	
	if (strlen(wd1)==strlen(wd2)){
	for (int i=0;i<strlen(wd1);i++){
		int hsh=1;                    
		m++;
		for (int j=0;j<strlen(wd2);j++){  
			if (wd1[i]==wd2[j]) {            // checking each alphabet
				hsh=0;
				continue;
				
			}		
		}
		if (hsh==1){printf("Not Anagram");break;}
		if (m==strlen(wd1)) printf("Anagram");         // printing anagram  
	}
	}else printf("Not Anagram");
    return 0;
    
    
}
