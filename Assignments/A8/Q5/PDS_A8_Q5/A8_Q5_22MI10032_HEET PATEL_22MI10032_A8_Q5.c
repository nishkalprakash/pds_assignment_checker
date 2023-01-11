/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 8
Description :  to output all substrings of palindrome.
*/ 
#include<stdio.h>
void substring(char s[],char sub[],int p, int len){

int c = 0;
while (c<len){
sub[c]=s[p+c];
c++;

}
sub[c]='\0';
}
int check1(char s[]){
int flag = 0;
int count = 0;
for(int i = 0 ; s[i]!='\0';i++){
count++;
}
for(int i = 0 ;s[i]!='\0';i++){
if(s[i]!=s[count - i - 1]){
flag=1;
}
}
return flag;
}
int check(char s[]){

int flag = 0;
int count = 0;
for(int i = 0 ; s[i]!='\0';i++){
count++;
}
for(int i = 0 ;s[i]!='\0';i++){
if(s[i]!=s[count - i - 1]){
flag=1;
}
}
return flag;
}
int main(){
printf("Enter string:");
char s[100];
char c[100];
scanf("%s",s);
int flag = 0;
int count = 0;
for(int i = 0 ; s[i]!='\0';i++){
count++;
}





for(int i = 0 ; i < count; i++){
for(int j = 2 ;j <= count-i;j++){
substring(s,c,i,j);

if (check(c)==0) {
printf("%s ",c);
}
}
}
}
