/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 1
Description:Finding Mean using Recursive Function
*/
#include <stdio.h> //Header file
float mean(int* a,int n)
{
    if(n==1)  //base case (when array has a single element)
        return a[0];
    if(n%2==0) //if number of elements is even
        return (mean(a,n/2)+mean(a+n/2,n/2))/2.0;
    else if(n%2!=0) //if number of elements is odd(central number considered separately)
        return (mean(a,n/2)+*(a+n/2)+mean(a+n/2+1,n/2))/3.0;
}
int main()   //main method
{
    int n,temp;
    int* a;
    printf("Enter the number of elements:");
    scanf("%d",&n);     //takes input from user
    a = (int*)malloc(n*sizeof(int));  //dynamically allocates memory
    printf("Enter the integers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);  //taking input in the arrays
    }
    printf("List = [");
    for(int i=0;i<n;i++)  //printing the input array
    {
        if(i==0)
            printf("%d",a[i]);
        else
            printf(",%d",a[i]);
    }
    printf("]\n");

    for(int i=0;i<n;i++)   //Sorting the array using Bubble Sort
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Mean = %.2f",mean(a,n)); //printing mean  , calling function mean()
    free(a);
    return 0;   //end

}
