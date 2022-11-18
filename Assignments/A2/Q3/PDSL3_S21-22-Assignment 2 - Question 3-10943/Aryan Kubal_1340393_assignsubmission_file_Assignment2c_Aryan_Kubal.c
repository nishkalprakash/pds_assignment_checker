/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>
int main()
{
    //considering n=4
    int m1[4]={8220,8300,6900,9200}; // data of vendors for machine 1
    int m2[4]={7700,3700,4900,9200}; // data of vendors for machine 2
    int m3[4]={1100,6900,500,8600}; // data of vendors for machine 3
    int m4[4]={800,900,9800,2300}; // data of vendors for machine 4
    // declaring appropriate variables
    int total=0;//stores the total cost
    int c[4]={5,5,5,5}; 
    int c1=0;
    int p;
        int min=10000;
        // applying condition to minimize the total cost
        for(int i=0;i<4;i++)
        {
            int count=0;
            for(int k=0;k<4;k++)
            {
                if(c[k]==i)
                count=1;
            }
            if(count==1)
                continue;
            if(min>m1[i])
            {
                min=m1[i];
                p=i;
            }

        }
        c[c1]=p;
        c1++;
        total+=min; // calculating final total cost
        printf("Machine 1 -> Vendor %d\n",c[c1-1]+1); // printing the appropriate vendor for machine 1
        min=10000;
        for(int i=0;i<4;i++)
        {
            int count=0;
            for(int k=0;k<4;k++)
            {
                if(c[k]==i)
                count=1;
            }
            if(count==1)
                continue;
            if(min>m2[i])
            {
                min=m2[i];
                p=i;
            }
        }
        c[c1]=p;
                c1++;
        total+=min;
        printf("Machine 2 -> Vendor %d\n",c[c1-1]+1); // printing the appropriate vendor for machine 2
         min=10000;
        for(int i=0;i<4;i++)
        {
            int count=0;
            for(int k=0;k<4;k++)
            {
                if(c[k]==i)
                count=1;
            }
            if(count==1)
                continue;
            if(min>m3[i])
            {
                min=m3[i];
                p=i;
            }

        }
        c[c1]=p;
                c1++;
        total+=min;
        printf("Machine 3 -> Vendor %d\n",c[c1-1]+1); // printing the appropriate vendor for machine 3

        min=10000;
        for(int i=0;i<4;i++)
        {
            int count=0;
            for(int k=0;k<4;k++)
            {
                if(c[k]==i)
                count=1;
            }
            if(count==1)
                continue;
            if(min>m4[i])
            {
                min=m4[i];
                p=i;
            }

        }
        c[c1]=p;
                c1++;
        total+=min;
        printf("Machine 4 -> Vendor %d\n",c[c1-1]+1); // printing the appropriate vendor for machine 4
        printf("Total cost-> %d\n", total); // printing total cost
}