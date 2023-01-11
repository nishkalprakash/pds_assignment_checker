#include<stdio.h>
int main()
{
char s[100];
printf("Enter the string");
scanf("%d",s);
int length=0;
for(int i=0;s[i]!='\0';i++)
{
length ++;
}

return 0;
}
