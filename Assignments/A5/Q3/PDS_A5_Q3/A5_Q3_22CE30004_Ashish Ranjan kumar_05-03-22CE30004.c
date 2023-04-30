/**#include<stdio.h>
/**void swap(int p, int q);
int main() {
    int a[100],n,i,a;
    printf("Enter the size of the Array and direction: ");
    scanf("%d %d", &n, &a);
    printf("Enter %d integers: \n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
  /**  void swap(int p, int q) {

}**/
#include<stdio.h>
int main() {
    int a[100],n,b,i;

    printf("Enter the size of the array and direction: ");
    scanf("%d %d", &n, &b);
    printf("Enter %d integers: ",n);

    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original Array: ");
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nArray after reverse: ");
    for(i=n-1; i>=0; i--) {
       printf("%d ", a[i]);
    }

    swap(&a[n-1], &a[n]);
    if(b<0) {
    printf("\nArray after left cyclic shift: ");
    printf("%d %d", a[n-i],a[n]);
    i++;
    }
    else
    printf("\nArray after right cyclic shift: ");
    printf("%d %d", a[n],a[n-i]);
    i++;


}

void swap(int *p, int *q) {
    int t;
    t = *p;
    *p = *q;
    *q = t;
}



