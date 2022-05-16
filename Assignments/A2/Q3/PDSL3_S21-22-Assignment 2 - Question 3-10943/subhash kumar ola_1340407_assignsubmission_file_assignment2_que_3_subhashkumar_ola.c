#include <stdio.h>

int main()
{
int n,k=100000,sum=0,a,b,c,d,a1,b1,c1,d1;

int m1[4]={8200,8300,6900,9200};
int m2[4]={7700,3700,4900,9200};
int m3[4]={1100,6900,500,8600};
int m4[4]={800,900,9800,2300};

for(a=0;a<4;a++){
    for(b=0;b<4;b++){
        if(b==a) continue;
        for(c=0;c<4;c++){
            if(c==a ||c==b) continue;
            for(d=0;d<4;d++){
                if(d==a || d==b || d==c) continue;
                sum=m1[a]+m2[b]+m3[c]+m4[d];
                if(sum<k){
                    k=sum;
                    a1=a;b1=b;c1=c;d1=d;
                }
            }
        }
    }
}
printf("Total Cost: %d\n",k);
printf("Machine 1: vendor %d\n",a1+1);
printf("Machine 2: vendor %d\n",b1+1);
printf("Machine 3: vendor %d\n",c1+1);
printf("Machine 4: vendor %d\n",d1+1);

}
