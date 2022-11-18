/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

//declaring the required function
int maxAlphaValue(int s[],int n)
{
    int maxi=0,alpha,i,k,count;
    //checking for every element of array
    for(i=1;i<n;i++)
    {
        count=0;
        for(k=0;k<i;k++)
        {
            if(s[k]%s[i]==0)
            {
                count++;
            }
        }
        if (count>maxi) maxi=count;  //max condition
    }
    return maxi;
}


int main()
{
    int n,s[20],i;
    printf("Enter n : ");
    scanf("%d",&n);

    //taking the user input
    printf("Enter the array s[]: ");
    scanf("%d",&s[0]);
    for(i=1;i<n;i++)
    {
        scanf(" %d",&s[i]);
    }

    //finding and printing the final output
    printf("Output : %d\n",maxAlphaValue(s,n));
    return 0;
}
