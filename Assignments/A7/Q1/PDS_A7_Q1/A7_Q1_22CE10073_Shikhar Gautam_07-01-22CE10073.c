#include <stdio.h>
#include <time.h>

void perfnumber(int n); // declaring function to calculate perfect number

int main(){

    int n; // declaring variable for size of n
    time_t t;

    printf("Enter size of array : ");
    scanf("%d", &n); // taking input for size of n

    int *arr; // declaring our array pointer
    arr = (int*)calloc(n,sizeof(int)); // demanding size for n size of elements

    //printf("Enter array elements : ");
    for(int i=0; i<n; i++){
    //scanf("%d", &arr[i]); // taking input for array elements
        arr[i] = 1+rand()%500;  // Generate random numbers in the range 1 to 500
    }

    printf("%dPrinting the array : "); // printing random numbers stored in the array
    for(int i=0; i<n; i++){
        printf(" %6d \n", arr[i]);
    }
    perfnumber(n); // calling function and passing argument (n)

}

void perfnumber(int n){

int i=1 , sum=0;

for(i=1; i<n; i++){

    if(n%i==0){
        sum = sum + i;
    }


}
 if(sum == n){
        printf("%d is a perfect number", n);
    }
    else{
        printf("%d is not a perfect number", n);
    }



}

