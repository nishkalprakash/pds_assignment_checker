/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 7
Discription : To check if two words are anagram 
*/
#include<stdio.h>
#include<string.h>
int main(){
	char w1[10],w2[10];
	int a,b,i,j,ana=0;
	printf("Type the words:\n");
	scanf("%s",w1);
	a=strlen(w1);
	scanf("%s",w2);
	b=strlen(w1);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(w1[i]==w2[j]){
				ana++;
				break;			
			} 
		}
	}
	if(ana==a) printf("Anagram\n");
	else printf("NOT Anagram\n");
	return 0;
}
	
