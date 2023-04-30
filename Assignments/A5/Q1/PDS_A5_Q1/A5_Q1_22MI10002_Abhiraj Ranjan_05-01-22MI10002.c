/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 5
Question: 1
Description: Negative numbers first*/
#include<stdio.h>
#define N 100
int main()
{
    int n,a[N],i,j=0,negcount=0,h,k;
    scanf("%d",&n);
    if(n>100) printf("Error: n > 100");
    else
    {
        for(i=0; i<n; i++) scanf("%d",&a[i]);
        printf("Original Array: ");
        for(i=0; i<n; i++) printf("%d ",a[i]);
        printf("\nRearranged Array: ");
        for(i=0; i<n; i++)
        {
            if(a[i]<0)
                negcount++;//read number of negative integers
        }
        for(i=n-1; i>=0; i--)
        {
            a[i+negcount]=a[i];//shifting elements by negcount places
        }
        for(i=0; i<negcount; i++) a[i]=0; //setting first shifted elements to zero

        for(i=0; i<n+negcount; i++) //filling first empty spaces by negative numbers orderwise
        {
            if(a[i]<0)
            {
                a[j]=a[i];
                j++;
            }
        }
        for(i=negcount; i<n+negcount; i++) //writing all the negative elements after negcount as 0
        {
            if(a[i]<0) a[i]=999;
        }
        for(i=negcount; i<n+negcount; i++)
        {
            if(a[i]==999)
            {
                h=i;
                k=i;
                for(k=h; k<n+negcount; k++)
                {
                    a[k]=a[k+1];
                }
            }
        }

        for(i=0; i<n; i++) printf("%d ",a[i]);
    }
    return 0;
}
