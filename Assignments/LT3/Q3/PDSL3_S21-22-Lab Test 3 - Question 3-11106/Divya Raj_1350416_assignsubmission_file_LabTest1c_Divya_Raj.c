/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void pattern(char num1, char num2, char *arr, int count) {
    if (count == 5){
        arr[5] = '\0';
        if (atoi(arr) % (num1 - 48 + num2 - 48) != 0)
            printf("%s ", arr);
        return;
    }
    arr[count] = num1;
    pattern(num1, num2, arr, count+1);
    arr[count] = num2;
    pattern(num1, num2, arr, count+1);
}   

int main(){
    char num1, num2;
    printf("Enter two digits: ");
    scanf("%c %c", &num1, &num2);
    char arr1[6];
    printf("Numbers: \n");
    pattern(num1, num2, arr1, 0); 
    printf("\n");
    return 0;
}