/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 7
Description :  to check if two strings are anagram or not.
*/
#include<stdio.h>
#include<string.h>
int main(){
char str1[20],str2[20];
int len,len1,len2,i,j,found=0,notfound=0;
printf("enter first string:\n");
scanf("%s",str1);

printf("Enter second string:\n");
scanf("%s",str2);
len1=strlen(str1);
len2=strlen(str2);
if(len1==len2){
	len=len1;
	for(i=0;i<len;i++){
		found=0;
	for(j=0;j<len;j++){
		if(str1[i]==str2[j]){
		found=1;
		break;
	}

}
if(found==0){
notfound=1;
break;
}
}
if(notfound==1){
printf("\nnot anagram");
}else
printf("\nare anagram");

}
return 0;
}
