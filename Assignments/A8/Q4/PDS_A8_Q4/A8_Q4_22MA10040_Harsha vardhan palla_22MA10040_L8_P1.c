/*section 14
 Name:P.sri Harsha Vardhan 
 Roll no:22MA10040
 Assignment no:1 
desc: tO printf no:of times the word appears in the entered string*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
char *str1,*str2;
int size_str1=1,count=0;
printf("Enter the first string s1:");
str1=(char *)malloc(size_str1*sizeof(char));
scanf("%c",&str1[size_str1-1]);
for(;str1[size_str1-1]!='\n';){
size_str1++;
str1=realloc(str1,size_str1*sizeof(char));
scanf("%c",&str1[size_str1-1]);
}
int size_str2=1;
printf("Enter the second string s2:");
str2=(char *)malloc(size_str2*sizeof(char));
scanf("%c",&str2[size_str2-1]);
for(;str2[size_str2-1]!='\n';){
size_str2++;
str2=realloc(str2,size_str2*sizeof(char));
scanf("%c",&str2[size_str2-1]);
}
for(int j=0;j<size_str2-size_str1;j++){
for(int k=0;k<size_str1-1;k++){
if(str2[j+k]!=str1[k]) break;
else if(k==size_str1-2) count++;
}
}
printf("%d\n",count);
return 0;
}
