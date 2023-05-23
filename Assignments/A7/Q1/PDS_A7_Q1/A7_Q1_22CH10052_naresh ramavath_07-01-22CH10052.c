#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n,*a,s=2,r=1000;
    int i,j,p,k=0;

    scanf("%d",&n);
    srand(time(0));

    a = (int *) malloc(n * sizeof(int ));
    printf("%d-random number array: ",n);
   // srand(time(0));
    for( i=0;i<n;i++){

       r=2+rand()%1000;
      a[i]=r;
     printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++){
           int  sum =0;
        for(int j=1;j<a[i];j++){
            if(a[i]%j==0){
                sum=sum+j;
            }

        }if(a[i]==sum){

        printf("%d is a perfect number\n ",a[i]);
               }
else {
    printf("no perfect number is found\n");
}


    } return 0;
     }
