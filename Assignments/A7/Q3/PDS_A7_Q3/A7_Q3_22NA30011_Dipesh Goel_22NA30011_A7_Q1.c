#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

int main()
{
    char input_str1[81], ch;
    int  c=0;
    do
    {
        ch = getchar();
        input_str1[c] = ch;
        c++;
    } while  (ch != '\n');

    c=c-1;
    input_str1[c] = '\0';

    char input_str2[81], ch2;
    int  c2=0;
    do
    {
        ch2 = getchar();
        input_str2[c2] = ch2;
        c2++;
    } while  (ch2 != '\n');

    c2=c2-1;
    input_str2[c2] = '\0';



    //printf("\n%s\n",input_str1);
    //printf("\n%s\n",input_str2);

    //if (strcmp(input_str1,input_str2)==0) printf("Anagram");

    int count=0;

    for (int i=0; input_str1[i]!='\0';i++)
    {
        for (int j=0; input_str2[j]!='\0';j++)
        {
            if (input_str2[j]==input_str1[i]) count++;
        }
    }

    if (count==strlen(input_str1)) printf("Anagram");
    else printf("NOT Anagram");

    return 0;
}


