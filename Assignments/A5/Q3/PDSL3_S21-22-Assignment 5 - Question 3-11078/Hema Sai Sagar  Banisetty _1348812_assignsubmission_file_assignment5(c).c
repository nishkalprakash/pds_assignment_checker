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
    int s, p, l, f=1;
    printf("Enter the number of rows and columns of Array\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of Array\n");

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
    for(c=0; c<m; c++){
        p=0;
        s=a[c][0];
        for(d=0; d<m; d++){
            if(s>a[c][d]){
                s=a[c][d];
                p=d;
            }
        }
        l=0;
        for(d=0; d<m; d++){
            if(l<a[d][p]){
                l=a[d][p];
            }
        }
        if(s==l){
            printf("\nValue of saddle point is %d", s);
            f=0;
        }
    }
    if(f>0){
        printf("\nNo saddle point");
    }
    return 0;
}
