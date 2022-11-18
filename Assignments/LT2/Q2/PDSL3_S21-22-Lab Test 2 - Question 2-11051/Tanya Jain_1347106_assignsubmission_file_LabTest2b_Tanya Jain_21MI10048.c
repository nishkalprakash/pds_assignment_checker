#include <stdio.h>
#include <string.h>

int maxAlphaValue(int s[], int n)
{
    int al[n];
    for(int i=0;i<n;i++)
    {
        al[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int k=0;k<i;k++)
        {
            if(s[k]%s[i]==0)
                al[i]++;
        }
    }
    int max=al[0];
    for(int i=1;i<n;i++)
    {
        if(al[i]>max)
            max=al[i];
    }
    return max;
}


int main()
{
    
    int n;
    printf("Enter number of elements in the sequence s[]: ");
    scanf("%d",&n);
    int s[n];
    printf("Enter array s[]: ");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("Output: %d",maxAlphaValue(s,n));
    return 0;


}