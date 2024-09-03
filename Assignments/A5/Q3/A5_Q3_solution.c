// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
#include <stdio.h>
#define N 100 // Maximum number of elements in the array
#define M 10  // Maximum number of elements in the array

int main()
{
    char haystack[N]; // Haystack is the array in which we search for the needle
    char needle[M];   // Needle is the small pattern which we search for in the haystack
    char c;
    int haystack_len = 0, needle_len = 0; // haystack_len stores the length of the haystack, needle_len stores the length of the needle
    int i, j, k, ctr = 0;                 // i,j,k are loop variables, ctr is the number of times the needle is repeated in the haystack
    int m = 0, max = 0;                   // m stores the current number of times the needle is repeated in the haystack
    // Read the Haystack
    while ((c = getchar()) != '\n')
    {
        if (c == '0' || c == '1')
            haystack[haystack_len++] = c;
        else
            return printf("\nError: Invalid character in the haystack");
    }

    // Read the Needle
    while ((c = getchar()) != '\n')
    {
        if (c == '0' || c == '1')
            needle[needle_len++] = c;
        else
            return printf("\nError: Invalid character in the needle");
    }

    // Print the Haystack
    printf("\nHaystack: ");
    for (i = 0; i < haystack_len; i++)
        printf("%c", haystack[i]);

    // Print the Needle
    printf("\nNeedle: ");
    for (i = 0; i < needle_len; i++)
        printf("%c", needle[i]);

    // Error checking
    if (needle_len > haystack_len)
        return printf("\nError: needle_len > haystack_len");

    // Search for the longest repeating sequence of the small pattern
    for (i = 0; i < haystack_len; i++)
    {
        if (haystack[i] == needle[0])
        {
            for (j = i, k = 0; j < haystack_len; j++, k++)
                if (haystack[j] != needle[k % needle_len])
                    break;
            m = k / needle_len;
            if (m != 0)
            {
                if (m > max)
                    max = m;
                ctr++;
            }
        }
    }
    if (ctr == 0)
        printf("\nNo repeating sequence found");
    else
    {
        printf("\nTotal No of Matches: %d", ctr);
        printf("\nLongest repeating match count: %d", max);
        // for (i = start; i < end; i++)
        //     printf("%c", haystack[i]);
        for (i = 0; i < haystack_len; i++)
        {
            if (haystack[i] == needle[0])
            {
                for (j = i, k = 0; j < haystack_len; j++, k++)
                    if (haystack[j] != needle[k % needle_len])
                        break;
                m = k / needle_len;
                if (m == max)
                {
                    printf("\n\t[%d : %d] - ", i, i + max * needle_len);
                    for (k = i; k < i + max * needle_len; k++)
                        printf("%c", haystack[k]);
                }
            }
        }
    }
    return printf("\n");
}
