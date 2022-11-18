#include<stdio.h>
#include<stdlib.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

void scanarray(int* a,int n){
    printf("Enter array elements: \n");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    return;
}

void bin(int* a, int r1, int r2, int n, int k){
    int* b;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= r1 && a[i] <= r2)
        {
            cnt++;
        }

    }
    b = (int*) malloc(cnt*sizeof(int));
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= r1 && a[i] <= r2)
        {
            b[j] = a[i];
            j++;
        }

    }
    printf("bin%d-> ", k);
    for (int i = 0; i < cnt-1; i++) printf("%d, ", b[i]);
    printf("%d ", b[cnt-1]);
    printf("Elements in bin%d-> %d\n", k, cnt);
    return;
}

void binmanage(int* a, int r1, int r2, int t, int n){
    int add = (int) r2/t;
    int max = (int) r2/t;
    int min = r1, k = 1;
    while ((max-add) <= r2 && k <= t)
    {
        bin(a, min, max, n, k);
        min = max;
        max += add;
        k++;
    }
    return;
}

int main(){
    int* a, b;
    int n, t;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int));
    scanarray(a, n);
    int r1 = 1, r2 = a[n-1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > r2) r2 = a[i];
    }
    printf("Enter no. of bins: ");
    scanf("%d", &t);
    binmanage(a, r1, r2, t, n);
    return 0;
}
