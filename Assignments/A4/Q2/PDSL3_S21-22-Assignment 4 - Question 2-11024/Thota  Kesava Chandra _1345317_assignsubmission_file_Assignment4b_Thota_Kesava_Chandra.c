/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


/*
assuming that in a day zero belongings can also be shifted
as it is not mentioned that we have to shift everyday once started
i assumed that we can take rest
like 0,6,6,3
6,6,3,0 are different
*/

#include <stdio.h>

// defining the function
int myHostelChangingTrips(int i,int k,int n,int m)
{
    static count =0;
    if (n==0)
    {
        //printf("\n");
        return 0;
    }
    for (int j=0;j<=m;j++)  //no of items for current day
    {
        if (k-j==0)       //total belongings shifted
        {
            count++;
            return 0;
            //printf("\n");
        }

        int temp = myHostelChangingTrips(i,k-j,n-1,m);  // calculating with remaining days and objects
    }
    return count;
}


int main()
{
    int n,k,m,i=0,trips;
    printf("Enter the number of days(n) : ");
    scanf("%d",&n);
    printf("Enter the number of belongings(k) : ");
    scanf("%d",&k);
    printf("Enter the max carrying capacity(m) : ");
    scanf("%d",&m);
    trips = myHostelChangingTrips(1,k,n,m);
    printf("the number of trips : %d \n",trips);
    return 0;
}

