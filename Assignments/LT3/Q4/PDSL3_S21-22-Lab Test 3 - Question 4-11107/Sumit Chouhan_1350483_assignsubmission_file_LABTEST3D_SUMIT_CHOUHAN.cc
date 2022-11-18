#include<stdio.h>
int main ()
{int x=0,y=0,z=0,,m,n,o,i,j,k,s;
char table[10];
printf("Enter expression: ");
scanf("%s",table);
for(i=0;i<10;i++)
if (table[i]='{') x++;
for(j=0;j<10;j++)
{if (table[j]='(') y++;}
    for(k=0;k<10;k++)
{if (table[k]='[') z++;}
printf("%d==",x);
m=x%2;
n=y%2;
o=z%2;
s=m+n+o;
if (s=0)
    printf("Matched parenthesis");

return 0;
}
