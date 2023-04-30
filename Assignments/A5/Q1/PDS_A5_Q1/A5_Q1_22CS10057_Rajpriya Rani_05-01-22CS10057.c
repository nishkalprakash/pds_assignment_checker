/* NAME-RAJPRIYA RANI
ROLL NUMBER-22CS10057
SECTION-2
DEPT-CSE
*/
#include <stdio.h>
#define N 100
void main()
{
    int n,a[N],i,j,t,k;
    printf("enter size of array: ");
    scanf("%d",&n);
    if(n>100)
        printf("invalid input");
    else
    {
        printf("Enter the elements: ");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);      //enter values
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if((a[j]>0) && (a[j+1]<0))      //swap condition check
                {
                    t=a[j];     //swapping
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        for(i=0;i<n;i++)
            printf("%d ",a[i]);     //printing
    }

}
