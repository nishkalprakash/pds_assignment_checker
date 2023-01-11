/* Name: Abhijit Kumar
Roll no. 22IM10001
Section 14
Question 2
Topic-Printing the number of palindromes*/
#include<stdio.h>
#include<string.h>
int main()
{
char word[100];
printf("\n Enter the word : ");
gets(word);
int l,m;
l=strlen(word);
m=l/2;
int i,j,count=0;
for(i=1;i<=m;i++)
{
 printf("\n");
 if(word[m-i]==word[m+i])
 {
  count++;
  for(j=m-i;j<=m+i;j++)
  {
   printf("%c",word[j]);
  }
 }
}
if(count==0)
printf("\n No palindromes are there");
}










