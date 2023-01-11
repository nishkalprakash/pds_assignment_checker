#include<stdio.h>
#include<string.h>
int main()
{
char A[100];
char c;
int i=0,j,count=0,sent=0,word=1,n,vow=0;
printf("enter the sentences:\n");
while(c!='.')
{
	c=getchar();
	A[i++]=c;
	
}
A[i]='\0';

for(i=0;A[i]!='\0';i++)
{
if(((int)A[i]>='A' && (int)A[i]<='Z') || ((int)A[i]>='a' && (int)A[i]<='z') || (A[i]==' ')||(A[i]==',')||(A[i]=='.')||(A[i]=='\n')||(A[i]=='\t'))
{
count++;
}
}
n=strlen(A);
printf("the length counted wihout using library: ");
printf("%d\n",count);
printf("the length counted using strlen is: ");
printf("%d\n",n);

for(i=0;A[i]!='\0';i++)
{
if((A[i]==' ')||(A[i]=='\n'))
{
word++;
}
}
printf("the number of words: ");
printf("%d\n",word-1);

for(i=0;A[i]!='\0';i++)
{
if(A[i]=='\n')
{
sent++;
}
}
printf("the number of sentences are : ");
printf("%d\n",sent+1);

for(i=0;A[i]!='\0';i++)
{
if((A[i]=='a')||(A[i]=='e')||(A[i]=='i')||(A[i]=='o')||(A[i]=='u')||(A[i]=='A')||(A[i]=='E')||(A[i]=='I')||(A[i]=='O')||(A[i]=='U'))
{
vow++;
}

}
printf("the number of vowels: ");
printf("%d\n",vow);
return 0;
}
