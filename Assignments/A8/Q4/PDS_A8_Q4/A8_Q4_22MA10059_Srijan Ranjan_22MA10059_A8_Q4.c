/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:8
Description: This program takes 2 strings and checks how many times a the particular substring is present in the string.
*/
#include<stdio.h>
int main(){
	char str1[100];
	char str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	int i=0;
	int flag=1;
	int count=0;
	while(str2[i]!='\0'){
		if(str2[i]==str1[0]){
			int j=1;
			while(str1[j]!='\0'){
				if(str2[i+j]!=str1[j]){
					flag=0;
					break;
				}
				else{
					flag=1;
				}
				j++;
			}
			if(flag==1){
				count++;
			}
		}
		i++;
	}
	printf("%d ",count);
	return 0;
}