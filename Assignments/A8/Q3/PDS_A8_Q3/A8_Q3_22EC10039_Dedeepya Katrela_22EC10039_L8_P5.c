//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:8
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include<string.h>
int main()
{char text[100];
 int i,count,words=0,sentence=0,vowels=0;
 printf("enter the text:");
 scanf("%[^\n]",text);
 for(i=0;text[i]!='\0';i++)
 {count++;}
 printf("lenght counted without using lib:%d\n",count);
 
 printf("length counted using lib:%ld\n",strlen(text));
for(i=0;text[i]!=0;i++)
 {if(text[i]==' ')
   {words++;}
  if(text[i]=='.')
   {sentence++;}
  if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u')
    {vowels++;}
  }
 printf("number of words=%d",words+1);
 printf("number of sentence=%d",sentence);
 printf("number of vowels=%d",vowels);








return 0;
} 
 
     
  
