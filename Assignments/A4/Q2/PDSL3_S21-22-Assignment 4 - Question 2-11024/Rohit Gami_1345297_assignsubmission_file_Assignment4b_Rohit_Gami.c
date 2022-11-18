#include <stdio.h>
static int mod = 1000000007;
static int calculate(int pos, int left,
                     int k, int l, int m)
{

    // Base Case
    if (pos == k)
    {
        if (left == 0)
            return 1;
        else
            return 0;
    }

    // If N is divides completely
    // into less than k groups
    if (left == 0)
        return 0;

    int answer = 0;

    // Put all possible values
    // greater equal to prev
    for(int i = l; i <= m; i++)
    {
       if (i > left)
           break;
       answer = ((answer +
                  calculate(pos + 1,left - i,
                            k, l, m)) % mod);
    }
    return answer;
}

// Function to count the number of
// ways to divide the number N
static int myHostelChangingTrips(int n, int k,
                             int l, int m)
{
    return calculate(0, n, k, l, m);
}


int main()
{
    int n,k,m,l;
    //initialize n,k,m
    printf("Enter the number of days within you have to transfer your belongings say n\n");
    scanf("%d",&n);
    printf("Enter the total numbers of items say k(k>n)\n");
    scanf("%d",&k);
    printf("Enter maximum number of items  you can carry per trip 'm'\n");
    scanf("%d",&m);
    l=1;
    printf("All possible Journeys : %d\n",myHostelChangingTrips(n, k, l, m));
}
