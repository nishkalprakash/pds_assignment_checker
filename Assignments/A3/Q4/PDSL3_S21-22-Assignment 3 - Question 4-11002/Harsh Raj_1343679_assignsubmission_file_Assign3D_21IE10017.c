#include<stdio.h>
int n;
/* Harsh Raj
Roll : 21IE10017   */
int main()
{
    int i,A[20],count,first,last,mid,ty,check,s;
    int flag=count=0;
    while(count==0)
    {printf("Enter the no. of elements n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(int i=0;i<n-1;i++)
    {
        if(A[i+1]<A[i])
            count++;
    }
    if(count>0)
    {
        printf("Elements are not Sorted");
        count=0;
    }
    else count=1;
    }
    printf("Enter the no. which you want to search");
    scanf("%d",&s);
    printf("Enter 1 for Linear Search & 2 for Binary Search");
    scanf("%d",&ty);
    if(ty==1)
    {
       for(i=0;i<n&&flag==0;i++)
       {
           if(A[i]==s)
           flag++;
       }
       if(flag>0)
       printf("Element %d has been found at place %d",s,i);
       else printf("Not found");
    }
    else if(ty==2)
    {
        first=flag=0;
        last=n-1;
        while(first<=last&&!flag)
        {
            mid=(first+last)/2;
            if(A[mid]==s)
            {
                flag=1;
                i=mid+1;
            }
            else if(A[mid]>=s)
                last=mid-1;
            else first=mid-1;
        }
       if(flag>0)
       printf("Element %d has been found at place %d",s,i);
       else printf("Not found");
    }
}
