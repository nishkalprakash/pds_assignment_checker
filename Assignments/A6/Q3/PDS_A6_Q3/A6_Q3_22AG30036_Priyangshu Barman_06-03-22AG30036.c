#include<stdio.h>
int main()
{

   int n, A[100], j;
   scanf ("%d", &n);
   for (j=0; j < n; ++j)
   scanf ("%d", &A[j]);
   for (j=n-1; j >= 0; --j)
   printf ("%d", A[j]);
   printf("\n");
   return 0;
}
int ana(char[],char[])
{
    char ar1[20],ar2[20];
    int count;
    scanf("%s", ar1);
    scanf("%s", ar2);
    count = ana(ar1,ar2);
    if(count ==1)
        printf("%s and %s are anagrams",ar1,ar2);
    else
        printf("%s and %s are not anagrams",ar1,ar2);
}
int palindrome(char str[20])
{
    int i, flag, len = 0;
    char str[20];
    scanf("%s", str);
    while(str[len])
        len++;
    flag = 0;
    for(i = 0;i < len; i++)
    {
        if(str[i] != str[len-1-i])
            flag = 1;
    }
    if(flag == 0)
        printf("%s is a palindrome\n", str);

       else
       printf("%s is not a palindrome\n", str);
}
