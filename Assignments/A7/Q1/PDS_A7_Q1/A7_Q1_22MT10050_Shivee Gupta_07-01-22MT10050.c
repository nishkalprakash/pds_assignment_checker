#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int n,i,j,sum,count=0,r;

printf("Enter the number of elements in array : ");
scanf("%d",&n);
int *a = (int*)malloc(n*sizeof(int));
printf("%d-random numbers array : ",n);
srand(time(0));

for(i=0;i<n;++i){
    r = 2 + rand()%1000;
    printf("%d ",r);

    a[i]=r;
}
printf("\n");
for(i=0;i<n;++i){
    sum =0;
    for(j=1;j<a[i];++j){
    if(a[i]%j == 0) sum = sum+j;
    }
    if(a[i]==sum){++count;
            printf("%d is a perfect number\n",a[i]);}
}
printf("%d perfect numbers found\n",count);
free(a);
return 0;
}
