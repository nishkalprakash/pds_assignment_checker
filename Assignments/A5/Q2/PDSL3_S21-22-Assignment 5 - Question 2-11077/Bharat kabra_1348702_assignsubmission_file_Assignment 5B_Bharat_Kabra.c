/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Assignment class: 5
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,a[n],bin,max=0,count=0, *ptr;
    float quotient;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    printf("\nenter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nenter number of bins:");
    scanf("%d",bin);
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];//finding the maximum of all elements in the array
        }
    }
    quotient = (float)max/bin;
    for(i=0;i<n;i++){

    
        for(i=0;i<n;i++){
            if (a[i]<quotient*(i+1) && a[i]>quotient*i){
                count++;//counting the number of elements in a particular bin
            }
        ptr=(int*)malloc(count*sizeof(int));
        printf("bin%d->",i+1);
        for(i=0;i<n;i++){
            printf("%d, ",ptr[i]);
        }
        printf("Number of elements in bin%d = %d",i+1,count);//printing the nuumbr of elements in a bin

        }
    }
}