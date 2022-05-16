/*
Rakesh tarendra
21MT30031
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
int main() {
    int k,n;
    scanf("%d %d",&k ,&n);
    int D=0;
    for(int i=0;i<k;i++){
            int p=0;
        for(int j=0;j<n;j++){
            int k=rand()& 1? -1:1;
           p+=k;
        }
        D+=(p*p);
    }
    float DE=sqrt(D/k);
    printf("%f",DE);
  return 0;
}
