#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>

int main() {
    int n,k;
    scanf("%d %d",&n ,&k);
    int d =0;
    int x,a,y;
    for( x=0;x<k;++x){
             a=0;
        for( y=0;y<n;++y){
            int k=rand()& 1? -1:1;
           a+=k;
        }
        d+=(a*a);
    }
    float D=sqrt(d/k);
    printf("%f",D);
  return 0;
}
