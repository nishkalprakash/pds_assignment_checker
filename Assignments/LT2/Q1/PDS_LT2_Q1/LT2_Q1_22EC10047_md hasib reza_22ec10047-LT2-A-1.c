// name: md hasib reza
// roll:22ec10047

#include<stdio.h>
#include<stdlib.h>

float sum(int*a,int n)

int main(){
int *a,n;
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));

for(int i=0;i<n; i++){
    scanf("%d",(a+i));
}
printf("List = ");s
for(int i=0;i<n;i++){
    printf("%d ",*(a+i));}

float =float mean(a,n);
printf(" mean = %f",mean);
return 0;
}
float sum(int*a,int n){
    int sum=0;
    float mean;
    for(int i=0;i<n;i++){
        sum=sum+*(a+i);
        }
        mean= sum/n;
        return mean;
}
