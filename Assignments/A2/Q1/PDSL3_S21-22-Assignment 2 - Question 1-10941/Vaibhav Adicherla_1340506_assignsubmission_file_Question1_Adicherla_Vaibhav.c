#include <stdio.h>
#include <string.h>
#include<math.h>

int main(){

    int k;
    float zi;
    printf("Z = ");
    scanf("%f",&zi);
    printf("K = ");
    scanf("%d",&k );
    int x = 0;
    int y =0;
    while(x<k){
        zi = zi-sqrt(zi);
        if(zi<0){
            zi=zi * (-1);

        }
        x++;
        printf("(%f,%d)",zi,x);
        if(zi == 0){
            break;
        }
    }
    return 0;
}
