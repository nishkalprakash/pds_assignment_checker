#include<stdio.h>
#include<string.h>
int main(){
int i=0,p=0,q=0,r=0,s=0;
char a[100],c;

printf("enter the message");
while(c!='.'){
c=getchar();
a[i++]=c;
}
a[i]='\0';
for( i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
p++;
}
printf("length of message is %d\n" ,p);

int length=strlen(a);
printf("length counted using strlen %d\n", length);
for(int i=0;a[i]!='\0';i++){

if(a[i]==' ')
q++;
}
printf("number of words %d\n",r+1);
for(int i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
r++;
}
printf("number of sentences %d\n" ,r+1);
for(int i=0;a[i]!='\0';i++)
{
if(a[i]=='a' ||a[i]=='A'|| a[i]=='e'|| a[i]=='E'|| a[i]=='i'|| a[i]=='I'|| a[i]=='o'|| a[i]=='O'|| a[i]=='u'|| a[i]=='U')
s++;
}
printf("number of vowels %d" ,s);
return 0;
}  
