// NAME - AYUSH KUMAR MADHU
// ROLL NO - 21AG30007
// SECTION - 03
// DEPT- AGRICULTURE AND FOOD ENGINEERING

#include <stdio.h>
// Recursive function to print all the possible combinations of numbers from 1 to m having sum equal to k.

int myHostelChangingTrip(int position, int left, int n, int L, int R)
{
    int answer = 0;

    if (position == n)
    {
        if (left == 0)
            return 1;
        else
            return 0;
    }
    if (left == 0)
        return 0;
   
    for (int i = L; i <= R; i++)
    {
        if (i > left)
            break;
        answer = (answer + myHostelChangingTrip(position + 1,
                                                left - i, n, L, R));
        // If the sum becomes equal to k then it will print the combination
    }
    return answer;
}

int main()
{
    int n, k, m, i = 1;
    printf("Enter n, k, m separated by space : ");
    scanf("%d %d %d", &n, &k, &m);

    // print all combinations of numbers from 1 to m having sum k
    printf("Trips = %d\n", myHostelChangingTrip(0, k, n, i, m));
    return 0;
}