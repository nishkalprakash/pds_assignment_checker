#include <stdio.h>
#include<limits.h>
void largestSum(int arr[],int n){
        int sum = INT_MIN,cur=0,a=0,b=0,k=0;
        for(int i =0;i<n;++i){
                cur+=arr[i]; //calculating sum of elements

            if(sum<cur){ //if sum less than current sum then new sub array
                sum=cur;
                a=k;
                b=i;//marking position where new sub array is there
            }
            if(cur<0){ //if negative current sum  = 0
                cur=0;
                k=i+1;
            }
        }

        //printing largest sum
        printf("Largest sum = %d",sum);

        //printing sub arrays
        printf("\nSub-arrays =");
        for(int i=a;i<=b;++i){
            printf(" %d",arr[i]);
        }
    }
int main()
{
    int n;
    //accepting length of array
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];

    //accepting array
    printf("Enter elements: ");
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }

    //calling function
    largestSum(arr,n);

    return 0;
}
