/*
satya prakash nanda
sec 14
22ag10041
lab 8
question 1*/
#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
char str2[100];
printf("enter 1st word:");
fgets(str1,100,stdin);			//INPUT OF 1ST STRING
int n1=strlen(str1);			//N1=LENGTH OF 1ST STRING
printf("enter 2nd word:");
fgets(str2,100,stdin);			//INPUT OF 2ND STRING
int n2=strlen(str2);			//N2=LENGTH OF 2ND STRING	
int count=0;
for(int i=0; i<n1; i++){
	for(int j=0; j<n2; j++){			//SEARCHING FOR NUMBER OF MUTUAL ELEMENTS
			if(str1[i]==str2[j]){
					count++;
				}
		}
}

if(count==n1||count==n2){
	printf("anagram\n");		//COMPARIG THE NUMBER OF MUTUAL ELEMENTS WITH N1 AND N2
}
else{printf("not anagram\n");}


return 0;
}
