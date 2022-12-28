/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 6
 Description : Program that finds the first k terms of the given series
*/

#include <stdio.h>										//including the standard input output library

int print_term(int n)
{
    if(n==0||n==1||n==2)
    {
        return n;										//return 0,1,2 for n=0,n=1,n=2 respectively
    }
    else if(n>2)
    {
        return 3*(print_term(n-1))*(print_term(n-2))-2*(print_term(n-2))*(print_term(n-3))+1;
    }
    else
    {
        return -1;										//return -1 in any error case
    }
    
}
int main()
{
    int k,i,f=0;										//declaring the required variables
    printf("Enter the number of terms: ");							//prompting the user for input
    scanf("%d",&k);										//taking the input
    if(k<0)
    	f=-1;											//assigning f=-1 if k<0
    int a[k];											//declaring an array of k elements
    for(i=0;i<k;i++)
    {
        a[i]=print_term(i);									//storing the returned value of print_term function in the array 
        if(a[i]==-1)
	{
		break;
		f=-1;										//assigning f=-1 in case of an error
	}
    }
    if(f==0)
    {
        for(i=0;i<k;i++)									//using loop to print the terms of the series
        {
            if(i==0)
            printf("%d",a[i]);
            else
            printf(",%d",a[i]);
        }
	printf("\n");
    }
    else
    {
        printf("Invalid input\n");								//printing Invalid input if f==-1
    }
    return 0;											//the int main() will return 0
}
