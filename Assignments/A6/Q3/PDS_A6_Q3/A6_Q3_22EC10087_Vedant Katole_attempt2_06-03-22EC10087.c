/* Name - Vedant Katole
Roll no - 22EC10087
Section - 2
lab no- 6
problem no - 1*/

#include<stdio.h>

void reverse(int arr[],int n){
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void anagrams(char str1[],char str2[], int i1, int i2){
    if(i1 != i2){
        printf("the input strings are not anagrams");
    }
    else{
        int counter1 = 0;
        int flag = 1;
        for(counter1 = 0; counter1 <= i1; counter1++){
            for(int counter2 = 0; counter2 <= i2; counter2++){
                if(str1[counter1] == str2[counter2]){
                    flag++;
                    break;
                }
            }
        }
        if(counter1 == flag)
            printf("the input strings are anagrams");
        else
            printf("the input strings are not anagrams");
    }
}

void palindrome(char str[], int count){
    int flag_palindrome = 1;
    for(int a = 0; a <= count/2; a++){
        if(str[a] != str[count - a]){
            flag_palindrome = 0;
        }
    }
    if(flag_palindrome == 1)
        printf("it is a palindrome");
    else if(flag_palindrome == 0)
        printf("it is not a palindrome");
}

void main(){
    printf("Enter problem number to be executed:");
    int prob_num;
    scanf("%d", &prob_num);
    if(prob_num == 1){
        printf("enter the size of array:")
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        reverse(arr, n);
    }

    else if(prob_num == 2){
        char str1[20], str2[20];
        int i1 = 0;
        int i2 = 0;
        scanf("%s", str1);
        scanf("%s", str2);
        for(i1 = 0; str1[i1] == '\0'; i1++);
        for(i2 = 0; str1[i2] == '\0'; i2++);
        anagrams(str1, str2, i1, i2);
    }

    else if(prob_num == 3){
        char str[20];
        int count = 0;
        scanf("%s", str);
        for(count = 0; str[count] == '\0'; count++);
        palindrome(str, count);
    }

}
