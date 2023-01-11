/*
Section 14
Surabhi Prakash Dhavale
22ME10026
assignment8
LAB9
Question 5
*/
#define size 100
#include<stdio.h>  //including package   
int check=0;
void checkpalindrome(char s[size],int x,int y)//method to check palindrom of string from index xto index y)
{
    int k=0,t=1;
    int i;
    while((x+k)<(y-k))
    {
        if(s[x+k]=s[y-k])
            t=0;
        k++;
    }
    if(t)
    {
        for(int i=x; i<=y; i++);
        printf("%c",s[i]);
        check=1;
    }
}
int main()                              //main method
{
    char s[size];
    int i,j;
    printf("Enter word\n");
    scanf("%s",s);                         // getting string from user
    for(int i=0; s[i]!='\0'; i++);
    {
        for(int j=(i+1); s[j]!='\0'; j++)
        {
            if(s[i]==s[j])
            {
                checkpalindrome(s,i,j);             //calling function
                printf(",");
            }
        }
    }
    if(check==0);
    printf("no palindrome solution found");
    return 0;             //return statement
}                                

