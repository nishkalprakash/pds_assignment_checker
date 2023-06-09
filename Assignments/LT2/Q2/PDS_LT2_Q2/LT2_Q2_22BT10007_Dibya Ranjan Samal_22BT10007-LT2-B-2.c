#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generateRandomNumber(int p, int q) {

    return (rand() % (q - p + 1)) + p;
}

int max(int *a, int start, int end)
 {
   if (start == end) {
     return a[start];

    } else {

        int mid = (start + end) / 2;
        int max1 = max(a, start, mid);
        int max2 = max(a, mid + 1, end);
        return (max1 > max2) ? max1 : max2;
      }
 }
int main() {

    int n, p, q;
    scanf("%d", &n);
    scanf("%d %d", &p, &q);
    if(p>q){printf("p should be less than or equal to q");}
    else{
    if(n<=0)printf("Invalid Value of N");
    else{

    int *numbers = (int *)malloc(n * sizeof(int));
    srand(time(0));

    printf("List = ");

    for (int i = 0; i < n; i++)
    {
    numbers[i] = generateRandomNumber(p, q);
    printf("%d ", numbers[i]);
    }
    printf("\n");
    int maxVal = max(numbers, 0, n - 1);
    printf("Max = %d\n", maxVal);
    free(numbers);
    }
    return 0;}}


