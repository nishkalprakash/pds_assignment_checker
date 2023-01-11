#include<stdio.h>
int main()
{
 int m=0,t=0,j,count1,count2;
 char S1[100];
 printf("Enter the first string:\n");
 scanf("%s",S1);
 char S2[100];
 printf("Enter the second string:\n");
 scanf("%s",S2);
 for(int i=0;S1[i]!='\0';i++)
 {
  count1=i+1;
 }
 for(int i=0;S2[i]!='\0';i++)
 {
  count2=i+1;
 }
 for(int i=0;i<=count2-count1;i++)
 {
  for(int k=i,j=0;k<count1+i,j<count1;k++,j++)
  {
   if(S2[k]==S1[j])
   {
    m++;
   }
  }
   if(m==count1)
   {
    t++;
   }
   m=0;
 }
 printf("S1 appears %d times in S2",t);
 return 0;
}   



