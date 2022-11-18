//Name:-Shubham Gajanan Warkad
//Roll No. 21ME30072
//Lab Assignment-4       Question-2
#include<stdio.h>

int My_hostel_changing_trips(int sumation,int position,int m,int n)
{
    if(position==m)
    {
        if(sumation==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(sumation==0)
    {
        return 0;
    }
    int trips=0;
    for (int j=0;j<=n;j++)
    {
        if (j>sumation)                          // when total no. of items is greater than required items exit
        {
            break;
        }
        trips=(trips+My_hostel_changing_trips(sumation-j,position+1,m,n));        //calculating number of trips
    }
    return trips;
}

int main()
{
    int m,k,n;                   //Declaring required inputs
    printf("Enter n = ");
    scanf("%d",&m);
    printf("Enter k = ");
    scanf("%d",&k);
    printf("Enter m = ");
    scanf("%d",&n);
    int cal= My_hostel_changing_trips(k,0,m,n) ;                     //calling recursive function
    printf("\nAll possible journeys : %d",cal);
    return 0;
}