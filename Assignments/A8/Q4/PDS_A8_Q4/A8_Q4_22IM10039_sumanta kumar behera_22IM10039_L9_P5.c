# include<stdio.h>
int main ()
{
   int x, y;
   printf("Enter the number of characters in s1 and s2 : ");
   scanf("%d %d", &x, &y);
   char s1[x], s2[y];
   printf("Enter the characters of s1 : ");
   for(int i=0; i<x; i++)
   {
   scanf("%c", &s1[i]);
   }
   printf("Enter the characters of s2 : ");
   for(int i=0; i<y; i++)
   {
   scanf("%c", &s2[i]);
   }


   int f=0;
   for(int j=0; j<y; j++)
   { 
   if(s2[j]==s1[0])
   {
    int m=0;
    for(int k=0; k<x;k++)
   {
     if(s1[k]==s2[j+k])
   {
     m++;
   } 
   } 
    if(m==x)
   {
     f = f+m;
   }
   }
   } printf("%d\n", f);
     return 0;
   }
