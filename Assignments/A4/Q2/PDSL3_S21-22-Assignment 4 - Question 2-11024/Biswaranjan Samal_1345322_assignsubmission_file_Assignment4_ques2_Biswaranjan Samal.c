/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:4,Question 2
*/

#include <stdio.h>
int trips = 0;
void myHostelChangingTrips(int k,int i,int n,int m,int back[])
{
    if(k == 0)  //k==0 means shifting completed
    {
        int j;
        printf("( ");
        for(j = 0; j < n-1; j++)
        {
            printf("%d, ",back[j]);   //prints  each elements of each arrangements arrangements
        }
        printf("%d )\n",back[j]);
        trips++;                        // prints all possible arrangements
        return;
    }
    if(i > n)   // I>n means it took more than n days
        return;
    int j;

    for(j = 0; j <= m && j <= k; j++)
    {
        back[i-1] = j;
        myHostelChangingTrips(k-j,i+1,n,m,back);   //updates the value after each round and after n-1 round.k-i stuff remains
        back[i-1] = 0;
    }
    return;
}

int main()
{
    int n,m,k;
    printf("Enter Number of Days Left:");
    scanf("%d",&n);
    printf("Total amount of belongings:");
    scanf("%d",&k);
    printf("maximum number of items per trip:");
    scanf("%d",&m);

    int back[10000];
    int i;
    for(i = 0; i < n; i++)
        back[i] = 0;  //initialised to 0
    myHostelChangingTrips(k,1,n,m,back); //function called
    printf("Trips:%d\n",trips);
}
