#include<stdio.h>
int main()
{
    int i,j,t,k,n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(k=n-i;k>0;k--)
        {
            printf(" ");

        }
        int y=i;
        for(j=i;j<=2*i-1;j++)
        {
            if(y==10)
                y=0;
            printf("%d",y);
            y+=1;
        }
        y-=2;
        for(t=2*i-2;t>=i;t--)
        {
           // if(t==10)
            //printf(0);
            //printf("%d",t);
            printf("%d",y);
            y-=1;

        }
        printf("\n");
    }







}
