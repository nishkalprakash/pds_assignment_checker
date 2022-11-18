/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
int main()
{

    int m, n, o, p, c, d, a[10][10], k[10][10];
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of matrix\n");

    for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
      scanf("%d", &a[c][d]);

    for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
      printf("%d\t", a[c][d]);
      }
      printf("\n");
    }
    printf("Enter the number of rows and columns of the kernel matrix\n");
    scanf("%d%d", &o, &p);
    printf("Enter the elements of matrix\n");

    for (c = 0; c < o; c++)
      for (d = 0; d < p; d++)
      scanf("%d", &k[c][d]);

    for (c = 0; c < o; c++) {
      for (d = 0 ; d < p; d++) {
      printf("%d\t", k[c][d]);
      }
      printf("\n");
    }
}
