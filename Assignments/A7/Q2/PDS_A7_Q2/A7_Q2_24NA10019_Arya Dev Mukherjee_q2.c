#include<stdio.h>
//first is a functio to find if given 2 numbers are co prime.it returns 1 if they are co prime and 0 if the are not.
int coprime(int a, int b){
    if(a<b){
        int temp = a;
        a = b;
        b = temp;
        }
    int flag = 0;    
    for(int i = 2; i <= b; i++){
        if(((a%i) == 0)&&((b%i) == 0)){
            flag++;
            }
            }
    if(flag == 0){
        return 1;
        }
        
    else{
        return 0;
        }
        }
        
int main(){
    int arr[5] = {0};
    //we take the input array.
    for(int i = 0; i<5;i++){
        int t = 0;
        printf("\nPlease enter %d index of array: ",i);
        scanf("%d", &arr[i]);
    }
    int q = 0;
    //the double loop pairs all the element and checks.
    for(int i = 0; i<5; i++){
        for(int j = i; j <5; j++){
            if(coprime(arr[i],arr[j]) == 1){
                printf("%d and %d are Co-Prime.\n", arr[i], arr[j]);
                q++;
                }
                }
                }
    if(q == 0){
    printf("\nNo Co-Prime found."); 
    }
    return 0;
    }
    
//I did not use the gcd and void pair functions. But, the double loop mechanism and co prime detector does all tat and all test case have given their desired output.
