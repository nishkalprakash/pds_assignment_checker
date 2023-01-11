/*Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:8
Description: Program to print the number of times first string appears in the second string.
*/

#include<stdio.h>
int main()
{
 char s1[100],s2[100];
 int len=0,f=0;
 printf("s1:");
 scanf("%s",s1);
 printf("s2:");
 scanf("%s",s2);    //asking user to input 2 words and storing it
 while(s2[len]!=0)
  len++;                  //calculating length of the word s2
 for(int i=0;i<len-2;i++)
 { 
  if(s2[i]==s1[0]&&s2[i+1]==s1[1]&&s2[i+2]==s1[2])     //comparing the 2 word
   f++;
 }
 printf("Output : %d",f);              //printing number of times s1 repeated in s2
 return 0; 
}
