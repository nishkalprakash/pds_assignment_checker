#include<stdio.h>
#include<string.h>
int main ()
{
  char str1[20],str2[20];
  int len,len1,len2, i,j, found =0, not_found=0;
  printf("enter first string: ");
  scanf("%s" , str1);
  
  
  printf("enter second string :");
  scanf("%s" , str2);
  len1 = strlen(str1);
  len2 = strlen(str2);
  if(len1 == len2)
  {
      len = len1;
      for(i=0;i<len;i++)
     {
        found = 0;
        for(j=0;j<len;j++)
        {
           if(str1[i] == str2[j])
           {
              found = 1;
              break;
           }
       }
       if(found == 0)
       {
           not_found =1;
           break;
      }
   }
      if(not_found == 1)
          printf("\nstrings are not Anagram");
       else 
          printf("\nstrings are anagram");
      } 
    else 
         printf("\n both string must contain same no of character");
    
   return 0;
}
