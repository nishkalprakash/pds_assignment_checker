#include <stdio.h>

int n,k,m;

int myHostelChangingTrips(int x, int y, int z, int w, int count)
{
    if(x>6||y>6||z>6||w>6)                                                  //no of trips are same
    {
        return count;
    }
    if(x + y + z + w == k)                                                 //finding the no. of possible sum
    {
        printf("(");
        if(x!=0)
        {
            printf("%d,",x);
        }
        if(y!=0)
        {
            printf("%d,",y);
        }
        if(z!=0)
        {
            printf("%d,",z);
        }
        if(w!=0)
        {
            printf("%d",w);
        }
        printf(")");
        return count + 1;                          //one way of the trip
    }
    return myHostelChangingTrips(x + 1, y, z, w, count) + myHostelChangingTrips(x, y + 1, z, w, count) + myHostelChangingTrips(x, y, z + 1, w, count) + myHostelChangingTrips(x, y, z, w + 1, count);
}

int main()
{

    printf("Enter n = ");              //enter the values repectively
    scanf("%d",&n);

    printf("Enter k = ");
    scanf("%d",&k);

    printf("Enter m = ");
    scanf("%d",&m);

    int arr[n];

    int p=myHostelChangingTrips(0,0,0,0,0);

    printf("\nTrips : ",p);      //the final number of combinations

    return 0;
}
