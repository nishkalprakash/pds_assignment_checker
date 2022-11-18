/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	char user[30];
	char pass[30];
	int i,j,flag;
	printf("Username : ");
	scanf("%s",user);   // asking for username
	printf("Password : ");
	scanf("%s",pass);   // asking for password
	int user_len=0;
	int pass_len=0;
	for(i=0;user[i]!='\0';i++){
		user_len++;
	}
	for(i=0;pass[i]!='\0';i++){
		pass_len++;
	}
//	printf("%d\n",pass_len);    //checking the matching of username and pass
	for(i=0;i<pass_len;i++){
		if(pass[i]==user[0]){
			flag=0;
			for(j=0;j<user_len;j++){
				if(pass[i+j]==user[j]){
					continue;
				}
				else{
					flag=1;
					break;
				}
			}
			if(flag==0){
				printf("Not Acceptable\n");
				exit(0);
			}
		}
	}
	if(pass_len<8){
		printf("Not Acceptable\n");     // checking the password length
		exit(0);
	}
	if(pass_len>15){
		printf("Not Acceptable\n");
		exit(0);
	}
	int lower=0,upper=0,special=0;      //checking the upper case and lower case
	for(i=0;i<pass_len;i++){
		if(pass[i]>=65 && pass[i]<=90){
			upper++;
		}
		if(pass[i]>=97 && pass[i]<=122){
			lower++;
		}
		if(pass[i]=='$'||pass[i]=='*'||pass[i]=='+'||pass[i]=='/'||pass[i]=='#'||pass[i]=='@'||pass[i]=='<'||pass[i]=='>'||pass[i]=='?'||pass[i]=='_'||pass[i]=='!'){
			special++;
		}
	}
	if(lower<1 || upper<1 || special<2){
		printf("Not Acceptable\n");
		exit(0);
	}
	int cnt=0;
	for(i=0;i<pass_len;i++){
		if(pass[i]>=48 && pass[i]<=57){
			cnt++;
			if(cnt>5){
				printf("Not Acceptable\n");
				exit(0);
			}
		}
		else{
			cnt=0;
		}
	}
	int ch[26];
	for(i=0;i<26;i++){
		ch[i]=0;
	}
	for(i=0;i<pass_len;i++){
		if(pass[i]>=65 && pass[i]<=90){
			ch['A'-pass[i]]++;
		}
		else if(pass[i]>=97 && pass[i]<=122){
			ch['a'-pass[i]]++;
		}
	}
	for(i=0;i<26;i++){
		if(ch[i]>5){
			printf("Not Acceptable\n");
			exit(0);
		}
	}
	printf("Acceptable\n");
}
