/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>


int a[50],c=0,r[50],e=0;

int minTotalIqDiff(int m,int b[],int n) // Defining integer minTotalIqDiff
{
    int d=0,i,j,max,sum=0,p=1,l=0,min;

    if(c==n)
    return d;
    
    max=b[0]; min=b[0];
    for(i=0;i<n;i++)
    {   
        p=1;
        for(j=0;j<c;j++)
        {   
            if(b[i]==a[j])
            p=0;
        }
        if(p==1)
        {   
            if(l==0)
            { max=b[i]; min=b[i]; }

            sum=sum+b[i];
            l++;
        }    
    }
    sum=sum/(m-e);

    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<c;j++)
        {   
            if(b[i]==a[j])
            p=0;
        }
        if(p==1)
        {
            if(b[i]>max)
            max=b[i];

            if(min>b[i])
            min=b[i];
        }    
    }

    if(max>sum)
    {
        a[c++]=max;
        r[e++]=1;
    }
    else
    {
        for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<c;j++)
        {   
            if(b[i]==a[j])
            p=0;
        }
        if(p==1)
        {

        }    
    }
    }
    return d;

}
 
int main()
{
    int n,i,m;
    printf("Enter the no of team members(<50) : "); // Taking the input for number of team members
    scanf("%d",&n);
    int b[n];
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the IQ of %d member : ",i+1); // Taking the input for IQ of the team member
        scanf("%d",&b[i]);
    }
    printf("\n\nEnter the no teams you want to form : "); // Taking input for desired number of teams to be formed
    scanf("%d",&m);

    printf("\nMinimum differnece btw the teams : %d \n",minTotalIqDiff(m,b,n)); // Printing the minimum difference between the teams

    return 0;

}