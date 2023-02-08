/*
satya prakash nanda
22AG10041
section 14
lab test 2
question 1
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct set{
char data;
struct set *next;
}set;

int main(){
char str1[50];
char str2[50];
char str[50];
printf("enter string 1:");
scanf("%s",str1);
printf("enter string 2:");
scanf("%s", str2);
int n1=strlen(str1);
int n2=strlen(str2);
int k=0;
for(int i=0; i<n1; i++){
for(int j=0; j<n2; j++){
if(str1[i]==str2[j]){
str[k]=str1[i];
k++;
}
}
}
str[k]='\0';
printf("l1={");
for(int i=0; str1[i]!='\0'; i++){
printf("%c",str1[i]);
}
printf("}\n");
printf("-\n");
printf("l2={");
for(int i=0; str2[i]!='\0'; i++){
printf("%c",str2[i]);
}
printf("}\n");
printf("=\n");
printf("l1={");
for(int i=0; str[i]!='\0'; i++){
printf("%c",str[i]);
}
printf("}\n");

return 0;
}
