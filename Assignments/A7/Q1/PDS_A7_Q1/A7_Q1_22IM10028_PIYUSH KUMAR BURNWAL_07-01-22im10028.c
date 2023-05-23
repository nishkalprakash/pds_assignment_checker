
//code creator PIYUSH KUMAR BURNWAL(22IM10028)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//all header files

int main()
{
    srand(time(0));
    int n,i,j,sf=0,flag=0,*a;
    /*n will be used as size of array which will store random arrays
    sf will be storing the sum of factors of each random number excluding that number itself
    flag will check if we have got a perfect number or not*/
    printf("Enter the value of size n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));//using dynamic memory allocation to generate an array of size n
    for(i=0;i<n;i++)
    {
        a[i]=2+ rand()%1000;//generating numbers in rang from 2 to 1000
    }
    printf("%d-random number array:",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        sf=0;//since for each random number sum needs to be reset to 0


        for(j=1;j<a[i];j++)
        {
             if(a[i]%j==0)
            {
                sf=sf+j;
            }
        }
    if(sf==a[i])//checking whether the sum of required factors is equal to the number itself
    {
        printf("%d, ",a[i]);

        flag++;
    }
    }
    if (flag==0)//we didn't found a perfect number if flag is 0
    {
        printf("No perfect number found");
    }
    else if (flag==1)
    {
        printf("is a perfect number");
    }
    else
    {
        printf("are perfect numbers");
    }


}

