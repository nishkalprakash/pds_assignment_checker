// A3_Q1_Solution
// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to check for valid TIME in 24H format

#include <stdio.h>
int main()
{
    // Stores Seconds, Minutes, Hours (User Defined)
    int S, M, H;
    
    printf("Enter Time in SS MM HH: ");
    scanf("%d%d%d", &S, &M, &H);

    // NOTE: (0 <= S < 60) is not correct in C.
    if ((0 <= S && S < 60) && (0 <= M && M < 60) && (0 <= H && H < 24)) 
        printf("Valid time - %d:%d:%d\n", H, M, S);
    else
        printf("Invalid time\n");
    
    return 0;
}
