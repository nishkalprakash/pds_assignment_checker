/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>
#define N 20


int maxSum(int a[N],int n){
    int sum=0,max=0;
    //finding max sum
    for (int i=0;i<n;i++){
        sum+=a[i];
        if(sum>max){
            max=sum;
        }
    }//after loop, we have max sum;
    printf("max sum= %d\n",max);

    for (int i=0;i<n;i++){
        sum=0;
        //Traversing and making sub arrays that matches max sum
        for (int j=i;j<n;j++){
            sum+=a[j];
            if (sum==max){
                for (int k=i;k<=j;k++){
                    printf("%d,",a[k]);
                }
                printf("\n");
            }   
        }
    }
    return;
}

int main(){
    int n,a[N];
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements ");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    maxSum(a,n);

    return 0;
}