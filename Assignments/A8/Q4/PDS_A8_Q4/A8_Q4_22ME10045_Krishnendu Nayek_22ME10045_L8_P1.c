#include<stdio.h>
int main()
{
char S1[100],S2[100];
printf("\n Enter the first string:");
gets(S1);
printf("\n Enter the second string:");
gets(S2);
int i,j,count=0;
for(i=0;S2[i]!='\0';i++)
{
 if(S1[0]==S2[i] && S1[1]==S2[i+1] && S1[2]==S2[i+2])
 { 
  count++;
 }
}
printf("\n Number of appearances : %d",count);
}
  
 
