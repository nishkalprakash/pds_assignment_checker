#include <stdio.h>

void swap(int p, int q);// declaring our function

int main(){

int n;// declaring variable 1

printf("Enter size of the array : ");// taking input for our size of array
scanf("%d", &n);

int arr[n];// declaring our array

for(int i=0; i<n; i++){
    printf("Enter the elements of array : ");
    scanf("%d", &arr[i]);

}
for(int i=0; i<n; i++){
    printf("%d /t", arr[i]);
}

for(int i=n; i>=0; i--){
    printf("%d /t", arr[i]);
}



}

void swap(int p, int q){





return ;
}
