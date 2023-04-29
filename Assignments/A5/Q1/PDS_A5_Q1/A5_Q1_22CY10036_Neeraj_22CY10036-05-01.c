/*NAME - Neeraj
Roll No.- 22CY10036
Section - 2
Descripion -            */
#include<stdio.h>
#define N 100
int main(){
    int n, arr[100],i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n<=100){
        for(i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("original array:");
        for(i = 0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        printf("Rearranged array:");
        for (i = 0;i<n;i++){

                   if (arr[i]<0) {
                    printf("%d ",arr[i]);
                   }

                }

        for (i = 0;i<n;i++){

                   if (arr[i]>0) {
                    printf("%d ",arr[i]);
                   }

                }



        }



    else
        printf("Error n> %d",n);



    return 0;
}
