/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
int Trips=0;                                     //global variable to store number of trips
void myHostelChangingTrips(int k,int i,int n,int m)
{
    if(m*(n-i+1)<k)
    {
        return;
    }
    if(k==0&&i<=n+1)                             //if all things are moved and the  we have a valid trip
    {             
        Trips++;                                 //so increment number of trips
        return;
    }
    int j;
    for(j=1;j<=m;j++)
    {
        if(k-j>=0)
        myHostelChangingTrips(k-j,i+1,n,m);      //assume that j things are moved on ith day
                                                 //so update the day number to i+1
                                                 //and decrease things left to be removed to k-j
    }
    return;
}
int main()
{
    int n,k,m;                                 // ______________________________________________
    printf("n=");
    scanf("%d",&n);
    printf("k=");                                //here we take the inputs
    scanf("%d",&k);
    printf("m=");
    scanf("%d",&m);                             //______________________________________________
    myHostelChangingTrips(k,1,n,m);
    printf("All possible journeys: %d", Trips);  //output
    printf("\n");
    
    return 0;
}