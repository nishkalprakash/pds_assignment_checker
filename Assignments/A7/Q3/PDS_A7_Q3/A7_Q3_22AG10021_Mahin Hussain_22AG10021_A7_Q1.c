/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:7
Description: Program to check for anagram string.
*/

#include<stdio.h>
#include<string.h>
int main()
{
int c=0;
char word1[100],word2[100];
printf("Enter 2 words\n");
scanf("%s",word1);
scanf("%s",word2);    //accepting two words from user and storing it
int n=strlen(word1);    //storing length of string   
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(word1[i]==word2[j])  //for comparing letters
c++;
}
}
if(c==n)
printf(" Anagram");      //condition for anagram
else
printf("Not Anagram");
return 0;
}
