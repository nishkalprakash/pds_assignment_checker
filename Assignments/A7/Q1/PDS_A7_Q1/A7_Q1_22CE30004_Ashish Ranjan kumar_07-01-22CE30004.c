#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int *a, n,r;
    int p = 2;
    int q = 1000;
    printf("Enter the limit value: ");
    scanf("%d", &n);
    srand(time(0));
    a = (int*) malloc(n*sizeof(int));
    printf("%d-random number array: ",n);
    for(int i=0; i<n; i++) {
        r = p+ rand()%q;
        a[i] = r;
        printf("%d ", a[i]);

    }
    for(int j=0; j<n; j++) {
        int sum = 0;
        for(int k=1; k<a[j]; k++) {
            if(a[j]%k==0)
                sum = sum+k;

        }
        if(a[j]==sum)
            printf("\n %d is a perfect number.", a[j]);
         else
            printf("\n No perfect number found ");

    }



    return 0;
}
