/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment:question 2
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int distance(unsigned int n){
int d=0;

   for(unsigned int i=1;i<=n;i++){
    int p =rand()& 1 ? -1 :1;
    d+=p;

   }
   return d;


}

int main(){

    srand(time(NULL));
    unsigned int k;
    scanf("%u",k);
    int D=0;
    for(unsigned int i=1;i<=k;i++){
        int res = distance(i);
        D+=res*res;
    }

    float result =sqrt((float)(D/k));
    printf("%f",result);
    return 0;
}
