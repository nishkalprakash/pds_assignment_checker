/*This program is to find weather the parenthesis in the string in correct order or not*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : LT3
  question : 4*/
#include<stdio.h>
char findClosing(char c)
{
    if (c=='(')
    return ')';
    if (c=='{')
    return '}';
    if (c=='[')
    return ']';
    return -1;
}
int check(char expr[],int n)
{
    if (n==0)
    return 1;
    if (n==1)
    return 0;
    if (expr[0]==')'||expr[0]=='}'||expr[0]==']')
    return 0;
    char closing = findClosing(expr[0]);
    int i, count = 0;
    for (i=1;i<n;i++)
    {
        if(expr[i] == expr[0])
            count++;
        if(expr[i] == closing)
        {
            if (count == 0)
            break;
            count--;
        }
    }
    if(i==n)
    return 0;
    if(i==1)
    return check(expr+2,n-2);
    return check(expr+1,i-1)&&check(expr+i+1,n-i-1);
}
void main()
{
    int n,i;
    char expr[30];
    printf("Enter parenthesis containing string : ");
    scanf("%s",&expr);
    for(i=0;i<30;i++)
    {
      if(expr[i]=='\0')
      {
         break;
      }
      else
      {
         n++;
      }
    }
    if(check(expr, n)==1)
    printf("Matched parenthesis");
    else
    printf("Unmatched parenthesis");
}
