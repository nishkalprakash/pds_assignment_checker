/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
exam: 3
Operating System: windows
*/
#include<stdio.h>
#include<stdlib.h>
void con_comp(int** p, int a,int b)
{

}
int main()
{
    int i,j,k,a,b;
    int **p;
    printf("enter the image size you require: ");
    scanf("%d%d",&a,&b);
    p=(int**)malloc(a*sizeof(int*));
    for(i=0;i<b;i++)
    {
        p[i]=(int*)malloc(a*sizeof(int));
    }
    printf("enter the image\n");
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    printf("the image entered is\n");
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%5d",p[i][j]);
        }
        printf("\n");
    }
    k=1;
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            if(p[i][j]==1)
            {
                p[i][j]=k;
                if(p[i][j+1]==1)
                {
                    p[i][j+1]=k;
                    if(p[i][j+2]==1)
                    {
                        p[i][j+2]=k;
                    }
                    if(p[i+1][j+2]==1)
                    {
                        p[i+1][j+2]=k;
                    }
                }
                if(p[i+1][j+1]==1)
                {
                    p[i+1][j+1]=k;
                    if(p[i+1][j+2]==1)
                    {
                        p[i+1][j+2]=k;
                    }
                    if(p[i+2][j+2]==1)
                    {
                        p[i+2][j+2]=k;
                    }
                    if(p[i+2][j+1]==1)
                    {
                        p[i+2][j+1]=k;
                    }
                }
                if(p[i+1][j]==1)
                {
                    p[i+1][j+1]=k;
                    if(p[i+1][j+2]==1)
                    {
                        p[i+1][j+2]=k;
                    }
                    if(p[i+2][j+3]==1)
                    {
                        p[i+2][j+3]=k;
                    }
                    if(p[i+1][j+3]==1)
                    {
                        p[i+1][j+3]=k;
                    }
                }
            }
            k++;
        }
    }
    printf("the new image is\n");
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%5d",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
