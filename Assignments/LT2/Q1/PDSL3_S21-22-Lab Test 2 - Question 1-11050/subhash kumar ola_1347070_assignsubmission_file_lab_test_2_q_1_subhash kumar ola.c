#include <stdio.h>

void sum(int A[],int n)
{
int large=A[0],sum=0,i,m,p;
for(i=0;i<n;i++){
        sum=0;
    for(int j=i;j<n;j++){
        sum+=A[j];
        printf("%d\n",sum);
        if(sum>large){
            m=i;
            p=j;
            large=sum;
        }
    }
}
printf("largest sum : %d\n",large);
printf("Sub-Arrays: ");
for(i=m;i<=p;i++){
    printf("%d ",A[i]);
}
}

int main()
{
int n,i;
printf("Enter n: ");
scanf("%d",&n);

int A[n];
printf("Enter Elements: ");
for(i=0;i<n;i++){
    scanf("%d",&A[i]);
}
sum(A,n);

return 0;
}
