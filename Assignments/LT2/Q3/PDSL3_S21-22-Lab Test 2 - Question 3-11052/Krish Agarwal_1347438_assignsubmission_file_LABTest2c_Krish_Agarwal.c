/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
int  minTotalIqDiff(int n,int m, int iq[],int pos,int s,int max_sum)
{//Recursive function
    int diff;
    if(m==1)
    {
        max_sum=maximum(max_sum,s);
        s=0;
        for(int j=pos;j<n;j++)
        s=s+iq[j];
        max_sum=maximum(max_sum,s);
        diff=minimum(max_sum,diff);
        return;
    }
    s=0;
    for(int i=pos;i<n;i++)
    {
        s+=iq[i];
        max_sum=maximum(max_sum,s);
        minTotalIqDiff(n,m-1,iq,i+1,s,max_sum);
    }
    return (max_sum-diff);
}
int maximum(int x,int y)
{//To find maximum of the two
    if(x>y)
    return x;
    else 
    return y;
}
int minimum(int x,int y)
{//To find minimum of the two
    if(x>y)
    return y;
    else 
    return x;
}
int main()
{
    int n,m;
    //Taking required inputs
    printf("Enter the number of students : ");
    scanf("%d",&n);
    int iq[n];
    printf("Enter the IQ of the corresponding students : \n");
    for(int i=0;i<n;i++)
    scanf("%d",&iq[i]);
    printf("Enter the number of teams to be formed : ");
    scanf("%d",&m);
    int diff=minTotalIqDiff(n,m,iq,0,0,0);//calling function
    printf("Difference = %d",diff);
}