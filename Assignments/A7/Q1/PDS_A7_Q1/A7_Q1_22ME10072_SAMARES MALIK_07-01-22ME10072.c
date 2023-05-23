/*name- samares malik
  roll no-22ME10072
  assignment 7 q1*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int is_perfect(int x){ //function for checking x is a perfect number or not
    int sum =0;
    for(int i=1;i<x;i++){
        if(x%i==0){
            sum += i;
        }
    }
    if(sum==x){
        return 1;//returning 1 if perfect
    }
    else{
        return 0;//returning 0 if not perfect
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int* a;
    int r;
    int count=0;
    a = (int*)malloc(n*sizeof(int));
    time_t t;
    srand(time(t));
    for(int i=0;i<n;i++){
        r = 2+ rand()%1000;
        a[i] = r;
    }
    printf("%d-random number array:",n);
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("\n");
    //printing the perfect numbers
    for(int j=0;j<n;j++){
        if(is_perfect(a[j])==1){
            count += 1;
            printf("%d",a[j]);
            if(j!=n-1){
                printf(", ");
            }
        }
    }
    if(count==0){
        printf("No perfect number found");
    }
    else{
        printf(" are perfect numbers");
    }

    return 0;
}
