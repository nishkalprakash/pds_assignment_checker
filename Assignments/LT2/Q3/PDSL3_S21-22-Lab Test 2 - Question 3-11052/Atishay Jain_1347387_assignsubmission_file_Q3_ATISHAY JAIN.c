#include <stdio.h>
#include <limits.h>

int diffBetweenMaxAndMin(int *sumArr,int m) // return the difference between the max and min value of array
{
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for(int i=0;i<m;i++)
    {
        if(sumArr[i] < minVal)
            minVal = sumArr[i];
        if(sumArr[i] > maxVal)
            maxVal = sumArr[i];
    }
    return maxVal-minVal;
}

int minDiff = INT_MAX;

void minTotalIqDiff(int m,int* sumArr, int* arr,int i,int n){
    // calculate the minimum difference when every student is distributed
    if(i==n){
        int tmp = diffBetweenMaxAndMin(sumArr,m);
        if(minDiff > tmp){
            minDiff = tmp;
        }
        return;
    }

    for(int j=0;j<m;j++){
        sumArr[j] += arr[i];
        minTotalIqDiff(m,sumArr,arr,i+1,n);
        sumArr[j] -= arr[i];
    }

    return;
}

void main() {
    // Take input form user
    int n;
    int m;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array n[]: ");
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i]); // taking entries in array
    printf("Enter m: ");
       scanf("%d",&m);

    int sumArr[m];
    for(int i=0;i<m;i++){
        sumArr[i] = 0;
    }
    minTotalIqDiff(m,sumArr,arr,0,n);
    printf("Output: %d\n",minDiff);

   getch();
}
