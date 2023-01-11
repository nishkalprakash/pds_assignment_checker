/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 8
QUESTION NO.: 1
DESCRIPTION: does various operations on a string
*/
#include <stdio.h>
#include <string.h>
int length(char s[]){
	int len=0;
	for(int t=0;s[t]!='\0';t++)
		len++;
	return len;
}
int main(){
	char s[100], freq[52]={'a','A','b','B','c','C','d','D','e','E','f','F','g','G','h','H','i','I','j','J','k','K','l','L','m','M','n','N','o','O','p','P','q','Q','r','R','s','S','t','T','u','U','v','V','w','W','x','X','y','Y','z','Z'};
	scanf("%[^\n]",s);
	int len=length(s);
	printf("Length counted without using library: %d\n",len);
	printf("Length counted by strlen(): %lu\n",strlen(s));
	char s2[101];
	int w=0,sen=0,v=0;
	for(int t=0;t<len;t++)
		s2[t]=s[t];
	s2[len]=' ';
	for(int t=0;t<len;t++){
		if((s2[t]>='A'&& s2[t]<='Z') || (s2[t]>='a'&& s2[t]<='z') && (s2[t+1]<'A'|| s2[t+1]>'Z') && (s2[t+1]<'a'|| s2[t+1]>'z') ){
			w++; 
		}
		if(s2[t]=='.'&&s2[t+1]!='.')
			sen++;
		if(s2[t]=='a'||s2[t]=='e'||s2[t]=='i'||s2[t]=='o'||s2[t]=='u'||s2[t]=='A'||s2[t]=='E'||s2[t]=='I'||s2[t]=='O'||s2[t]=='U')
			v++;
	}
	printf(" Number of words: %d\n Number of sentences: %d\n Number of vowels: %d\n Frequency count of each alphabet:\n",w,sen,v);
	for(int t=0;t<52;t+=2){
		int f=0;
		for(int i=0;i<len;i++)
			if(s[i]==freq[t]||s[i]==freq[t+1])
				f++;
		if(f!=0)
			printf("'%c'= %d, ",freq[t],f);	
	}
}