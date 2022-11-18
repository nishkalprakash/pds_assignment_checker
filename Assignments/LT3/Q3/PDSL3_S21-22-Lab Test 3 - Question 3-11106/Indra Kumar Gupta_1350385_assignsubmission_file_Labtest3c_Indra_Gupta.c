/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 3 Question 3

#include <stdio.h>

int main()
{
    int c, d, a[5], i,j,k,l,m,n, div_check;
    //taking input
    printf("Enter the first digit: ");
    scanf("%d", &c);
    printf("Enter the second digit: ");
    scanf("%d", &d);
    //running five loops to store either c or d at a time
    for(i=0; i<2; i++)//to assign for index 0
    {
        if(i==0)
        {
            a[0]=c;
        }
        else
        {
            a[0]=d;
        }
        for(j=0; j<2; j++)//to assign for index 1
        {
            if(j==0)
            {
                a[1]=c;
            }
            else
            {
                a[1]=d;
            }
            for(k=0; k<2; k++)//to assign for index 2
            {
                if(k==0)
                {
                    a[2]=c;
                }
                else
                {
                    a[2]=d;
                }
                for(l=0; l<2; l++)//to assign for index 3
                {
                    if(l==0)
                    {
                        a[3]=c;
                    }
                    else
                    {
                        a[3]=d;
                    }
                    for(m=0; m<2; m++)//to assign for index 4
                    {
                        if(m==0)
                        {
                            a[4]=c;
                        }
                        else
                        {
                            a[4]=d;
                        }
                        div_check= ((a[0]*10000)+(a[1]*1000)+(a[2]*100)+(a[3]*10)+a[4])%(c+d);
                        if(div_check!=0)//checking divisibility
                        {
                            for(n=0; n<5; n++)
                            {
                                printf("%d", a[n]);//printing the combination if it is not divisible by c+d
                            }
                            printf("\n");
                        }

                    }
                }
            }
        }
    }
    return 0;
}

