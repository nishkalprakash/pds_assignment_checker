// Code Creator: NP (nishkal@iitkgp.ac.in)
/* 3. Numero-Pyramid
Enter the number of rows: 7
      1
     232
    34543
   4567654
  567898765
 67890109876
7890123210987

Enter the number of rows: 10
         1
        232
       34543
      4567654
     567898765
    67890109876
   7890123210987
  890123454321098
 90123456765432109
0123456789876543210

Hint: Develop a formula to generate the output for each line.
*/
#include <stdio.h>
int main()
{
    int n, i, j, k, l;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (k = i; k < 2*i; k++)
            printf("%d", k%10);
        for (l = 2*i-2; l >= i; l--)
            printf("%d", l%10);
        printf("\n");
    }
    return 0;
}

