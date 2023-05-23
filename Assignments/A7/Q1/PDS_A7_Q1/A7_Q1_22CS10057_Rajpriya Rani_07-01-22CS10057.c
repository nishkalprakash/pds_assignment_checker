/* Name- Rajpriya Rani
Roll no- 22CS10057
sec-2
Program-1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int n,i,c=0,s=0,j;
    int *a;
    time_t t;
    srand(time(0));
    printf("enter a number: ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));     //dynamic memory allocation
    for(i=0;i<n;i++)
    {

        a[i]=2+ rand()%1000;        //array generation
    }
    printf("\n numbers generated are: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    printf("\n");

    for(i=0;i<n;i++)
    {
        s=0;
        for(j=1;j<a[i];j++)
        {
            if((a[i]%j)==0)     //factor check
                s=s+j;          //sum of factors
        }

        if(s==a[i])
        {
            c++;
            printf("\n %d is a perfect number",a[i]);
        }
    }
    if(c==0)
        printf("\n No perfect numbers found");
}
