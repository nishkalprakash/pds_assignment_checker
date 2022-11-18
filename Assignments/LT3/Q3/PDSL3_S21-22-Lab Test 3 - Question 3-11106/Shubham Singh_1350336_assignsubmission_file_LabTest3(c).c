/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Lab Test: 3(c)
*/

#include <stdio.h>
void main()
{
    printf("Enter two digits:\n");
    int a[2];
    scanf("%d %d",&a[0],&a[1]);//accepting inputs

    printf("Numbers:\n");
    for(int i=0;i<2;i++)//these loops create all possible combinations
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                for(int l=0;l<2;l++)
                {
                    for(int m=0;m<2;m++)
                    {
                        int x=a[i]*10000+a[j]*1000+a[k]*100+a[l]*10+a[m];//creating the number
                        if(x%(a[0]+a[1])!=0)//checking for divisibility
                            printf("%d ",x);//printing number
                    }
                }
            }
        }
    }//end of loops
}//end of main function
