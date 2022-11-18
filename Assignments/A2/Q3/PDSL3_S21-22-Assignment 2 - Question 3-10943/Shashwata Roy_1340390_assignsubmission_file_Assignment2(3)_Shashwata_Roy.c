/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/

#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int i1,i2,i3,i4,m,a,b,c,d;
    int m1[]={8200,8300,6900,9200};
    int m2[]={7700,3700,4900,9200};
    int m3[]={1100,6900,500,8600};
    int m4[]={800,900,9800,2300};
    m=m1[0]+m2[0]+m3[0]+m4[0];
    a=b=c=d=0;
    for(i1=0;i1<4;i1++){
        for(i2=0;i2<4;i2++){
        for(i3=0;i3<4;i3++){
        for(i4=0;i4<4;i4++){
            if(m>m1[i1]+m2[i2]+m3[i3]+m4[i4]&&(i1!=i2)&&(i1!=i3)&&(i1!=i4)&&(i2!=i3)&&(i2!=i4)&&(i3!=i4)){
                m=m1[i1]+m2[i2]+m3[i3]+m4[i4];
                a=i1+1;b=i2+1;c=i3+1;d=i4+1;
            }
        }
        }
        }
    }
    printf("Total cost = %d\n",m);
    printf("Machine1 - Vendor%d\n",a);
    printf("Machine2 - Vendor%d\n",b);
    printf("Machine3 - Vendor%d\n",c);
    printf("Machine4 - Vendor%d",d);
return 0;
}
