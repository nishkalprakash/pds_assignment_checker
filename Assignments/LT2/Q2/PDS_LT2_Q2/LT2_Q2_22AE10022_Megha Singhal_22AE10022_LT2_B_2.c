// Megha Singhal, 22AE10022,section 2, set B, Question 2
#include<stdio.h>
#include<math.h>
int main()
{
    int p,q,n,i;
    scanf("%d %d %d",&n,&p,&q);
    if(n<1)
        printf("Invalid Value of n");
    else if(p>q)
        printf("p should be less than or equal to q");
    else
    {
        int *a=malloc(n*sizeof(int));
        for(i=0;i<n;i++)
            {
               a[i]=rand()%(q-p+1)+p;
            }
        for(i=0;i<n;i++)
            printf("%d, ",a[i]);
        return 0;
    }
}
/*int max(int *a,int n)
{

    return max(n1)
}*/

