/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>
#include <math.h>

int main()
{
  int m1[4] = {8200, 8300, 6900, 9200};
  int m2[4] = {7700, 3700, 4900, 9200};
  int m3[4] = {1100, 6900, 500, 8600};
  int m4[4] = {800, 900, 9800, 2300};

  int vendor[4];

  int MIN=1000000;
    int sum;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(j==i)
            {
                continue;
            }
            for(int k=0; k<4; k++)
            {
                if(k==i || k==j)
                {
                    continue;
                }
                sum=m1[i]+m2[j]+m3[k]+m4[6-i-j-k];
                if(sum<MIN)
                {
                    MIN=sum;
                    vendor[0]=i;
                    vendor[1]=j;
                    vendor[2]=k;
                    vendor[3]=6-i-j-k;

                }
                sum=0;
            }
        }
    }

    printf("Total cost = %d\n", MIN);
    for(int i=0; i<4; i++)
    {
        printf("machine%d - vendor%d\n", i+1, vendor[i]+1);
    }
}
