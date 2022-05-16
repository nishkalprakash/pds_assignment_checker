# include <stdio.h>

int main(){
    int a,u,alpha;
    printf("enter the values of a u and alpha");
    scanf("%d%d%d", &a, &u, &alpha);
    float t;
    printf("enter the time=\n");
    scanf("%f",&t);
    float x = u*t;
    float y = 0.5*alpha*t*t;
    float s = a+x+y;
    printf("distance= %f",s);
    return 0;
}
