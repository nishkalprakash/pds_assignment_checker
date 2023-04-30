/*name - samares malik
roll no-22ME10072
assignment 5*/
#include<stdio.h>
#include<math.h>
void swap(int *m,int *n){ //function for swapping two integers
    int t;
    t=*m;*m=*n;*n=t;
    //n = temp;
}
void reverse(int *arr,int m){ //function for reversing the array
    for(int i=0;i<(m/2);i++){
        swap(&arr[i],&arr[m-1-i]);
    }
}


int main(){
    int n, dir;
    printf("Enter the size of the array and the direction:");
    scanf("%d%d",&n,&dir);
    int arr[n]; //declaring array
    printf("\n Enter %d integers",n);
    printf("\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); //taking integers from the user
    }
    reverse(arr,n);
    printf("\nReversed array: ");
    for(int j=0;j<n;j++){

        printf("%d ",arr[j]);// printing the reversed array
    }
    return 0;








}

