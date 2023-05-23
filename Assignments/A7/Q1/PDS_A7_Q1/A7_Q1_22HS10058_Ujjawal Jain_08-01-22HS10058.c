/*sec2
Assignment no.8
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 1
*/
#include<stdio.h>
#include <time.h>
#include<stdlib.h>
int perfect(int x){
    int sum = 0;
    for(int i=1;i<x;i++){
        if((x%i)==0){
            sum = sum + i;
        }
    }
    if(sum==x){
        return 1;
    }
    return 0;


}
int main(){
    int n;
    time_t t;
    srand(time(0));


    scanf("%d",&n);
    int *a;
    a = (int*) malloc(n * sizeof(int));
    for(int i=0;i<n;i++){

        *(a+i) = 2+ rand()%1000;
    }
    int b[n-1];
    int f=0;

    for(int i=0;i<n;i++){
        if(perfect(*(a+i))==1){
            b[f++]= *(a+i);

        }
    }

    printf("%d-random number array: ",n);

    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
    printf("\n");

    if(f>1){
        for(int i=0;i<f;i++){
        printf("%d ",*(b+i));

    }
    printf("are perfect numbers");

    }
    else if(f==1){
        printf("%d is a perfect number.",b[0]);
    }
    else{
        printf("No perfect number found");
    }


return 0;
}
