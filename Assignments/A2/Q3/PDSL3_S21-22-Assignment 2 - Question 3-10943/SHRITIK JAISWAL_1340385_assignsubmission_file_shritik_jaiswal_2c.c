//shritik jaiswal
//roll-21BT30026
//sec-3
#include <stdio.h>
int main()
//initializing the array
{
    const int ARRAY=4;
    int m1[ARRAY],i;
    int m2[ARRAY];
    int m3[ARRAY];
    int m4[ARRAY];
    printf ("enter cost for machine 1 u by vendors v1 v2 v3 v4 respectively");
    for (i=0;i<ARRAY;i++)
    {
    scanf("%d",&m1[i]);
    }
    printf ("enter cost for machine 2 u by vendors v1 v2 v3 v4 respectively");
    for (i=0;i<ARRAY;i++)
    {
    scanf("%d",&m2[i]);
    }
    printf ("enter cost for machine 3 u by vendors v1 v2 v3 v4 respectively");
    for (i=0;i<ARRAY;i++)
    {
    scanf("%d",&m3[i]);
    }
    printf ("enter cost for machine 3 u by vendors v1 v2 v3 v4 respectively");
    for (i=0;i<ARRAY;i++)
    {
    scanf("%d",&m4[i]);
    }
    //puting sum as some value to compare by applying loop.
    int cost=m1[0]+m2[0]+m3[0]+m4[0];
    int a=0,b=0,c=0,d=0;
    //making 4 nested  loops to check every possibility.

    for(int i=0;i<ARRAY;i++)
    {
        for(int j=0;j<ARRAY;j++)
        {
            if (i==j) continue;
            for(int k=0;k<ARRAY;k++){
                if (k==j || k==i) continue;
                for(int l=0;l<ARRAY;l++){
                    if (l==i || l==j || l==k) continue;
                    if(m1[i]+m2[j]+m3[k]+m4[l]<cost)
                    {
                        cost=m1[i]+m2[j]+m3[k]+m4[l];
                        a=i;b=j;c=k;d=l;
                    }
                }
            }
        }
    }
    printf("MINIMUM COST is %d\n",cost);
    printf("%d %d %d %d",a+1,b+1,c+1,d+1);

}
