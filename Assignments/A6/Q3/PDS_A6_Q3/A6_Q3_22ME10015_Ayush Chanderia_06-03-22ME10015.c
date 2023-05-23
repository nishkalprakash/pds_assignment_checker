#include <stdio.h>
int palindrome(char str[25]){
    int i, flag, len=0;
    while(str[len])
        len++;
    flag=0;
    for(i=0;i<len;i++){
        if(str[i] != str[len-1-i])
            flag=1;
    }
    if(flag=0)
        return 1;
    else
        return 0;
}

 int length_str( char str[100]){
     int length=0;
     while(str[length])
        length++;
     return length;

 }
 int anagram(char stt1[],char stt2[]){
    int flag=0;
    if(length_str(stt1) != length_str(stt2))
        return 1;
    for(int j=0; stt1[j] !='\0';j++){
        for(int k=0;stt2[k] !='\0';k++){
            if(stt1[j]== stt2[k]){
                flag++;
                break;
            }
        }
    }
    if(flag==length_str(stt1)) return 0;
    else return 1;
 }
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
void revv_array(int *arra,int n){
for(int i=0;i<n/2;i++){
    swap(&arra[i],&arra[n-1-i]);
}
printf("\n");
printf("\n Array after reverse:");
for(int i=0;i<n;i++){
    printf("%d",arra[i]);
}
}
int main(){
    int choice;
printf("Enter 1,2,3 to perform a specific task:");
scanf("%d",&choice);

if(choice ==1){
    int n;
    printf("Enter the number of elements you want in an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
            }
    printf("Original array");{
        for(int k=0;k<n;k++){
            printf("%d",arr[k]);
        }
    }
    revv_array(arr,n);
    return 0;




}
else if(choice==2){
        char word1[100], word2[100];
        printf("Enter 1st String" );
        scanf("%s",word1);
        printf("Enter 2nd String" );
        scanf("%s",word2);
        int anag= anagram(word1,word2);
        if(anag==0) printf("%s and %s are anagrams",word1,word2);
        if(anag==1) printf("%s and %s are not anagrams",word1,word2);



}
else if(choice==3){
        char str[25];
        int palc;
    printf("Enter a string:");
    scanf("%s", str);
    palc= palindrome(str);
    if(palc==1){
        printf("%s is a palindrome",str);
    }
    else{
        printf("%s is not a palindrome",str);
    }
    return 0;


}
return 0;
}
