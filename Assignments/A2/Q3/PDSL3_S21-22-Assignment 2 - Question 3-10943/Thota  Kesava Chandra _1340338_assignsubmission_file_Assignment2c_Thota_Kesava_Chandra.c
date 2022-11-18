/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int m1[]={8200, 8300, 6900, 9200};
    int m2[]={7700, 3700, 4900, 9200};
    int m3[]={1100, 6900, 500, 8600};
    int m4[]={800, 900, 9800, 2300};
    int temp_cost,min_cost;
    min_cost = min_cost = m1[0]+m2[1]+m3[2]+m4[3];
    int allotment[] = {1,2,3,4};
    //a1 is the allotment number of the curr vendor of machine 1 
    for (int a1=1;a1<=4;a1++)
    {
        for (int a2=1;a2<=4;a2++)
        {
            if (a2!=a1)
            {
                for (int a3=1;a3<=4;a3++)
                {
                    if (a3!=a1 && a3!=a2)
                    {
                        for (int a4=1;a4<=4;a4++)
                        {
                            if(a4!=a1 && a4!=a2 && a4!=a3)
                            {
                                temp_cost = m1[a1-1]+m2[a2-1]+m3[a3-1]+m4[a4-1];
                                if (temp_cost<min_cost)
                                {
                                    //our required case of minimum
                                    min_cost = temp_cost;
                                    allotment[0]=a1;
                                    allotment[1]=a2;
                                    allotment[2]=a3;
                                    allotment[3]=a4;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("Total Cost = %d\n",min_cost);
    //printing the final allotment
    for (int i=1;i<=4;i++)
    {
        printf("Machine %d - Vendor %d\n",i,allotment[i-1]);
    }
    return 0;
}
