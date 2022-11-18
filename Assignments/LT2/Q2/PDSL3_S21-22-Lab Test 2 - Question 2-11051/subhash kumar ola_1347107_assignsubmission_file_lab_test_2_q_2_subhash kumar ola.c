#include <stdio.h>

int main()
{
int n,i,j,count,large=0;
printf("Enter n: ");
scanf("%d",&n);

int A[n];
printf("Enter array A[]: ");
for(i=0;i<n;i++){
    scanf("%d",&A[i]);
}

for(i=1;i<n;i++){
        count=0;
    for(j=0;j<=i-1;j++){
        if(A[j]%A[i]==0){
            count++;
        }
    }
    if(count>large){
        large=count;
    }
}
printf("Output: %d",large);
}
