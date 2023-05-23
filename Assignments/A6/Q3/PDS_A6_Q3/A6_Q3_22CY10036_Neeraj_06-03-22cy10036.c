#include<stdio.h>
void main()
{
char a[100],temp=' ';
int i,l;
printf("Enter the string : ");
gets(a);
for(l=0;a[l]!='\0';l++);
for(i=0;i<l/2;i++)
{
if(a[i]!=a[l-i-1])
{
temp=a[i];
a[i]=a[l-i-1];
a[l-i-1]=temp;
}
}
(temp==' ')? printf("The reverse string is %s i.e. The string is palindrome\n",a) :
printf("The string is not palindrome. The reverse string is %s \n",a);
}
