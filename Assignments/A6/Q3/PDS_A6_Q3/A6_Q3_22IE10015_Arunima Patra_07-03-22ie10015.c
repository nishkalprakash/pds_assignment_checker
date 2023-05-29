//sec 2
//Assignment no-7
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>
void reverse(int arr[],int n){
    for(int k=0; k<n/2; k++){
        int temp=arr[n-k-1];
        arr[n-k-1]=arr[k];
        arr[k]=temp;
    }

}
int anagram(char str1[], char str2[]){
    int len1=0, len2=0;int check=0;
   for(int i=0; str1[i]!='\0'; i++){
      len1++;
   }
   for(int i=0; str2[i]!='\0'; i++){
      len2++;
   }
   if(len1!=len2){
    return 0;
   }
   for(int i=0; str1[i]!='\0'; i++){
      for(int j=0; str2[j]!='\0'; j++){
        if(str1[i]!=str2[j]){
            check++;
        }
      }
      if(check==len2){
        return 0;
      }
   }

    return 1;



}
int palindrome(char str[]){
    int len=0;
    for(int i=0; str[i]!='\0'; i++){
        len++;
    }
    for(int i=0; i<len/2; i++){
        if(str[len-i-1]!=str[i]){
            return 0;
        }
    }
    return 1;



}
int main(){
    int i,n,size;
    printf("Enter the value:");
    scanf("%d", &n);
    if(n==1){
    int arr[100];

    printf("Enter the value:");
    scanf("%d", &size);
    printf("Enter the array elements:");
    for(int k=0; k<size; k++){
        scanf("%d", &arr[k]);
    }

    reverse(arr,size);
    for(int k=0; k<size; k++){
        printf("%d\t", arr[k]);
    }
    }
    if(n==2){
       char str1[100], str2[100];
       scanf("%s", str1);
       scanf("%s", str2);
       if(anagram(str1, str2)){
        printf("%s and %s are anagrams", str1, str2);
       }
       else{
        printf("%s and %s are not anagrams", str1, str2);
       }
    }
    if(n==3){
        char str[100];
        scanf("%s", str);
        if(palindrome(str)){
            printf("%s is a palindrome", str);

        }
        else{
           printf("%s is not a palindrome", str);
        }
    }

return 0;


}
