/*shivakumar
21MI31013*/
#include <stdio.h>

int main()
{

int m1[4] = {8200, 8300, 6900, 9200};
int min1 = m1[0],x=0;
for(int i=1;i<4;i++){
    if(min1>m1[i]){
            min1 = m1[i];
            x=i;
        }
    }
    int m3[4] = { 1100, 6900, 500, 8600};
    int min3 = m3[0],z=0;
    for(int i=1;i<4;i++){
        if(min3>m3[i]){
            min3 = m3[i];
            z=i;
        }
    }
    int m2[4] = {7700, 3700, 4900, 9200};
    int min2 = m1[0],y=0;
    for(int i=1;i<4;i++){
        if(min2>m2[i]){
            min2 = m2[i];
            y=i;
        }
    }
    int m4[4] = {800, 900, 9800, 2300};
    int min4 = m4[0],w=0;
    for(int i=1;i<4;i++){
        if(min4>m4[i]){
            min4 = m4[i];
            x=w;
        }
    }


printf("Total cost is %d %d %d %d\n",min1,min2,min3,min4);
printf("Machine1 - Vendor%d ",x+1);
printf("Machine1 - Vendor%d ",y+1);
printf("Machine1 - Vendor%d ",z+1);
printf("Machine1 - Vendor%d ",w+1);


return 0;
}
