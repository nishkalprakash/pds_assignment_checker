# include<stdio.h>
int main () {
int n;
printf("Number of elements in one row : ");
scanf("%d", &n);
int num[n][n];
printf("Enter the elements : ");
for(int i=0;i<n;i++) {
for(int j=0;j<n;j++) {
    scanf("%d", &num[i][j]);
}
} printf("Column major order :");
for(int i=0;i<n;i++) {
for(int j=0;j<n;j++) {
    printf("%d ", num[j][i]);
}
} return 0;
}
