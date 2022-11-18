/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
package:CodeBlocks
Operating System:Windows*/
int MaxAlphaValue(int S[]);
int main()
{
    int S[60];
    MaxAlphaValue(S);
}
int MaxAlphaValue(int S[])
{
    int n,k,max,alpha[50]={};//n=number of elements in the array
    printf("enter n:");
    scanf("%d",&n);
    printf("enter the elements for array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&S[i]);
    }

    for(int j=0;j<n;j++)
    {
        while(k<j)
        {
            if(S[k]&&S[j]!=0)
            {
                if(S[j]%S[k]==0)
                {
                    alpha[j]++;
                }
            }
        }
    }
    max=alpha[1];
    for(k=2;k<n;k++)
    {
        if(alpha[k]>max)
        {
            alpha[k]=max;
        }

    }
    return max;
}
