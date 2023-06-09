#include int sum(int a[], int n){
    if (n == 0){return a[0 }; 
    } return a[0] + sum(a + 1, n - 1); 
    double mean(int a[n], int n){if (n == 0){return 0.00 } 
    int add = sum(a, n)' int c = n; return (double) add /c ;
}

int main
{
    int n;
    printf("enter the no of elemets in array");
    scanf(% d, &n);