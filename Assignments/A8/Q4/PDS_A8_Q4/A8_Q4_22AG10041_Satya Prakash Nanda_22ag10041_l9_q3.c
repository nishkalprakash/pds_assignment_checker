/*
SATYA PRAKASH NANDA
22AG10041
SECTION 14
LAB-9
QUESTION 3
*/
#include<stdio.h>
int main(){
char str1[100];
printf("enter first string:");       
scanf("%s", str1);				//input of 1st string
char str2[100];
printf("enter second string:");
scanf("%s", str2);				//input of 2nd string
int length1=0;
for(int i=0;str1[i]!='\0';i++){
	length1++;				//length1=length 0f 1st string	
}
int length2=0;
for(int i=0;str2[i]!='\0';i++){			//length2= length of 2nd string
	length2++;
}

int count=0;
for(int i=0; i<length1-2;i++){
	for(int j=0; j<length2-2; j++){								//code to check no of times str1
			if((str1[i]==str2[j])&&(str1[i+1]==str2[j+1])&&(str1[i+2]==str2[j+2])){  //occurs in str2
					count++;
				}
		}
} 

printf("%d\n", count);


return 0;
}
