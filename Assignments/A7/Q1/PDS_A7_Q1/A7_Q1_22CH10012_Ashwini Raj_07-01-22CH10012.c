#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int n,r ;
    //declaring a pointer 'a'
    int* a;
    //choose random values to get number between 2 and 1000
    int p = 4, q = 800;
    srand(time(0));
    printf("Limit Value = ");
    scanf("%d",&n);
    a = (int*) malloc(n * sizeof(int));
    printf("%d-random number array ",n);
    int j = 1;
    //creating random number array
    while(j<=n){
       r = p + rand()%q;
       a[j] = r;
       printf("%d ", a[j]);
       j+=1;

    }

    int k = 0;
    while(k<n){
            int _sum = 0 ;
            int i = 1;
            k++;
            while(i<a[k]){i++;
                if(a[k]%i == 0){
                _sum = _sum + k;
                }}

            if(a[k] == _sum)
                printf("%d is a perfect number\n",a[k]);
            else{
                printf("No perfect number found\n");
                }}}
