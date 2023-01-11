/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 8
 Description : 
 */

#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 
// void sorting(char){

// }

int main(){
	char a[101],z;
	int j=0;
	scanf("%c",&z);

	do{
		a[j]=z;
		scanf("%c",&z);
		j++;
	}while(z!='\n');
	// while(a[j]!='\n'){
	// 	scanf("%c",&a[j]);
	// 	j++;
	// }
	printf("Length counted without using library: %lld\n",j);
	printf("Length counted by strlen(): %ld\n",strlen(a));
	ll int words=0;
	for(int i=0;i<j;i++){
		if(a[i]==' '){
			words++;
		}
	}
	printf("Number of words:%lld\n",words+1);
	ll int sen=0;
	for(int i=0;i<j;i++){
		if(a[i]=='.'){
			sen++;
		}
	}
	printf("Number of sentences:%lld\n",sen);
	ll int vow=0;
	for(int i=0;i<j;i++){
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U'){
			vow++;
		}
	}
	printf("Number of vowels:%lld\n",vow-1);
	printf("Frequency count of each alphabet:");
	int alpha[26];
	
			int count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='a'||a[i]=='A'){
					alpha[0]++;
				}
			}
			if(count!=0){
				printf("'a'=%d,",count);
			}
			count=0;
		
			
			for(int i=0;i<j;i++){
				if(a[i]=='b'||a[i]=='B'){
					count++;
				}
			}
			if(count!=0){
				printf("'b'=%d,",count);
			}
			
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='c'||a[i]=='C'){
					count++;
				}
			}
			if(count!=0){
				printf("'c'=%d,",count);
			}
			 count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='d'||a[i]=='D'){
					count++;
				}
			}
			if(count!=0){
				printf("'d'=%d,",count);
			}
			 count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='e'||a[i]=='E'){
					count++;
				}
			}
			if(count!=0){
				printf("'e'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='f'||a[i]=='F'){
					count++;
				}
			}
			if(count!=0){
				printf("'f'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='g'||a[i]=='G'){
					count++;
				}
			}
			if(count!=0){
				printf("'g'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='h'||a[i]=='H'){
					count++;
				}
			}
			if(count!=0){
				printf("'h'=%d,",count);
			}
			 count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='i'||a[i]=='I'){
					count++;
				}
			}
			if(count!=0){
				printf("'i'=%d,",count);
			}
			
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='j'||a[i]=='J'){
					count++;
				}
			}
			if(count!=0){
				printf("'j'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='k'||a[i]=='K'){
					count++;
				}
			}
			if(count!=0){
				printf("'k'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='l'||a[i]=='L'){
					count++;
				}
			}
			if(count!=0){
				printf("'l'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='m'||a[i]=='M'){
					count++;
				}
			}
			if(count!=0){
				printf("'m'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='n'||a[i]=='N'){
					count++;
				}
			}
			if(count!=0){
				printf("'n'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='o'||a[i]=='O'){
					count++;
				}
			}
			if(count!=0){
				printf("'o'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='p'||a[i]=='P'){
					count++;
				}
			}
			if(count!=0){
				printf("'p'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='q'||a[i]=='Q'){
					count++;
				}
			}
			if(count!=0){
				printf("'q'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='r'||a[i]=='R'){
					count++;
				}
			}
			if(count!=0){
				printf("'r'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='s'||a[i]=='S'){
					count++;
				}
			}
			if(count!=0){
				printf("'s'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='t'||a[i]=='T'){
					count++;
				}
			}
			if(count!=0){
				printf("'s'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='t'||a[i]=='T'){
					count++;
				}
			}
			if(count!=0){
				printf("'t'=%d,",count);
			}count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='u'||a[i]=='U'){
					count++;
				}
			}
			if(count!=0){
				printf("'u'=%d,",count);
			}count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='v'||a[i]=='V'){
					count++;
				}
			}
			if(count!=0){
				printf("'v'=%d,",count);
			}count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='w'||a[i]=='W'){
					count++;
				}
			}
			if(count!=0){
				printf("'w'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='x'||a[i]=='X'){
					count++;
				}
			}
			if(count!=0){
				printf("'x'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='y'||a[i]=='Y'){
					count++;
				}
			}
			if(count!=0){
				printf("'y'=%d,",count);
			}
			count=0;
			for(int i=0;i<j;i++){
				if(a[i]=='z'||a[i]=='Z'){
					count++;
				}
			}
			if(count!=0){
				printf("'z'=%d,",count);
			}
		
	}



