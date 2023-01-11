/* Name: Abhijit Kumar
Roll no. 22IM10001
Section 14
Question 1
Topic- ...............*/
#include<stdio.h>
int main()
{
char S1[100],S2[100];
printf("\n Enter the first string S1 : ");
gets(S1);
printf("\n Enter the second string S2 : ");
gets(S2);
int i,j,count=0;
for(i=0;S2[i]!='\0';i++)
{
 if(S1[0]==S2[i] && S1[1]==S2[i+1] && S1[2]==S2[i+2])
 {
  count++;
 }
}
printf("\nThe number of repetitions = %d \n",count);
}
  

