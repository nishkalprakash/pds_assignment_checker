#include<stdio.h>
#include<string.h>
#define N 10//N has been defined to 10 for the array
/*function for printing the different combination of the numbers*/
void print(int *num, int l)//using pointer
{
    int i, j;
    for ( i = 0 ; i < l ; i++)
        printf("%d ", num[i]);
    printf("\n");
}
int main()
{
    int num[N];
    int k;
    int i, l, j;
    printf("\n enter value of l: ");
        scanf("%d", &l);
    printf("\nEnter a list of numbers for the array:\n");
    for (i = 0 ; i <l ;i++)
        scanf("%d", &num[i]);
    for (j = 1; j <= l; j++) {
        for (i = 0; i <l-1; i++) {
            k = num[i];
            num[i] = num[i+1];
            num[i+1] = k;

            print(num,l);

	}
    }
    return 0;
}
