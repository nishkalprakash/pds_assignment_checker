#include <stdio.h>
int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int A[n];
    printf("A[n] = ");
    for(int i=0; i<n; i++)
    scanf("&d", &A[i]);
return 0;
}
