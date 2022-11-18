/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include <stdio.h>
int main()
{

    int m, n, c, d, a[10][10];
    printf("Enter the number of rows and columns of Array:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of Matrix only 1's and 0's:\n");

    for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
      scanf("%d", &a[c][d]);

    for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
      printf("%d\t", a[c][d]);
      }
      printf("\n");
    }
    getch();
}
