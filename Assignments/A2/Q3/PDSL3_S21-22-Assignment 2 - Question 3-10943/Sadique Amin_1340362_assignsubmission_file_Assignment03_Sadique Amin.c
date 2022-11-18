/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <math.h>, <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int m1[4]={8200,8300,6900,9200};
    int m2[4]={7700,3700,4900,9200};
    int m3[4]={1100,6900,500,8600};
    int m4[4]={800,900,9800,2300};
    int min=m1[0]+m2[0]+m3[0]+m4[0];
    int cost;
    int arr[4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==j)
            {
                continue;
            }
            for(int k=0;k<4;k++)
            {
                if(i==k||j==k)
                {
                    continue;
                }
                for(int l=0;l<4;l++)
                {
                    if(i==l||k==l||j==l)
                    {
                        continue;
                    }
                    cost=m1[i]+m2[j]+m3[k]+m4[l];
                    if (cost<min)
                    {
                        min=cost;
                        arr[0]=i;
                        arr[1]=j;
                        arr[2]=k;
                        arr[3]=l;
                    }
                }
            }
        }
    }
    printf("Total cost = %d\n",min);
    for(int i=0;i<4;i++)
    {
        printf("Machine%d - Vendor%d\n",i+1,arr[i]+1);
    }
    return 0;
}