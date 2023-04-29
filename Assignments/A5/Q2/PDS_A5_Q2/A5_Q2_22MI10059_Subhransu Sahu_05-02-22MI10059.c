#include <stdio.h>
int primeCheck (int i) {
    int d=1;
    while(d<i)
    {
        ++d;
        if(i%d!=0)
            return 1;
        else
            return 0;

    }
}


int main(){

 int x, y, z, m, n;
 scanf("%d", &x);

 if(x<4 || primeCheck(x)==0)
    printf("-1");
 for(m=2;m<=x-2;m++){
    y = x%m;
    if(x==(m+y) && primeCheck(y)==1 && primeCheck(m)==1)
    {
        if(y>m)
            printf("%d, %d", m,y);
        if(y<m)
            printf("%d, %d", y,m);
    }
 }
 }
