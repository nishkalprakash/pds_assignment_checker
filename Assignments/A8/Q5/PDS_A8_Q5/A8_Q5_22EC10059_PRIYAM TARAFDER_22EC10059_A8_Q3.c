/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 8
QUESTION NO.: 1
DESCRIPTION: finds pallindromic substrings in a word
*/
#include <stdio.h>
#include <stdlib.h>
int length(char s[]){
	int c=0;
	for(int t=0;*(s+t)!='\0';t++)
		c++;
	return c;
}
int palindrome(char *s,int len){
	for(int t=0;t<len;t++)
		if(s[t]!=s[len-t-1])
			return 0;
	return 1;
}
int main(){
	char s[100];
	scanf("%s",s);
	int len=length(s);
	int r=0;
	for(int t=0;t<len;t++){
		for(int i=len-1;i>t+1;i--){
			char *s2; s2=(char *)malloc((i-t)*sizeof(char));
			for(int j=0;j<i-t;j++)
				s2[j]=s[t+j];
			if(palindrome(s2,i-t)){
				r++;
				printf("%s, ",s2);
			}
		}
	}
	if(r==0)
		printf("No pallindrome substrings present");
}