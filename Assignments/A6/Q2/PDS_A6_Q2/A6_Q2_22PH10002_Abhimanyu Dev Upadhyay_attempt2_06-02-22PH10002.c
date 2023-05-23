//22PH10002
//Lab 6 Problem 2
//Scanf

#include <stdio.h>

void abc()
{
    char str[100], str1[20], str2[30];
    scanf("%s", str);
    int x = scanf("%19s %29s", str1, str2);
    printf("\nx: %d", x);
    printf("\nstr1; %s", str1);
    printf("\nstr2; %s", str2);

}
int main()
{
    //Calling abc
    abc;

    //Checking
    char str[1024];
    gets(str);
    int num=0,spc=0,word=0,vow=0,cons=0,sen=0;
    int l = strlen(str);
    for(int i = 0;i<l;i++)
    {
        if((int)str[i]>=48&&(int)str[i]<=57)
        {
            num++;
        }
        else if((int)str[i]>=65&&(int)str[i]<=90)
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                vow++;
            }
            else
            {
                cons++;
            }
        }
        else if((int)str[i]>=97&&(int)str[i]<=122)
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                vow++;
            }
            else
            {
                cons++;
            }
        }
        else if(str[i]==' ')
        {
            word++;
        }
        else if(str[i]=='.'||str[i]==',')
        {
            word++;
            spc++;
        }
        else
        {
            spc++;
        }
        if(str[i]=='.')
        {
            sen++;
        }
    }
        printf("\nNumeric characters: %d", num);
        printf("\nSpecial Printable Characters: %d", spc);
        printf("\nWords: %d", word);
        printf("\nVowels: %d", vow);
        printf("\nConsonants: %d", cons);
        printf("\nSentences: %d", sen);
return 0;
}
