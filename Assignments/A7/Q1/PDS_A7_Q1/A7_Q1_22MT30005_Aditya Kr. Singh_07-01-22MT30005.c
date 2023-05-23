#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(0));
    int *x, n, r ;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    x=(int*) malloc(n*sizeof(int));
    printf("5-random number array: ");


    for(int i=0;i<n;i++){
        r = 2 + rand()%1000;
        printf("%d ",r);
        x[i]=r;
    }



    for(int i=0;i<n;i++)
    scanf("%d", &x[i]);

    for(int i=0;i<n;i++)
        printf("%6d",x[i]);

    for(int i=0;i<n;i++){
            for(int a=1;a<n;a++){
                if(x[i]%a==0)
                {
                    printf("%d",a);
                }
                else continue;

            }

    }




    return 0;



}
