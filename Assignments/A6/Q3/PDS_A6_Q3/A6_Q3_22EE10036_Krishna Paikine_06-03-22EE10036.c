#include<stdio.h>

int main()
{
int i, flag, len = 0;
char name[25];
scanf ("%s", name); /* Read Name */
len = 0; while (name[len]) len++; /* Find Length of String */
flag = 0;
/* Loop below checks for palindrome by comparison*/
for (i = 0; i < len; i++) {
if (name[i] != name[len-1-i]) flag = 1;
}
if (flag == 0) printf ("%s is a Palindrome\n", name);
else printf ("%s is NOT a Palindrome\n", name);
return 0;
}
