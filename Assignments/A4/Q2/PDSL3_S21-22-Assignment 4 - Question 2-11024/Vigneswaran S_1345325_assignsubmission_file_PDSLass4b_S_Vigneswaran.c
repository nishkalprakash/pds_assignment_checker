/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/
#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int myHostelChangingTrips(int s,int p,int n,int m)
{int t=0;   //Declaring 't' for no.of trips count
    if(p==n)        //Terminating case
        {
        if(s==0)
        {return 1;}
        else
        {return 0;}
        }
    if(s==0)
    {return 0;}

    for (int i=0;i<=m;i++)  //'for'loop including recursion
        {
        if (i>s)    //Breaking the loop when no.of items>required items to be taken
            {break;}
        t=(t+myHostelChangingTrips(s-i,p+1,n,m));   //Evaluating number of trips
        }
    return t;}   //Returning no.of trips to main function


main()
    {int n,k,m,x; //Declaring variables

    printf("Enter the value of n: ");   //Taking required inputs
    scanf("%d",&n);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    printf("Enter the value of m: ");
    scanf("%d",&m);

    printf("n=%d k=%d m=%d",n,m,k);

    x=myHostelChangingTrips(k,0,n,m);   //calling recursive function
    printf("\nNo. of Trips= %d",x);     //printing no of trips
    }
