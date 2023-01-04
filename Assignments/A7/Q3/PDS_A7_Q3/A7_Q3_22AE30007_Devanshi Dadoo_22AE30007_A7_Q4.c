#include<stdio.h>
int main()
{
 char word_1, word_2,n,a[100],b[100],m;
 printf("enter number of letters in word 1");
 scanf("%d",&n);
 for(int i=0; i<n; i++) // SAVING ELEMENTS ENTERED IN ARRAY 
 {
  scanf("%s", &a[i]);
 }
 printf("enter number of letters in word 2");
 scanf("%s", &m);
  for(int i=0; i<m; i++) // SAVING ELEMENTS ENTERED IN ARRAY 
 {
  scanf("%s", &b[i]);
 }
 if(m==n)
 {
  for (int i=0; i<n; i++)
  {
   for(int j=0; j<n; j++)
   {
    if(b[j]==a[i])
   {
    printf("anagram");
   }
  }
 }
}
else 
printf("not an anagram");
}

