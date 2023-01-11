/*
Section 14
Surabhi Prakash Dhavale
22ME10026
assignment8
LAB9
Question 3
*/
#include<stdio.h>
int main(){
char string1[100];
printf("enter first string");
scanf("%s",str1);
printf("enter second string");
scanf("%s",str2);
for (inti=0;str[1]!='\0';i++){
length1++;                            //length1=length1 of string
}
for (intj=0;str[2]!='\0';i++){
length2++;                            //length2=length2 of string
}
int count=0;
for(int i=0;i<length1-2;i++){
for(int j=0;j<length2-2;j++){
if(str1[i]==str2[j]&&(str[i+1]==str[i+1]==str2[j+1])&&(str[i+2]==str2[j+2])
count++;
}
}
}
printf("%d\n",count);
return 0;
}

 
