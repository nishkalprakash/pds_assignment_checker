/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Assignment-5
*Description-
*/




#include<stdio.h>

#define N 100

int main(){
    int arr[N],n,i,j,temp,count=0;
    printf("Enter the no. of elements(<100): ");
    scanf("%d",&n);


    if(n>=1 && n<=100){
            for(i=0;i<n;i++){
                    printf("\nEnter element %d: ",i+1);
                    scanf("%d",&arr[i]);
    }

                printf("\n\nOriginal array is: ");
                for(i=0;i<n;i++){
                       printf("%d ",arr[i]);

    }

            for(i=0;i<n;i++){
                    if(arr[i]<0){
                        temp=arr[i];
                        for(j=i;j>=count;j--){
                            arr[j]=arr[j-1];
            }
                    arr[count]=temp;
                    count++;


        }
    }

    printf("\n\nRearranged array is: ");

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);

    }



    }

    else printf("Error: n>100");



return 0;
}
