/*
sec:14
Krithanya
22HS10030
assignment 8
desc:string q4
*/
#include <stdio.h>
int main()
{
int n1,n2;
printf("enter length of string1 \n");
scanf("%d",&n1);
char s1[n1];
printf("enter string 1");
scanf("%s",s1);
printf("enter length of string2 \n");
scanf("%d",&n2);
char s2[n2];
printf("enter string 2");
scanf("%s",s2);
int count =0;
for ( int i=0;i<n2;i++)
{
	if
		((s1[0]==s2[i])&&(s1[1]==s2[i+1])&&(s1[2]==s2[i+2]))
		{
		count++;
		}
}
printf(" s1 appears in s2 %d times",count);
return 0;
}

