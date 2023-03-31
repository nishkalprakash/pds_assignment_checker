//Section 2
//Roll No.-22ME30069
//Name-Srija Biswas
//Assignment-4
//Description:
#include<stdio.h>
int main()
{
    int i,k,j,l,n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=i;k<=(n-1);k++)
        {
            printf(" ");
        }
        for(j=i;j<=(2*i-1);j++)
        {
            if(j<=9)
            printf("%d",j);
            else
            printf("%d",(j-10));
        }
        for(l=j-2;l>=i;l--)
        {
            if(l<=9)
            printf("%d",l);
            else
            printf("%d",(l-10));
        }
        printf("\n");
    }
    return 0;
}
