#include<stdio.h>
#include<time.h>
int main(){
int*A,n,i;
printf("enter the value of n : " );// n represent number of elements in the string
scanf("%d",&n);
A=(int*)malloc(n*sizeof(int));

time_t t;
srand(time(0));
A=10+rand()%100;
printf("random number of the array are :");
for(i=0;i<n;++i){
    printf("%d ",A+i);
}

return 0;
}

