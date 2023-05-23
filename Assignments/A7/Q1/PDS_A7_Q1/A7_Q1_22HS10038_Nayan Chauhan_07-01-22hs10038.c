/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 6
* Description :
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int n;
    scanf("%d", &n);
    int check=0;
    int *a;
    a = (int *)malloc(n*sizeof(int));
    int p = 2, q =1000;
    int r;
    for(int i=0; i<n; i++){
        int sum;
        r = p + rand()%q;
        *(a + i) = r;
}
    printf("5 random number array: \n");
    for(int i=0; i<n; i++){
        printf("%d ", *(a+i));
    }
    printf("\n");
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=1; j<*(a+i); j++){
            if((*(a+i))%j==0) sum+=j;
            }
        if(sum == *(a+i)){
            check++;
            printf("%d", (*(a+i)));
        }
    }
    printf("%d", check);
    if(check==0) printf("NO perfect number found");
    else if(check==1) printf(" is a perfect number");
    else printf(" are perfect numbers");
    }
