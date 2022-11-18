/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>

int n;

int maxAlphaValue(int S[])
{
    int i,j,cnt,max=0;
    for(i=0;i<n;i++)           
    {
        cnt=0;
        for(j=0;j<i;j++)       //find alpha 
        {
            if(S[j]%S[i]==0)
            cnt++;
        }
        if(cnt>max)            //check if alpha greater than previous maxalpha
        max=cnt;               //if yes then update maxalpha
    } 
    return max;
}

int main()
{
    printf("Enter size of array");   //accept array from user
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=maxAlphaValue(a);   //call function
    printf("%d", m);         //output
    printf("\n");
    
    return 0;
}