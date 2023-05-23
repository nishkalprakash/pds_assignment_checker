#include <stdio.h>
void swap(char *x, char *y)
{
 char temp = *x;
 *x = *y;
 *y = temp;
}
void copy(char str1[],char str2[],int n)
{
    str2[n]=str1[n];
    if(str1[n]=='\0')
        return;
    copy(str1,str2,n+1);
}
void reverse(char *s, int p)
{
 static int i = 0;
 if (*(s + p) == '\0') {
 return;
 }
 reverse(s, p + 1);
 if (i <= p) {
 swap(&s[i++], &s[p]);
 }
}
int main()
{
 char word[100],word1[100];
 int i;

 printf("Enter the elements of string:");
 scanf("%[^\n]s",word);
 copy(word,word1,0);
 reverse(word, 0);
 printf("Reverse of the given string is %s", word);
 printf("\nelements of string:%s",word1);
 for(i=0;word[i]!='\0';i++)
    {
        printf("THe length of the string word is %d",i);
    }

return 0;
}
