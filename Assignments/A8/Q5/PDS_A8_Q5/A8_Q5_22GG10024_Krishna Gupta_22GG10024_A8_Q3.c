/*Name - Krishna Gupta
  Section - 14
  Roll no. - 22GG10024
  Assignment - Checking the palindrome substrings in a word*/


#include <stdio.h>
#include <stdlib.h>
void palindrome(char A[100]);
int main()
{
 char P[50],sub;
 int i,size=0,flag=0,j,k;
 printf("Enter a word :"); // taking a word as input
 scanf("%s",P);
 for (i=0;P[i]!='\0';i++)
     {
     size++;
       } 

 for (i=2;i<size;i++)       // making substring within a word
  {
    for (j=0;j<size;j++)
     { 
       char *sub = (char*)malloc(sizeof(char)*i);
       for (int k=0;k<i;k++)
        {
          sub[k]=P[j+k];
       }
   for(k=0;k<i;k++)
    printf("%s",sub[k]);
       palindrome(sub);
     }
   }

return 0;
}
void palindrome(char A[100])            // function for checking whether substring are palindrome or not 
{
 int i,flag=0,size=0;
 for (i=0;A[i]!='\0';i++)
{
 size++;
} 
printf("%d\n",size);
 for(i=0;A[i]!='\0';i++)
 {
  if (A[i]!=A[size-i-1])
      flag = 1;
 }
  if (flag==0)
   {
   for (i=0;i<size;i++)
   {
    printf("%s",A[i]);
     }
  }
}

