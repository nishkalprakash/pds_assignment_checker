/*
Name : Mrinmoy Dey
Roll : 22MI10040
Section : 2
Assignment : 5
Question : 2
*/
#include <stdio.h>
#include <string.h>

void swap(int *p, int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void reverse(int *a,int s,int e,int n){
    if (s>=e) {
            for (int j=0;j<n;j++){
                printf("%d ",a[j]);
            }
            return 0;
    }
    swap(&a[s],&a[e]);
    reverse(a,s+1,e-1,n);
}
int palindrome(char str[20]){
    int i, flag, len = 0;
    while (str[len]) len++;
    flag = 0;
    for (i=0;i<len;i++){
        if (str[i]!=str[len-i-1]) flag = 1;
    }
    if (flag==0) return 1;
    else return 0;
}

int len(char str[20]){
    int i, length=0;
    for (i=0; str[i]!='\0'; i++){
        length++;
    }
    return length;
}

int anagrams(){
    char str1[25];
    char str2[25];
    scanf("%s",str1);
    scanf("%s",str2);
    int temp = 0;
    if (len(str1)==len(str2)){
        for (int i=0;str1[i]!='\0';i++){
            for (int j=0;str2[i]!='\0';j++){
                if (str1[i]==str2[j]) temp++;
            }
    if (temp==0){
        printf("%s and %s are not anagrams",str1,str2);
        temp = 1;
    }
    temp = 0;
    }
    if (temp==0) {
        printf("%s and %s are anagrams",str1,str2);
    }
    }
    else{
        printf("%s and %s are not anagrams",str1,str2);
    }
}
int main(){
    int input;
    scanf("%d",&input);
    if (input==1){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        reverse(arr,0,n-1,n);
    }
    else if (input==3){
        int num;
        char str[20];
        scanf("%s",str);
        num=palindrome(str);
        if (num==1) printf("%s is a palindrome",str);
        else if (num==0) printf("%s is not a palindrome",str);
    }
    else if (input==2){
        anagrams();

}
}
