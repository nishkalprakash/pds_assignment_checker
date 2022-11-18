/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS Code
*/

#include<stdio.h>

int myHostelChangingTrips(int sum,int ind,int n,int m)
{
    if(ind==n)
    {//base cases
        if(sum==0)
        return 1;
        else
        return 0;
    }
    if(sum==0)//base condition
    {
        return 0;
    }
    int trips=0;
    for (int i=1;i<=m;i++)
    {
        if (i>sum)// when total no. of items is greater than required items exit
        {
            break;
        }
        trips=(trips+myHostelChangingTrips(sum-i,ind+1,n,m));//calculating number of trips
    }
    return trips;
}

int main()
{
    int n,k,m;
    //Taking required inputs
    printf("Enter n = ");
    scanf("%d",&n);
    printf("Enter k = ");
    scanf("%d",&k);
    printf("Enter m = ");
    scanf("%d",&m);
    int p=myHostelChangingTrips(k,0,n,m);//calling recursive function
    printf("\nTrips : %d",p);
    return 0;
}