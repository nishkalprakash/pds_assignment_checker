/*
SATYA PRAKASH NANDA
SEC 14
22AG10041
LAB 9
QUESTION 5
*/
#include<stdio.h>
#include<string.h>
int frequency(char str[], char a);
int main(){
char str[100];
printf("enter message:");
char ch;
int i=0;
do{
	scanf("%c",&ch);
	str[i]=ch;
	i++;
}
while(ch!='\n');
str[i]='\0';
printf("length counted by strlen():%ld\n",strlen(str)-1);
printf("length counted withot using library:%d\n", i-1);
int countspace=0;
for(int j=0;j<i-1; j++){
	if(str[j]==' '){
		countspace++;
	}
}
printf("number of words:%d\n", countspace+1);
int countstop=0;
for(int j=0;j<i-1; j++){
	if(str[j]=='.'){
		countstop++;
	}
}
printf("number of sentences:%d\n", countstop);
int countvowel=0;
for(int j=0;j<i-1; j++){
	if((str[j]=='a')||(str[j]=='e')||(str[j]=='i')||(str[j]=='o')||(str[j]=='u')){
		countvowel++;
	}
}
for(int j=0;j<i-1; j++){
	if((str[j]=='A')||(str[j]=='E')||(str[j]=='I')||(str[j]=='O')||(str[j]=='U')){
		countvowel++;
	}
}
printf("number of vowels:%d\n", countvowel);
printf("'a'=%d,",frequency(str,'a'));
printf("'t'=%d,",frequency(str,'t'));
printf("'h'=%d,",frequency(str,'h'));
printf("'e'=%d,",frequency(str,'e'));
printf("'s'=%d,",frequency(str,'s'));
printf("'r'=%d,",frequency(str,'r'));
printf("'o'=%d,",frequency(str,'o'));
printf("'k'=%d,",frequency(str,'k'));
printf("'f'=%d,",frequency(str,'f'));
printf("'m'=%d,",frequency(str,'m'));
printf("'i'=%d,",frequency(str,'i'));
printf("'d'=%d,",frequency(str,'d'));
printf("'n'=%d,",frequency(str,'n'));
printf("'g'=%d,",frequency(str,'g'));
printf("'u'=%d,",frequency(str,'u'));
printf("'w'=%d,",frequency(str,'w'));
printf("'l'=%d,",frequency(str,'l'));
printf("'p'=%d\n,",frequency(str,'p'));


return 0;
}


int frequency(char str[],char a){
int count=0;
for(int i=0; str[i]!='\0'; i++){
		if(str[i]==a||str[i]==a-32){

			count++;
		}
	}
return count;
}
