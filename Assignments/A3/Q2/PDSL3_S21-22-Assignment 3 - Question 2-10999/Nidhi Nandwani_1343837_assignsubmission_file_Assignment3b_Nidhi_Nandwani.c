/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>

int length(char s[])
{
    // calculating the length of string
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}


int main()
{
    char s1[30], s2[30];
    printf("Sequence 1 : ");
    scanf("%s", s1);// taking sequence 1 from user
    printf("Sequence 2: ");
    scanf("%s", s2); // taking sequence 2 from user
    int l1, l2;
    l1 = length(s1);
    l2 = length(s2);
    
    if(l1 == l2)
    {
        printf("Penalty: ");
        int penalty[l1];int sum=0;
        for(int i=0; i<l1; i++)
        {
            if(s1[i] == s2[i])
            penalty[i] =0;
            else 
            penalty[i] = 1;
            sum =sum+penalty[i];
            printf("%d ", penalty[i]);

        }
        printf("Similarity score = %d", sum);
        
    }
}