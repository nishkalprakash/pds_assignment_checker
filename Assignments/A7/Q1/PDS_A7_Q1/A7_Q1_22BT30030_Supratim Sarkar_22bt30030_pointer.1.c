 #include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    int n,number,sum,remainder;
    int i, j;
    scanf("%d", &n);
    srand(time(0));
    printf("%d\n", n);

    int *arr =  (int *) malloc(n * sizeof(int));

    for ( i = 0; i < n; i++) {
        //scanf("%d", &arr[i]);
        arr[i] = 2 + rand()%1000;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);


        for ( j = 1; j < n; j++) {

            remainder = arr[i] % j;
            if (remainder == 0)
            {
                sum = sum + i ;

            }


        }

        if (sum == arr[i]) {
            printf("its a perfect number");
        }
         else {


                   printf ("its not a perfect number");
            }

    }
return 0;

}
