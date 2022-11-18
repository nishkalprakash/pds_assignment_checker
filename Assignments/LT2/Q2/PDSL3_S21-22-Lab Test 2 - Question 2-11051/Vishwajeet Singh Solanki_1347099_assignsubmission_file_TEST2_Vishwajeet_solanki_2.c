/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
Question : 2
*/
# include <stdio.h>

int maxAlphaValue(int S[],int n)
{
    int i,j,alpha[n],max_alpha=0;
    for(i=0;i<n;i++)
    {
        alpha[i]=0;
        for(j=0;j<i;j++)
        {
            if((S[j]%S[i])==0)
            {
                alpha[i]+=1;     //ALPHA VALUE FOR PARTICULAR INDEX i
            }
        }
        if(alpha[i]>=max_alpha)
        {
            max_alpha=alpha[i];
        }
    }

    return max_alpha;
}

int main()                                                               //MAIN FUNCTION
{
    int n,i;

    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);

    int S[n];

    for(i=0;i<n;i++)                                                      //INPUT FOR ARRAY S[]
    {
        scanf("%d",&S[i]);
    }

    printf("Output:  %d\n",maxAlphaValue(S,n));
    return 0;
}
