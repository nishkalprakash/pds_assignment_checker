/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment :: 9
Question :: 2
*/
#include <stdio.h>
typedef struct vector{
    int n;
    float *v;
}vec;
vec read(vec a){
    int n;
    scanf("%d",&a.n);
    a.v = (float *)malloc(a.n*sizeof(float));
    for (int i=0;i<a.n;i++){
        scanf("%f",&a.v[i]);
    }

    return a;
}
void check(vec a,vec b){
    int sum=0;
    for(int i=0;i<a.n;i++){
        sum+=(a.v[i]*b.v[i]);
    }
    if (sum==0) printf("Vectors are orthogonal");
    else {
        float m;
        int ctr=0;
        m = (float)(a.v[0])/(b.v[0]);
        for (int i=0;i<a.n;i++){
            if ((float)(a.v[i])/b.v[i]==m) ctr++;
        }
        (ctr==a.n)?printf("Identical Vectors"):printf("The vectors are neither similar nor orthogonal.");
    }
}
int main(){
    vec a,b;
    a = read(a);
    b = read(b);
    if (a.n!=b.n) printf("Dimensions are not equal.");
    else check(a,b);
    return 0;
}
