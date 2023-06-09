
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void RandInOut(int *Number, int n, int p, int q) {
    int i;
    for (i = 0; i < n; i++) {
        Number[i] = (rand() % (q - p + 1)) + p;
    }
}

int max(int *Number, int start, int end) {
    if (start == end) {
        return Number[start];
    } else {
        int mid = (start + end) / 2;
        int m1 = max(Number, start, mid);
        int m2 = max(Number, mid + 1, end);
        return (m1 > m2) ? m1 : m2;
    }
}

int main() {
    int *Number;
    int n, p, q;
    Number=(int *)malloc(n*sizeof(int));

    scanf("%d", &n);


    scanf("%d %d", &p, &q);
    if(p>q){
        printf("p should be less or equal to q");
    }


    srand(time(0));

    RandInOut(Number, n, p, q);

    if (n==0){
        printf("Invalid value of n");
        }
    else{
        printf("List = ");
        printf("[");
        for (int i = 0; i < n-1; i++) {

        printf("%d,", Number[i]);
        }
        printf("%d]\n",Number[n-1]);
    }
    int max_value = max(Number, 0, n - 1);
    printf("Max = %d\n", max_value);

    return 0;
}
