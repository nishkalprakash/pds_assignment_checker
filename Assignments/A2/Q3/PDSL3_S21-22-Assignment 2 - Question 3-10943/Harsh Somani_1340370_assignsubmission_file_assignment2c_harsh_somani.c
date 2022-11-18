/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
int main()
{
    int m1[4]= {8200, 8300, 6900, 9200},
        m2[4]= {7700, 3700, 4900, 9200},
        m3[4]= {1100, 6900, 500, 8600},
        m4[4]= {800, 900, 9800, 2300};
int a, b, c, d, cost, min , A, B, C, D;
min = m1[2]+m2[1]+m3[0]+m4[3];
A=2;
B=1;
C=0;
D=3;
 for(a=0;a<4;a++)
    {
        for(b=0;b<4;b++)
        {
            for(c=0;c<4;c++)
            {
                for(d=0;d<4;d++)
                {
                    if (a==d || b==d || c==d || a==c || b==c || a==b)
                       {}
                    else
                    {
                        cost=m1[a]+m2[b]+m3[c]+m4[d];

                        if (cost<=min)
                        {
                            min=cost;
                            A=a;
                            B=b;
                            C=c;
                            D=d;
                        }
                    }
                }
            }
        }
    }
    printf("min value=%d\n",min);
    printf("machine1=%d\n",A+1);
    printf("machine2=%d\n",B+1);
    printf("machine3=%d\n",C+1);
    printf("machine4=%d\n",D+1);
}
