#include<stdio.h>
int reverse_array(int arr[100],int n)
{
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for (int i=0;i<n/2;i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
    }
    printf("%d",arr[100]);
}
char check_anagrams(char str1[100],char str2[100]){
    for (int i=0;i!='/0';i++){
        int j=0;
        if(str1[i]==str2[j]){
            printf("both are angrams");
        }
    }
}

int main()
{
    int arr[100],n,x;
    scanf("%d",x);
    if(x==1){
    scanf("\n %d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    reverse_array(arr[100],n);

    if(x==3){
        char b;
        scanf("%c",&b);
        printf("%c is a palindrome");
    }

    return 0;
}}
