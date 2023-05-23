/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO:5
DESCRIPTION:random perfect
*/
#include <stdio.h>
#include <time.h>
#include <math.h>
int main(){
    int *a,*b,n,e,f,i,j,k=0;
    time_t t;
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(n*sizeof(int));
    srand(time(t));
    for (i=0;i<n;i++){
        a[i]=2+rand()%1000;
    }
    printf("%d-random number array:",n);
    for(i=0;i<n;i++){
            printf("%d ",a[i]);
    }
    printf("\n");
    for (i=0;i<n;i++){
        e=a[i];
        for (j=0;j<e;j++){
            if (e==((int)pow(j,2))){
                b[k]=e;
                k+=1;
                break;
            }
        }
    }
    if (k==0) printf("no perfect number found");
    else {
        for(i=0;i<k;i++)    printf("%d, ",b[i]);
        printf("are perfect numbers");
    }




}

