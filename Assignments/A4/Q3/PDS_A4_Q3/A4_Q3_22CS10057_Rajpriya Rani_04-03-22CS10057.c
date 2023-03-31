
/*Name= Rajpriya Rani
 Sec-2
 Roll number- 22CS10057
 Assignment-3
 Description-numero-pyramid printing
 */
#include <stdio.h>
void main()
{
    int i,j,k,n,m=0;
    printf("Enter height of numero pyramid: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=n;k>i;k--)
        {
            printf(" ");        //space printing
        }
        for(j=1;j<=i;j++)
        {

            if(m==9)
                m=-1;
            m++;
            printf("%d",m);        //left half triangle printing
        }
        for(k=1;k<i;k++)
        {

            if(m==0)
                m=10;
            m--;
            printf("%d",m);         //right half triangle printing
        }
        printf("\n");
    }

}
