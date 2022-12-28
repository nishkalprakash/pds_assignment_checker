/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 6
 Description : Program that finds the co-prime pairs out of a given set of inputs 
*/

#include <stdio.h>						//including the standard input output library

int n;

int gcd(int a,int b)
{
    int i,c=0;							//declaring the required variables
    int min=(a<b)?a:b;						//finding the minimum out of a and b
    for(i=1;i<=min;i++)
    {
        if((a%i==0)&&(b%i==0))
        c++;							//the counter c gets incremented if there is a common divisor
    }
    return c;							//returns c
}

void pair(int a[])
{
    int i,j,x;										//declaring the required variables
    printf("Co-prime pairs:\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=gcd(a[i],a[j]);								//calling the gcd function
            if(x==1)									//co-prime if x==1
            {
                printf("(%d,%d) ",a[i],a[j]);
            }
        }
    }
    printf("\n");
}

int main()
{
    int i,f=0;
    printf("Enter the number of elements in the array: ");				//prompting the user to give input
    scanf("%d",&n);									//taking input from the user
    if(n<0)
	f=-3;										//initializing f = -3 if n is negative
    float b;
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&b);									//taking input
        if(b<0)
        {
            f=-1;									//initializing f = -1 if entry is negative
            break;
        }
        else if((int)b!=b)								//checking if the entry is a floating number
        {
            f=-2;									//initializing f = -2 if entry is a floating number
            break;
        }
	a[i]=b;
    }
    if(f==0){
        pair(a);									//calling the pair function
    }
    else if(f==-1)
    {
        printf("Invalid entries: All should be positive numbers\n");			//this will be printed if any of the input entries is a negative
    }
    else if(f==-2)
    {
        printf("Invalid entries: All should be integer numbers\n");			//this will be printed if any of the input entries is a floating number 
    }
    else if(f==-3)
    {
        printf("Invalid input\n");							//printing Invalid input if value of n<0
    }
    return 0;
}
