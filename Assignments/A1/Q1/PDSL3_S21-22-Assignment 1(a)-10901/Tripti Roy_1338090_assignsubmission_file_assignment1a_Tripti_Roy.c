# include<stdio.h>
int main(){
    float a, u, alpha, time, distance;
    printf("Enter the value of a, u, alpha in order:\n");
    scanf("%f%f%f", &a,&u,&alpha);
    printf("Enter the time:\n");
    scanf("%f", &time);
    distance= a + u*time + 0.5*(alpha*time*time);

    printf("Distance=%f\n",distance);
    return 0;
}
