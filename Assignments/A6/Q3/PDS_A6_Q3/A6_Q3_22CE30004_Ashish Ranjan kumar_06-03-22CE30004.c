#include<stdio.h>
int main() {
    int arr[100],n;
    printf("Enter the limit(>n) ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int j=n-1; j>=0; j--) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    char str1[100], str2[100];
    scanf("%s %s", str1,str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1==len2) {
        for(int i=0; i!='\0'; i++){
            if(str1[i]==str2[i])
                printf("%s and %s are anagrams", str1, str2);

            else
                printf("%s and %s are not anagrams", str1, str2);
        }
    }
    else {
        printf("%s and %s are not anagrams", str1, str2);
    }
}
