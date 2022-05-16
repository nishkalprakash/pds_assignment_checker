/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 2(c)
*/

#include<stdio.h>
int main()
{
    int best[4] = {8200,8300,6900,9200} ;
    int friends[4] = {7700,3700,4900,9200} ;
    int fo[4] = {1100,6900,500,8600} ;
    int ever[4] = {800,900,9800,2300} ;
    int i,j,k,l,ii,jj,kk,ll,sum,minsum=100000;
    for(i=0 ; i < 4 ; i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                for(l=0;l<4;l++)
                {
                    sum=0;
                    sum=best[i]+friends[j]+fo[k]+ever[l];
                    if(sum<minsum&&(i!=j)&&(i!=k)&&(i!=l)&&(j!=k)&&(j!=l)&&(k!=l))
                    {
                        minsum=sum;
                        ii=i;jj=j;kk=k;ll=l;
                    }
                }
            }
        }
    }
    printf("TOTAL COST = %d\n\n" , minsum);
    printf("MACHINE 1 --> VENDOR %d\n" , ii+1);
    printf("MACHINE 2 --> VENDOR %d\n" , jj+1);
    printf("MACHINE 3 --> VENDOR %d\n" , kk+1);
    printf("MACHINE 4 --> VENDOR %d\n" , ll+1);
    return 0;
}