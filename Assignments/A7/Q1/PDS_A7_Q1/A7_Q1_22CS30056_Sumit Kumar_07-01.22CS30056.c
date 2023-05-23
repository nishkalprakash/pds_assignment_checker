#include<stdio.h>
#include <time.h>
#include<stdlib.h>
/*Name-Sumit Kumar
Roll no.-22CS30056
Section-2
Program-random number generator
*/


int perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n) return 1;
    else return 0;

}
int main(){

    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int *a = (int*) malloc(n * sizeof(int));

    srand(time(0));
    int MIN=2,MAX=1000;
    for(int i=0;i<n;i++){

       a[i] = MIN+ rand()%(MAX-1);
    }
    printf("%d-random number array:",n);
    for(int i=0;i<n;i++){
       printf("%d,",a[i]);
    }
    printf("\n");
    int count=0;
    for(int i=0;i<n;i++){
       if(perfect(a[i])!=0) {
        count++;
        printf("%d,",a[i]);
       }
    }
    if(count==0) printf("No perfect number found");
    else if(count==1) printf(" is a perfect number");
    else printf(" are perfect numbers");
    free(a);
    return 0;
}
