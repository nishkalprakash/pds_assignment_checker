/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 8
* Description : Program to print all the palindromes in the given word
*/
#include<stdio.h>
int main()
{
 int i,flag, length,count=0;
 char str[25];
 scanf("%s",str);
 for(i=0; str[i]!='\0';i++){
 length++;
 }
 allPalindromeSubstrings(str);
 return 0;
}
void checkPalindrome(char str[], int start, int end)
{
 while(start<end){
 if(str[start]!=str[end])
  return;
  start++;
  end--;
 printf("%.*s\n",end-start+1, str+start);
 }
}

void allPalindromeSubstings(char str[])
{
 for(i=0; name[i]!='\0';i++){
 length++;
 }
 int n= length; 
 for(i=0; i<n; i++){
 checkPalindrome(str, i, i);
 }
}
