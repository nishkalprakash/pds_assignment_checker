#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	printf("Enter a text message of max 100 words ");
	gets(text);

	

printf("Length counted using library is %ld",strlen(text));
lengthstr(text[100]);
word(text[100]);
sentence(text[100]);
vowel(text[100]);





return 0;
}

int  lengthstr(char str[]){
	int i,count=0;
	for(i=0;i<100;i++){
	while(str[i]!='0'){
		count++;
		i++ ;
	}
}
printf("Length without using library is %d",count);

return count;
}

int word(char str[]){
	int i,wordcount=0;
	for(i=0;i<strlen(str);i++){
		if(str[i]==' '){
			wordcount++;
			i++ ;
		}
	}
	printf("The number of words is %d",wordcount);
	return wordcount ;
}

int sentence(char str[]){
	int i,scount=0;
	for(i=0;i<strlen(str);i++){
		if (str[i]=='.'){
			scount++ ;
			i++ ;
		}
	}

	printf("The number of sentences is %d",scount);
	return scount;
}
int vowel(char str[]){
	int i,vcount=0;
	for(i=0;i<strlen(str);i++){
		if (str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='O' || str[i]=='o' || str[i]=='I' || str[i]=='i' || str[i]=='U' || str[i]=='u' ){
			vcount++;
			i++;

		}                                                                     
	}
	printf("The total number of vowels is %d",vcount);
	return vcount;
}

