/* 	NAME: PRIYAM TARAFDER
	ROL NO.: 22EC10059
	ASSIGNMENT NO.: 7
	QUESTION NO.: 4
	to check if a string is anagram or not
*/
#include <stdio.h>
#include <string.h>
int ispresent(char s1, char *s2){
	int c=0;
	for(int t=0;t<strlen(s2);t++){
		if(s1==*(s2+t)){	
			c++;
		}
	}
	return c;	//returns number of times element occurs in 2nd string
}
int main(){
	char s1[100],s2[100]; int c=0;
	scanf("%s",s1);	
	scanf("%s",s2);	
	int len1=strlen(s1);
	int len2=strlen(s2);
	if(len1==len2){
		for(int t=0;t<len1;t++){
			if(!ispresent(*(s1+t),s2)||!ispresent(*(s2+t),s1)){	//checks if element is present in 2nd string
				printf("NOT Anagram");
				return 0;
			}
			for(int i=0;i<len1;i++){
				if(*(s1+i)==*(s2+t)&&ispresent(*(s1+i),s2)!=ispresent(*(s2+t),s1)){//checks if occurences of element in 1st string is same as that in 2nd string
					printf("NOT Anagram");
					return 0;
				}
			}					
					
			c++;
		}
		if(c==len1)
			printf("Anagram");
	}else
		printf("NOT Anagram");
}//end of main method
