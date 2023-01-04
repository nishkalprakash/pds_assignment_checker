/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 7
description: 
*/ 




# include <stdio.h>
# include <stdlib.h>





int main()
{

	char str1[20] , str2[20];                        // entering two strings
	scanf("%s", str1);
	scanf("%s", str2);

	
	for(int i=0 ; str1[i]!='\0' ;i++){
		for(int j=0 ; ;j++){
			if (str1[i]==str2[j]) break;                // if a letter matches then inner loop breaks and it checks for other letter 
			if (str2[j]=='\0'){
				printf("Not Anagram");                // if a letter doesnot matches it prints and exit the command 
				return 0;			
				}
	
			}	
}

	
	for(int i=0 ; str2[i]!='\0' ;i++){                              // we have to check both the strings 
		for(int j=0 ; ;j++){
			if (str2[i]==str1[j]) break;
			if (str1[j]=='\0'){
				printf("Not Anagram");
				return 0;			
				}
	
			}	
}
	printf("Anagram");                                            // program will reach here only if the words are Anafram 
	return 0;
}
