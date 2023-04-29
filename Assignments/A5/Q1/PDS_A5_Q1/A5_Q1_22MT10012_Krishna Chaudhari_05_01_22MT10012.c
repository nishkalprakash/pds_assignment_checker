// Name : Krishna Chaudhari
// roll: 22MT10012
// Q1.



#include<stdio.h>

int main()
{
    int n;
    printf("how many element do you want to store in array \n :");
    scanf("%d",&n);
    //A1
    int num[n];
    //A2
    int a[n];
    int i;
    if(n>100) printf("Error : n>100");
    else
    {
        for(i=0; i<n; i++)
        {
            printf("enter the %d element of array ",i);
            int d;
            scanf("%d",&d);
            num[i]=d;
        }
        printf("orignal array :");

        for(i=0; i<n; i++)
        {
            printf("%d ",num[i]);
            a[i]=num[i];
        }
        printf("\n\n");
//rearrangment of array


        int j=0;
        int l=n-1;
        for(i=0; i<n; i++)
        {
            if(num[i]<0 && j<n)
            {
                a[j]=num[i];

             //   printf("j=%d \n", j);
             //   printf("num=%d \n",a[j]);
                j++;
            }
            if(num[i]>=0 && l>=0)
            {
                a[l]=num[i];
              //  printf("l=%d \n", l);
             //   printf("num=%d \n",a[l]);
                l--;
            }
        }
        printf("rearranged array is :");

        int t=0;
        for(t=0; t<n; t++)
        {
            printf("%d ",a[t]);
        }
    }


    return 0;
}
