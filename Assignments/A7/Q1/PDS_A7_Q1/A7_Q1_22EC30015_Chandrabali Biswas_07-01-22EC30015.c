/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 1
Description: Perfect number
*/
#include <stdio.h>   //Header files
#include <stdlib.h>
#include <time.h>
int perfect(int n)  //checks for perfect numbers
{
    int s=0;
    for(int i=1;i<=n-1;i++)
    {
        if(n%i==0)
            s+=i;
    }
    if(s==n)
        return 1;  //if n is perfect
    else           //if n is not perfect
        return 0;
}
int main()  //main function
{
    int n,p=2,q=1000,c=0; int* a;
    time_t  t;
    srand(time(0));
    printf("Enter number of elements:");
    scanf("%d",&n);    //takes input from user
    a = (int*)malloc(n*sizeof(int));  //allocates memory for a

    for(int i=0;i<n;i++){

        *(a+i)=p+rand()%q; //returns a random number
    }
    printf("%d-random number array:",n);
    for(int i=0;i<n;i++)
        printf("%d ",*(a+i));  //prints the array
    printf("\n");
    for(int i=0;i<n;i++)
    {

        if(perfect(*(a+i))==1)  //calls perfect()
            c++;
    }
    if(c==0)  //if there are no perfect numbers
        printf("No perfect number found");
    else if(c==1)  //if there is only 1 perfect number
    {
        for(int i=0;i<n;i++)
       {
        if(perfect(*(a+i))==1)
            {
                printf("%d is a perfect number.",*(a+i));
                break;
            }
       }
    }
    else //if there are more than 1 perfect numbers
    {
        printf("\n");
        for(int i=0;i<n;i++)
       {
        if(perfect(*(a+i))==1)
            {
                c++;
                if(c==1)
                    printf("%d",*(a+i));
                else
                    printf(", %d",*(a+i));
            }
       }
       printf(" are perfect numbers");

    }
    free(a);
    return 0;  //end


}
