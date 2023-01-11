/* SECTION :14
 NAME:GAURAV MEENA
 ROLL NO:22CE10025
 DESCRIPTION:TEXT MESSAGE*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>

int main(){
    
   char str[1000];
    printf("ENTER SENTENCE:");
    scanf ("%[^\n]",str);
    int length=0;
    int sentence=0;
    int word=0;
    int vowel=0;
    int p=0;

    while(str[length]!='\0')
     length++;

      printf("Length without strlen:%d\n",length);
      printf("Length with strlen():%ld\n ",strlen(str));
       while(  p<length){
           if(str[p]=='a' || str [p]=='e' && str[p]=='i' || str[p]=='o' || str[p]=='u' ||  str[p]=='A' || str [p]=='E' || str[p]=='I' || str[p]=='O' || str[p]=='U' )
            vowel++;

            if(str[p]=='.')
            sentence++;

            if(str[p]==' ')
               word++;
               p++;
            }
            
            printf("NO OF VOWELS:%d\n",vowel);
            printf("NO OF SENTENCES:%d\n",sentence);
            printf("NO OF WORDS:%d\n",(word+1));   

            return 0;
            }