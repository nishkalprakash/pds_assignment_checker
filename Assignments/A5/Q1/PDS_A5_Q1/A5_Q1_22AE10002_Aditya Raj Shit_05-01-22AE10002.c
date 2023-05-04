
/*
Name-Aditya Raj Shit
Roll no.-22AE10002
Assignment no.-5
Description-
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[100];                               //creating the array
    printf("Enter the array elements: \n");
    for(int h=0;h<n;h++){                       //taking user input for the array
        scanf("%d",&arr[h]);
    }

    int a=0;
    while(arr[a]>0 && a<n){
        a++;
    }
    int b=a;
    while(b>0 && b!=n){
        int temp=arr[b];
        arr[b]=arr[b-1];
        arr[b-1]=temp;
        b--;
    }

    //rearranging numbers
    for(int i=0;i<n;i++){
            int j=0;


            if(arr[i]<0){
                j=i+1;

                while(arr[j]>=0){
                    j++;
                    if(j>n-1){
                        break;
                    }
                }

                if(j==n){
                    break;
                }

                int k=j;
                while(k>i+1){
                    int temp=arr[k];
                    arr[k]=arr[k-1];
                    arr[k-1]=temp;
                    k--;
                }
            }

    }
    printf("Updated array: \n");
    for(int l=0;l<n;l++){
        printf("%d ",arr[l]);
    }


}
