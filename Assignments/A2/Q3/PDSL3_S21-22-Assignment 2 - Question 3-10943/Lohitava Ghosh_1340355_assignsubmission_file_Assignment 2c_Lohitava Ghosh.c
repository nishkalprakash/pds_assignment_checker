/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int main()
{
    int i,j,c1=0,c2=0,c3=0,c4=0,min1,min2,min3,min4,w=0,arr1[4],arr2[4],Total=0,m1[4],m2[4],m3[4],m4[4];
    printf("Enter the machine 1:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&m1[i]);
    }
    printf("Enter the machine 2:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&m2[i]);
    }
    printf("Enter the machine 3:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&m3[i]);
    }
    printf("Enter the machine 4:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&m4[i]);
    }
    min1=m1[0];
    for (j=0;j<4;j++)
    {
        if(m1[j]<min1)
        {
            min1=m1[j];
            c1=j;
        }
    }
    for (j=0;j<4;j++)
    {
        if(j!=c1)
        {
            arr1[w]=m2[j];
            w=w+1;
        }
    }
    min2=arr1[0];
    for (j=0;j<3;j++)
    {
        if(m2[j]<min2)
        {
            min2=m2[j];
            c2=j;
        }
    }
    w=0;
    for (j=0;j<3;j++)
    {
        if(j!=c2)
        {
            arr2[w]=m3[j];
            w=w+1;
        }
    }
    min3=arr2[0];
    for (j=0;j<2;j++)
    {
        if(m3[j]<min3)
        {
            min3=m3[j];
            c3=j;
            printf("%d",c3);
        }
    }
    for (j=0;j<4;j++)
    {
        if(j!=c1 && j!=c2 && j!=c3)
        {
            min4=m4[j];
            c4=j;
        }
    }
    Total=min1+min2+min3+min4;
    printf("Total Cost = %d\n",Total);
    printf("Machine1 - Vendor%d\n",c1+1);
    printf("Machine2 - Vendor%d\n",c2+1);
    printf("Machine3 - Vendor%d\n",c3+1);
    printf("Machine4 - Vendor%d\n",c4+1);

    return 0;
}
