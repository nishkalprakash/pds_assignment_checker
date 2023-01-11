#include<stdio.h>

/*
    PDS LAB ASSIGNMENT - 8
    DIPESH GOEL
    22NA30011
    PROBLEM - 5
*/

int String_Length(char S[])
{
    int i;
    for (i=0;S[i]!='\0';i++);
    return i;
}

int main()
{
    char S1[20], S2[50];
    printf("Enter S1: ");scanf("%s",S1);
    printf("Enter S2: ");scanf("%s",S2);

    int S1_len, S2_len;
    S1_len=String_Length(S1);
    S2_len=String_Length(S2);
    //printf("%d\n",S1_len);

    int count=0;
    for (int i=0;S2[i]!='\0';i++){
        for (int j=0;S1[j]!='\0';j++){
            if (S1[0]==S2[i])
            {
                while (S1[j]==S2[i])
                {
                    i++;
                    j++;
                    //printf("i = %d, j = %d  ", i,j);
                }
                if (S1[j]=='\0') count++;
            }

        }
    }
    printf("Count = %d",count);
    return 1;
}
