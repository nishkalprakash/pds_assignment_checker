#include<stdio.h>
int main(){
    int i, n, x[100], y[100];
    float Mx, My, b, sumx=0, sumy=0, m=0;
    printf("Enter the number of coordinates\n");
    scanf("%d", &n);
    printf("coordinates are-\n");
    for(i=0;i<n;i++){
        scanf("%d%d", &x[i], &y[i]);
        printf("%d. (%d,%d)\n", i+1, x[i], y[i]);
    }
    for(i=0;i<n;i++){
        sumx += x[i];
        sumy += y[i];
    }
    Mx= sumx/n;
    My=sumy/n;
    printf("Mean of coordinates is (%0.2f,%0.2f)\n", Mx, My);
    for(i=0;i<n;i++){
        m += ((x[i]-Mx)*(y[i]-My))/((x[i]-Mx)*(x[i]-Mx));
    }
    printf("slope is %0.2f\n", m);
    b = My - m*Mx;
    printf("intercept is %0.2f\n", b);
    printf(" equation is y = %0.2fx + %0.2f\n", m, b);
    return 0;
}
