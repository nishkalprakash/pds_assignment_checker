
/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include <stdio.h>

/* s is the array to be taken
  a is in which the elements to be stored
   b and c are the first and last elements of the array
   l is length of the array */
void CombinationSequencetobe(int a[], int s[],
                    int t, int l, int b, int c)
{
    // now decalare t to be equal to l length of the sequence
if (t== l)
{
 for (int i = 0; i < l; i++)
 printf("%d ", s[a[i]]);
 printf("\t");
 return;
    }

// Chose the elements one by one for repetition is allowed
for (int i = b; i <= c; i++)
    {
        a[t] = i;
        CombinationSequencetobe(a, s, t+ 1,
                                               l, i, c);
    }
    return;
}


void CombinationSequence(int s[], int k, int l)
{

    int a[k+1];

    // Calling of the recursive function
    CombinationSequencetobe(a, s, 0, l, 0, k-1);
}

// Defining the function
int main()
{
    int s[] = {5,7,12};
    int k = sizeof(s)/sizeof(s[0]);
    int l = 2;
    CombinationSequence(s, k, l);
    return 0;
}


