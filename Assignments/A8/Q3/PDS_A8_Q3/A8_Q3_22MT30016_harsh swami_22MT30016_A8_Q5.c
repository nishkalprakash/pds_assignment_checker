/*section 14
 name harsh
roll no:22MT30016
question no:5
description:sentence */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char str[1000];
   printf("enter sentence:");
   scanf("%[^\n]",str);
   int length=0;
   int sentence=0;
   int word=0;
   int vowel=0;
   while(str[length]!='\0')
   length++;
   printf("length without strlen:%d\n",length);
   printf("length with strlen():%ld\n",strlen(str));
   int p=0;
   while(p<length)
   {
     if(str[p]=='a' || str[p]=='e' || str[p]=='i' || str[p]=='o' || str[p]=='u'|| str[p]=='A' || str[p]=='E' || str[p]=='I' || str[p]=='O' || str[p]=='U' )
     vowel++;
     if(str[p]=='.')
      sentence++;
     if (str[p]==' ')
     word++;
     p++;
 }
    printf("number of vowels:%d\n",vowel);
    printf("number of sentences:%d\n",sentence);
    printf("number of words:%d\n",(word+1));
    return 0;
}

