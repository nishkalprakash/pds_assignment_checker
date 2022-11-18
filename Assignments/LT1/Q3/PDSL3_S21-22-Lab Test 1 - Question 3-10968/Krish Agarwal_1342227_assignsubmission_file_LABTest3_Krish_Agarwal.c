/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    //Variable declaration
    int n,a,b,ta,tb,sa,sb,da,db,apoint=0,bpoint=0,abad=0,bbad=0;
    //Taking number of rounds as input
    printf("Number of rounds: ");
    scanf("%d",&n);
    printf("\n");
    srand(time(0));//Generating seed for time calculation

    for(int i=0;i<n;i++)
    {
        sa=0;
        sb=0;
        da=0;
        db=0;
        printf("Round-%d --> ",i+1);
        a=(rand()%(1000-5+1))+5;//Generating numbers
        b=(rand()%(1000-5+1))+5;//Generating numbers
        ta=a;
        tb=b;
        printf("A's number: %d\tB's number: %d\n",a,b);//Displaying 
        while(ta!=0)//Calculating sum of digits and number of digits
        {
            sa+=(ta%10);
            ta/=10;
            da++;
        }
        while(tb!=0)//Calculating sum of digits and number of digits
        {
            sb+=(tb%10);
            tb/=10;
            db++;
        }
        if(da!=db)//Checking for equal number of digits
        {
            printf("    \tA's point: %d\tB's point: %d\n",da,db);
            apoint+=da;
            bpoint+=db;
            if(da>db)
            {
                printf("    \tA's badge: 1\tB's badge: 0\n");
                printf("\t---- A wins round %d ----\n",i+1);
                abad++;
            }
            else if(da<db)
            {
                printf("    \tA's badge: 0\tB's badge: 1\n");
                printf("\t---- B wins round %d ----\n",i+1);
                bbad++;
            }
            else
            {
                printf("    \tA's badge: 0\tB's badge: 0\n");
                printf("\t---- Noone wins round %d ----\n",i+1);
            }
        }
        else
        {
            printf("\t    A's point: %d\tB's point: %d\n",sa,sb);
            apoint+=sa;
            bpoint+=sb;
            if(sa>sb)
            {
                printf("\t    A's badge: 1\tB's badge: 0\n");
                printf("\t---- A wins round %d ----\n",i+1);
                abad++;
            }
            else if(sa<sb)
            {
                printf("\t    A's badge: 0\tB's badge: 1\n");
                printf("\t---- B wins round %d ----\n",i+1);
                bbad++;
            }
            else
            {
                printf("\t    A's badge: 0\tB's badge: 0\n");
                printf("\t---- Noone wins round %d ----\n",i+1);
            }
        }
    }
    int tota=apoint*abad;
    int totb=bpoint*bbad;
    printf("\nFinal result => A's total score: %d,\tB's total score: %d\n",tota,totb);//printing the number of points
    //Deciding winner
    if(tota>totb)
    {
        printf("\t\t--- A wins the game ---\n");
    }
    else if(tota<totb)
    {
        printf("\t\t--- B wins the game ---\n");
    }
    else
    {
        printf("\t\t--- Draw ---\n");
    }
    return 0;
}