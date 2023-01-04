#include<stdio.h>
int anagram(char a[],char b[]); // making function
int main()
{
char a[10],b[10];
printf("enter strings");// taking strings as input
scanf("%s%s",a,b);

if(anagram(a,b)==1){  
printf("anagram");}
else
printf("not anagram");
return 0;}

int anagram(char a[],char b[])
{
int one[26]={0},two[26]={0},k=0;
while(a[k]!=0)
{
one[a[k]-'a']++;
k++;
}


return 0;}




