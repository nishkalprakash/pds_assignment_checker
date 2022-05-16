#include<stdio.h>

int main()
{
    int m1[4],m2[4],m3[4],m4[4];
    //Taking required inputs for machines.
    printf("Enter elements in m1: ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&m1[i]);
    }
    printf("Enter elements in m2: ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&m2[i]);
    }
    printf("Enter elements in m3: ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&m3[i]);
    }
    printf("Enter elements in m4: ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&m4[i]);
    }
    int temp=m1[0]+m2[1]+m3[2]+m4[3],sum=0;
    int a,b,c,d;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<4;k++)
            {
                for(int l=0;l<4;l++)
                {
                    //checking uniqueness of the machines rate so that there is no overlap
                    if(i!=j && j!=k && k!=l && i!=k && l!=i && j!=l)
                    {
                        sum=m1[i]+m2[j]+m3[k]+m4[l];//finding total cost
                        if(sum<temp)//checking for the minimum total cost
                        {
                            temp=sum;
                            a=i;b=j;c=k;d=l;//storing index at which it is found

                        }
                    }
                }
            }
        }
    }
    //displaying output
    printf("\nOutput:\nTotal Cost = %d\n",temp);
    printf("Machine1 - Vendor%d\nMachine2 - Vendor%d\nMachine3 - Vendor%d\nMachine4 - Vendor%d\n",a+1,b+1,c+1,d+1);

    return 0;
}