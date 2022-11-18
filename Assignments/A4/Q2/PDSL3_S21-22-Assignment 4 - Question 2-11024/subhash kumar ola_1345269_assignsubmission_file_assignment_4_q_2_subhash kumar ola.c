#include <stdio.h>

int main()
{
int a[]={5,7,12,3};
int i,p,m,n,k;

printf("Enter i:");
scanf("%d",&i);

for(m=0;m<4;m++){
        for(n=m;n<4;n++){
                for(k=n;k<4;k++)
            printf("%d,%d,%d\n",a[m],a[n],a[k]);
        }
}
}
