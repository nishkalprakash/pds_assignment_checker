#include <stdio.h>

int Versatile_scanf()
{

}


void()



int word_count()
{
    char A[100], B[10] = {'a' ,'e','i' ,'o','u' ,'A' ,'E' ,'I' ,'O' ,'U'};
    int c[10] = {0,1,2,3,4,5,6,7,8,9};
    char D[8] = {'.','!','@','#','&','<','>','?'};

    int i, j, k, l, len, vowels=0,numbers=0, specials=0;
    int blank=0;
    scanf ("%s", A);
    printf ("A = %s\n", A);
    for (len = 0; A[len] != '\0'; len++);
    printf ("Length = %d\n", len);
    for (i=0; i<len; i++)
    {
        for (j=0; j<10; j++)
        {
            if(A[i] == B[j]) vowels++;
        }
         for (k=0; k<10; k++)
        {
            if(A[i] == C[k]) numbers++;
        }
        for (l=0; l<10; l++)
        {
            if(A[i] == C[l]) specials++;
        }
        if(A[i]== ' ') blank++;

    }
    printf ("Number of numerical charachters= %d \n", numbers);
    printf ("Number of letters= %d \n", words1);
    printf("Number of words=%d", blank+1);
    printf("Number of Special Printable charachters=%d", specials);
    printf("Consonants=%d", length-words1-blank-specials-numbers);
}
int main()
{
    int i;
    char str[];
    char len=0;
    for(i=0; i<length)

    }
