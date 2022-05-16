#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
int p,i,j;
float d=0,De,n,k,D=0;
p = rand() & 1 ? -1 : 1;
printf("enter value of n- ");
scanf("%f",&n);
printf("enter value of k- ");
scanf("%f",&k);

for(i=0;i<k;i++){
        p = rand() & 1 ? -1 : 1;
    for(j=0;j<n;j++){
            p = rand() & 1 ? -1 : 1;
        d=d+p;
    }
    D=D+pow(d,2);
}
De=sqrt(D/k);
printf("De=%f",De);
return 0;
}
