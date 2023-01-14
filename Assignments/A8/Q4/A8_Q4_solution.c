// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to count the occourance of a substring

#include <stdio.h>
int main()
{
    char S1[10], S2[10]; // S1=Substring, S2=Main String
    int l1=0, l2=0;            // l1=len of S1, l2=Len of S2
    int i, ptr, ctr=0;       // i=loop variable, ptr=pointer to substring, ctr=counter
    
    printf("Enter S1: ");
    scanf("%s", S1);
    
    printf("Enter S2: ");
    scanf("%s", S2);

    for(;S1[++l1]!='\0';);  // Counting String Len of S1
    for(;S2[++l2]!='\0';);  // Counting String Len of S2

    // printf("%d,%d\n",l1,l2);

    for (i = 0, ptr = 0; i < l2; i++, ptr++)
    {
        if (S2[i] != S1[ptr])
            ptr = 0;    // Reset pointer of substring in case of no match
        if (ptr == l1-1)  // If full substring matched then increment ctr and reset pointer
        {
            ctr++;
            ptr = 0;
        }
    }
    printf("%d\n", ctr);
    return 0;
}