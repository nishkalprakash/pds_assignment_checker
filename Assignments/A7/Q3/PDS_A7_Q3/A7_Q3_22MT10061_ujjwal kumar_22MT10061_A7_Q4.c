#include<stdio.h>
  int main()
{    int n;
    char name1[n];
    printf("Enter the first word ");
     scanf("%c",&name1[n]); 
    char name2[n];
    printf("Enter the second word ");
     scanf("%c",&name2[n]);
 for(int i=0;i<n-1;i++)
      {
                  if (name1[i]==name2[i])
                      printf("Anagram");
                  else if(name1[i]==name2[i+1])
                      printf("Anagram");
                   else if(name1[i]==name2[i+2])
                      printf("Anagram");
                   else
                     printf("Not Anagram");
               
      }





   return 0;
}
