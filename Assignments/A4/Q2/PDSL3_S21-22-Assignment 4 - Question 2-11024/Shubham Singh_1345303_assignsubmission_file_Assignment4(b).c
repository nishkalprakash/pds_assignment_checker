/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 4(b)
*/

#include <stdio.h>

// Function to count the number of ways to divide the number N
int myHostelChangingTrip(int pos, int left,int n, int L, int R)
{
    // Base Case
    if (pos == n)
    {
        return (left == 0) ? 1 : 0;
    }
    // if k is divided completely
    // into less than n groups
    if (left == 0)
        return 0;
    int answer = 0;
    // put all possible values greater equal to prev
    for (int i = L; i <= R; i++)
    {
        if (i > left)
            break;
        answer = (answer + myHostelChangingTrip(pos + 1,left - i, n, L, R)); // recursing this
    }
    return answer; // final output means number of ways
}

int main()
{
    int n, k, m, i = 1;
    printf("Enter n,k and m = ");
    scanf("%d%d%d", &n, &k, &m); // taking input as n= number of days, k= total number of items in room
    // and m= maximum number of items to carry per trip , i = initial value
    printf("Trips = %d\n", myHostelChangingTrip(0, k, n, i, m));
    return 0;
}

