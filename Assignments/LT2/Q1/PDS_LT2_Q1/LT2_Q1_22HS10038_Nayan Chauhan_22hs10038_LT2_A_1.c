#include <stdio.h>
float mean(int *a, int n)
{
    float m;
    if(n>1){
    m += mean(a+1, n-1)+ *a;
    }
    else if(n=1) m = *a;
    return m;
}
int main()
{
    int n;
    int a[n];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("List = [");
    for(int i=0; i<n-1; i++){
        printf("%d, ", a[i]);
    }
    printf("%d]", a[n-1]);
    float m = mean(a, n);
    m/=n;
    printf("Mean = %.2f", m);
}
