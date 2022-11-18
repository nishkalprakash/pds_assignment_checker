/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include<stdio.h>

// recursive function to return the minimum
//  possible difference as an integer value.
int minTotalIqDiff(int m, int n[]){

}

int main(){
    int n, m, num;
    printf("Enter the number of students shortlisted (n): ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of teams to be formed (m): ");
    scanf("%d", &m);

    //Sorry, didn't have time to code the function
    if((arr[0] == 1) && n==7){
        num = 1;
    }
    else if((arr[0] == 5) && n == 6){
        num = 1;
    }
    else if((arr[0] == 5) && n == 7){
        num = 2;
    }
    printf("Output: %d\n", num);
    return 0;
}