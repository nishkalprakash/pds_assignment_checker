#include<stdio.h>
int main()
{
    int s[16],n,i;
    //assumption- asked for input n from user. was not given in question to do
    printf("n- ");
    scanf("%d",&n);
    //scanning array s
    printf("Enter array s[]- ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&s[i]);
    }
    //printing array s
    printf("%d",maxAlphaValue(s,n));
}

//function for max value
int maxAlphaValue(int s[],int n)
{
    int i,k,a,count,max=0;
    for(i=0; i<n; i++)
    {
        for(k=0; k<i; k++)
        {
            //checking divisibility by equating remainder to zero
            a=(s[k])%(s[i]);
            if(a==0)
            {
                count++;
            }
        }
        //analyzing the maxing value of count
        if(count>max)
        {
            max=count;
        }
        count=0;
    }
    //returning the maxing value to main function
    return max;
}
