/**********************************************************************
 * Name : Tanya Jain
 * Roll Number : 21MI10048
 * Section : 3
 *********************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int pow(int s, int t);
int max(int s, int t);

int main()
{
    //getting the input
    printf("Enter any 2 digits that are seperated by space: ");
    int g; int h;
    scanf("%d %d", &g, &h);

    int number = g*pow(10,0) + g*pow(10,1) + g*pow(10,2) + g*pow(10,3) + g*pow(10,4);
    if(number%(g+h) != 0)
    {
    printf("\n\n%d\n", number);
    }
    //defining the algo
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int pumber = number;
            for(int k=0; k<= (i-j)/2; k++)
            {
                pumber = pumber - g*pow(10,j+k) + h*pow(10,j+k);
                if((pumber)%(g+h) != 0 )
                {
                printf("%d\n", pumber);
                }
            }
        }
    }
    number = h*pow(10,0) + h*pow(10,1) + h*pow(10,2) + h*pow(10,3) + h*pow(10,4);
    if(number%(g+h) != 0)
    {
    printf("%d\n", number);
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int pumber = number;
            for(int k=0; k<= (i-j)/2; k++)
            {
                pumber = pumber - h*pow(10,j+k) + g*pow(10,j+k);
                if((pumber)%(g+h) != 0 )
                {
                printf("%d\n", pumber);
                }
            }
        }
    }
    return 0;
}
// defining functions
int pow(int s, int t)
{
    if(t==0)
        return 1;
    return s*pow(s,t-1);
}

int max(int s, int t)
{
    if(s>t)
        return s;
    else
        return t;
}
