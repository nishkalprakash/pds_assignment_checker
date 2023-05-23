#include <stdio.h>

int main(){

// PART A of the question

int n; // declaring variable for size of array
printf("Enter value of n : ");
scanf("%d", &n); // taking input for n

int arr[n]; // declaring our array

for(int i=0; i<n; i++){
   scanf("%d", &arr[i]);
}

printf("Your reversed array is : ");
for(int i=n; i>0; i--){
   printf("%d", arr[i]);
}







return 0;
}
