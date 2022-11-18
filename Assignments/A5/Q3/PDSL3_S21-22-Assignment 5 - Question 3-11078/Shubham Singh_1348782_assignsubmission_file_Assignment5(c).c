/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 5(c)
*/

#include<stdio.h>

int main()
{
    printf("Enter size:\n");
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter values in array:\n");
    for(int i=0;i<r;i++)//accepting input
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    int f=0;//checks if found
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int f1=1,f2=1;//f1 checks for min, f2 checks for max in row
            for(int k=0;k<c;k++)
            {
                if(a[i][k]<=a[i][j]&&k!=j)
                    f1=0;
                if(a[i][k]>=a[i][j]&&k!=j)
                    f2=0;
            }
            if(f1==1||f2==1)
            {
                int f3=1,f4=1;//f3 checks for min, f4 checks for max in column
                for(int k=0;k<r;k++)
                {
                if(a[k][j]<=a[i][j]&&k!=i)
                    f3=0;
                if(a[k][j]>=a[i][j]&&k!=i)
                    f4=0;
                }
                if((f1==1&&f4==1)||(f2==1&&f3==1))//alternate row column combination
                {
                    f=1;//flag
                    printf("a[%d][%d]=%d is a saddle point.\n",i,j,a[i][j]);//printing saddle point
                }
            }
        }
    }
    if(f==0)
        printf("No saddle point found.");//printing if no element found
}
