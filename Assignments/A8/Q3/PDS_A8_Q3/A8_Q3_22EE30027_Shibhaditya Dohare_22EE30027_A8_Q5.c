/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 8
Discription : To read a string
*/
#include<stdio.h>
#include<string.h>
int main(){
	int i=0,ls,lls;
	char s[100];
	for(i=0;s[i]!='\n';i++) scanf("%c",&s[i]);
	i=0;
	while(s[i]!='\n'){
		i++;
	}
	ls=i;
	lls=strlen(s);
	printf("\nLength counted without using library:%d\n",ls);
	printf("Length counted by strlen(): %d\n",lls);
	return 0;
}
