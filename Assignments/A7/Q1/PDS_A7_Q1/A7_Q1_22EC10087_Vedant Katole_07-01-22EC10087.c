/* Name- Vedant Katole
section - 2
roll np - 22EC10087
Lab - 7
problem n0 - 1 */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int sumFac(int n){
   int sum = 0, i;
   for(int i = 1; i < n; i++){
    if(n % i == 0)
        sum += i;
   }
   return sum;
}

void main()
{
    int n;
    int *a;
    int flag = 0;
    printf("Enter n:");
    scanf("%d", &n);
    a = (int*) malloc(n * sizeof(int));
    //time_t t;
    srand(time(0));
    for(int i = 0; i < n; i++){
        *(a + i) = 2 + rand()%1000;
    }

    printf("random number array: ");
    for(int i = 0; i < n; i++){
       printf("%d ", *(a+i));
    }

    for(int i = 0; i < n; i++){
        if(*(a+i) == sumFac(*(a+i))){
            printf("\n%d is a perfect number", *(a+i));
            flag = 1;
        }
    }
    if ( flag == 0)
            printf("\nNo perfect number found");
}
