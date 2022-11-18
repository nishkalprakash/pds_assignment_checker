//name:GUNNU HEMANTH
//ROLL NO :21BT30006
//SEC 3



#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

int main() {
    int k,n;
    scanf("%d %d",&k ,&n);

    int Distance=0;


    for(int j=0;j<k;j++){
            int t=0;
        for(int j=0;j<n;j++){
            int k=rand()& 1? -1:1;

           t=t+k;
        }
        Distance+=(t*t);
    }

    float D=sqrt(Distance/k);
    printf("%f",D);
  return 0;}
