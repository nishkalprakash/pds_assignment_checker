/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: LAB TEST 2
Question: 2
Description: Maximum*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int max(int *a, int n)// recursive function to find max
{
    if(n==1)
    {
        return a[n-1];          // base case
    }
    if(a[n-1]>max(a,n-1))            // Here I have compared the last element versus the last element of the array after deleting that last element(in each recursion)
    {
        return a[n-1];
    }
    else
        return (max(a,n-1));
}
int main()
{
    srand(time(0));// to generate different numbers everytime
    int n,p,q,i;
    int *numbers;
    scanf("%d%d%d",&n,&p,&q);
    if(n<=0)
    {
        printf("Invalid Value of n\n");
        return 0;
    }
    if(p>q)
    {
        printf("p should be less than or equal to q\n");
        return 0;
    }
    numbers=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        numbers[i]=rand()%(q-p+1)+p;// random number generation
    }
    printf("List = [");
    for(i=0; i<n; i++)
    {
        if(i==n-1)
            printf("%d",numbers[i]);
        else
            printf("%d, ",numbers[i]);
    }
    printf("]\nMax = %d",max(numbers,n));//calling the max function

    return 0;
}
