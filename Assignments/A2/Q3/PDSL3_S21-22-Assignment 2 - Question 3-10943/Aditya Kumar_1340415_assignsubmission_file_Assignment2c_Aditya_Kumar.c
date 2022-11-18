/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Assignment- 2c
Package- stdio.h
*/
#include <stdio.h>
int main()

{   int m1[4] = 1 2 3 4;
int m2[4] = {7700, 3700, 4900, 9200};
int m3[4] = {1100, 6900, 500, 8600};
int m4[4] = {800, 900, 9800, 2300};
int m1v=1,m2v=1,m3v=1,m4v=1;
int min = m1[0]+m2[0]+m3[0]+m4[0];
for(int i1 =0;i1<4;i1++)
{
    for(int i2 = 0;i2<4;i2++)
    {if(i2==i1)
    {
        continue;
    }
        for(int i3=0;i3<4;i3++)
        {
            if((i3==i2)||(i3==i1))
            {
                continue;
            }
            for(int i4=0;i4<4;i4++)
            {
               if((i4==i1)||(i4==i2)||(i4==i3))
               {
                   continue;
               }
               if(m1[i1]+m2[i2]+m3[i3]+m4[i4]<min)
               {
                   min = m1[i1]+m2[i2]+m3[i3]+m4[i4];
                   m1v=i1+1;
                   m2v=i2+1;
                   m3v=i3+1;
                   m4v=i4+1;
               }
            }
        }
    }
}
printf("Total cost = %d\n",min);
printf("Machine1 - Vendor%d\n",m1v);
printf("Machine2 - Vendor%d\n",m2v);
printf("Machine3 - Vendor%d\n",m3v);
printf("Machine4 - Vendor%d\n",m4v);

    return 0;
}

