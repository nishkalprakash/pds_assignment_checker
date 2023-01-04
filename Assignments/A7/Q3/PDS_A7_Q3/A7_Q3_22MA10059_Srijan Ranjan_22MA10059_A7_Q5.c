/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:7
Description: This program takes two strings and prints if the strings are an anagram..
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n;										//No of terms.
	scanf("%d",&n);
	char a[n];
	char b[n];                                 //Declaration of variables.
	scanf("%s",a);
	scanf("%s",b);
	char temp;
	for(int i=0;i<n;i++){						//Sorting the first string
		for(int j=n-1;j>i;j--){
			d=strcmp(a[j],a[j-1]);
			if(d<0){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){						//Sorting the second string.
		for(int j=n-1;j>i;j--){
			d=strcmp(b[j],b[j-1]);
			if(d<0){
				temp=b[j];
				b[j]=b[j-1];
				b[j-1]=temp;
			}
		}
	}
	int flag=0;
	for(int i=0;i<n;i++){						//Checking if both the strings are exactly identical.
		if(a[i]==b[i]){
			flag=1;
		}
		else{
			break;
		}
	}
	if(flag==1){								//Printing Anagram.
		printf("anagram");
	}
	else{
		printf("Not anagram");
	}
	return 0;
}