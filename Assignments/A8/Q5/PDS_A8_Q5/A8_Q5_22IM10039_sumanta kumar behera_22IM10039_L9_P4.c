# include<stdio.h>
# include<string.h>
int main()
{
       int n;
       printf("Number of characters : ");
       scanf("%d", &n);
       char s[n];
       scanf("%s", s);
       for(int i=0; i<n;i++) 
       {
       for(int j=i+1; j<n; j++)
       {  int x=0;
         for(int k=i; k <= j; k++) 
       {
          if(s[k] == s[j+i-k])
       {
            x++; 
       } 
       } if(x == j-i+1)
       {
         for(int m=i; m<=j;m++)
       {
        printf("%c", s[m]);
       } printf("\n");
       } 
       }
       }  return 0;
       }
