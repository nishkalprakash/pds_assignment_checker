/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 3
Question : 2
*/
#include <stdio.h>

int string_length(char a[])
{
    int i,l;
    for(i=0;a[i]!='/0';i++)
    {
     l = i;
    }
    return l;
}

int main()
{
    char s1[100],s2[100];
    int l1,l2,i,n ;
    int p0=0,p1=0,p2=0;
    printf(" Enter the two sequences :");
    printf(" Enter Sequence-1 :");
    scanf("%s",s1);
    printf(" Enter Sequence-2 :");
    scanf("%s",s2);

    l1 = string_length(s1);
    l2 = string_length(s2);
    printf(" l1 = %d ; l2 = %d",l1,l2);
    if(l1 == l2)
    {
      printf(" Sequence have same length \n");
      for(i=0;i<l1;i++)
      {
        if ( s1[i] == s2[i] )
        {
            printf(" 0 ");
        }

        else
        {
            p1 += 1;
            printf(" 1 ");
        }
      }

    }

    if(l1!=l2)
    {
        printf(" Sequences have different lengths ");

    }
}
