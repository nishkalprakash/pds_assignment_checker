/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 8
Description : 
*/

#include <stdio.h>
#include <string.h>

char convert(char c)
{
if(c>='a' && c<='z')
{
	return (c-'a' + 'A');
}
else return c;
}

int main()
{
char sen[100];
int alpha[256];
for(int i=0;i<100;i++){
	alpha[i] = 0;
}
int len=0,wrdcount=0,wrdlen=0,vcount=0,sencount=0,temp=0;
//input sentence
while(1){
	char k = getchar();
	if(k == '\n') break;
	sen[temp] = k;
	temp++;
}

while(sen[len]!='\0'){
	char c = convert(sen[len]);
	if(c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U') {
		vcount++;
	}
	if(sen[len] == ' ') wrdcount++;
	if(sen[len] == '.') sencount++;
	alpha[(int)c]+=1;
	
	len++;
}


printf("length counted without using library : %d \n",len);
printf("length counted by strlen : %ld \n",strlen(sen));
printf("No. of words : %d \n",wrdcount+1);
printf("No. of sentences : %d \n",sencount);
printf("No. of vowels : %d \n ",vcount);
printf("Frequency count of each alphabet :\n " );
for(int i = 0;i<100;i++)
{
	if(alpha[i] != 0 && (char)i >= 'A' && (char)i <= 'Z')
	{
		printf("'%c' = %d, ",(char)i,alpha[i]);
	}	
}









return 0;
}
