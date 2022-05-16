/*
Name: Ankit Yadav
Roll NO: 21EE30005
Department: Electrical Engineering
Operating System: Windows 11
Package: Codeblocks
Assignment class:2
*/

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<math.h>

int main(){
    srand(time(NULL));

    int p;
    float n,D,d,i,k,j,t,DE;
    D=0;

    printf("Enter the value of n and k\n ");
    scanf("%f %f",&n,&k);

    for(i=0;i<k;i++){

        d=0;
        for(j=0;j<n;j++){
            p=rand()& 1 ? -1 : 1;
            d=d+p;
        }

        D=D+(d*d);
    }
    DE=sqrt(D/k);
    printf("\n%f",DE);

return 0;
}
