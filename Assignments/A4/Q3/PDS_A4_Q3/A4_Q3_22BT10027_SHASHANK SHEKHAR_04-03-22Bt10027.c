/*
* Section 2
* Roll No : 22BT10027
* Name : Shashank Shekhar
* Assignment No : 4
* Description : Program to check validity of password
*/
#include<stdio.h>
int main()
{
    int n,s;
    printf("Enter the height of the pyramid \n");//entering height of pyramid
    scanf("%d",&n);
    int i,j,c;
    for(i=1;i<=n;i++)
    {
        s = n-i+1;
        for(j=1;j<=s;j++)
            printf(" ");
        for(j=i;j<=2*i-1;j++)
        {
            if(j<10)
                printf("%d",j);
            if(j>=10)
                printf("%d",j-10);
        }
        j=2*(i-1);
        for(;j>=i;j--)
            {
                if(j<10)
                    printf("%d",j);
                if(j>=10)
                    printf("%d",j-10);
            }
        printf("\n");
    }
}
