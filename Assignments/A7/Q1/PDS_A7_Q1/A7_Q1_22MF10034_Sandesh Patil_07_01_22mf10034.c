/*
name-sandesh patil
roll no-22MF10034
SEC2*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n,i,j,addition=0;
    int*arr;
    printf("enter how many numbers ,\n");
    scanf("%d",&n);
    srand(time(0));
    arr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        arr[i]=2+ rand()%1000;
    }
     for(i=0;i<n;i++)
        {
        printf("%d ",arr[i]);
        }
    for(i=0;i<n;i++)
    {
        for(j=1;j<arr[i];j++)

    {
        if(arr[i]%j==0)
               {
                addition=addition+j;
               }
    }
    if(addition==arr[i])
        {
            printf("%d is perfect number \n",arr[i]);
        }
    else
        printf("%d not perfect number \n",arr[i]);
    }


return 0;

}

