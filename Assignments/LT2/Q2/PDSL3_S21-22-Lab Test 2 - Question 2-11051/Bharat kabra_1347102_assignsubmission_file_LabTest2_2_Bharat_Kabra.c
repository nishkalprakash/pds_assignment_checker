/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Lab Test: 2
*/
#include <stdio.h>
int y;
int maxAlphaValue(int S[])
{
    int count=0;
    int max=0;
    int i=0,j=0;
    while(i<y)//while iteration goes till all the elements
    {
        for(j=0;j<i;j++)//taking j such that its less than i, so as to check divisibility of s[i] with s[j]
        {
            if(S[j]%S[i]==0)//checking if s[i] is divisible by s[j]
                count++;//increasing value of count by 1
        }
        if(count>max)//if count greater than max, then max will be count
            max=count;
        count=0;//count is initialised 0 again so that it does not add its previous value for the next iteration
        i++;//i needs to be increased for iteration and for ending the while loop
    }
    return max;
}
int main()
{
    int i=0;
    printf("Enter the number of elements:");
    scanf("%d",&y);
    int S[y];
    printf("Enter the elements of the array:");
    for(i=0;i<y;i++)
    {
        scanf("%d",&S[i]);//taking input into the array
    }
    printf("%d",maxAlphaValue(S));//calling the function
    return 0;
}