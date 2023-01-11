#include<stdio.h>
#include<string.h>
int main()
{
printf("Enter a text message of maximum size 100 : \n");
char txt[100];
scanf ("%[^\n]",txt);
printf("The text message as given by the user as input : \n");
printf("%s",txt);
printf("Length counted without using library = %d\n",len_count(txt));
printf("Length counted using strlen() = %lu\n",strlen(txt));
printf("Number of words = %d\n",word_count(txt));
printf("Number of sentences = %d\n",sent_count(txt));
printf("Number of vowels = %d\n",vow_count(txt));
return 0;
}
int len_count(char str[])
{
int i=0,size=0;
while(str[i]!='\0')
{
size++;
i++;
}
return size;
}
int word_count(char str[])
{
int i,w_count=0;
for(i=0;i<len_count(str);i++)
{
if (str[i]==' ' || str[i]=='\0')
w_count++;
}
return w_count;
}
int sent_count(char str[])
{
int i,s_count=0;
for(i=0;i<len_count(str);i++)
{
if (str[i]=='.')
s_count++;
}
return s_count;
}
int vow_count(char str[])
{
int i,v_count=0;
for(i=0;i<len_count(str);i++)
{
if (str[i]=='a' ||str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'||str[i]=='A'|| str[i]=='E' || str[i]=='I'||str[i]=='O'|| str[i]=='U')
v_count++;
}
return v_count;
}



