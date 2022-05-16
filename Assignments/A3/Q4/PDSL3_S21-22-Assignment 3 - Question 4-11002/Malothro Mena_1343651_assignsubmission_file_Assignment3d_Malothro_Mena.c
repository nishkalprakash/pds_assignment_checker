#include<stdio.h>
int linear_search(int a[], int n, int x) {
  for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        return 1;
    }
  return -1;
}
int main(){
    int n, a[100], i, x, check;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the elements in sorted order\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        printf("%d\t", a[i]);
    }
    printf("\nEnter the key\n");
    scanf("%d", &x);
    check = linear_search(n, a, x);
    if (check == 1) printf("Element %d has been found at the index %d\n", a[i], i);
    else if(check == -1) printf("element not found\n");
    return 0;
}
