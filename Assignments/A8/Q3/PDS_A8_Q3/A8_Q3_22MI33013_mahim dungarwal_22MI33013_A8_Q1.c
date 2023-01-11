/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 8
*/



#include <stdio.h>

int strlen(char message[]) {
int sum = 0;
for(int i=0; message[i] != '\0'; i++) {
sum = sum + 1;
}
return (sum-1);
}




int vowel(char message[]) {
int sum = 0;
for(int i=0; message[i] != '\0'; i++) {
if(message[i] =='a' || message[i] =='e' || message[i] =='i' || message[i] =='o' || message[i] =='u') {
sum = sum + 1;
}
}
return sum;
}

int words(char message[]) {
int sum = 0;
for(int i=0; message[i] != '\0'; i++) {
if(message[i] == ' ') {
sum = sum + 1;
}
}
return (sum + 1);
}

int sentence(char message[]) {
int sum = 0;
for(int i=0; message[i] != '\0'; i++) {
if(message[i] == '.') {
sum = sum + 1;
}
}
return sum;
}

int main() {

char message[100];
fgets(message,100,stdin);

printf("total length of string is %d \n",strlen(message));
printf("total number of vowels in string is %d \n",vowel(message));
printf("total number of words in string is %d \n",words(message));
printf("total number of sentences in string is %d \n",sentence(message));
return 0;
}





