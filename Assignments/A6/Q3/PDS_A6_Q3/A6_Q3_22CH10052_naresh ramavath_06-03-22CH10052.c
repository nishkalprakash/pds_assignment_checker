#include<stdio.h>
#include<math.h>
int main(){
    int array[100],n,i,j;
    printf("enter the number<100:");
    scanf("%d",&n);
    void reverse(int arr[n]){
    for(int i=0;j=n;i<j;i++;J--){
    int temp =arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }return ;
   }
   int main(){
   int arr[n];
   scanf("%d",arr[i]);
   reverse(arr[i]);
   }
    int palindrome(char str[]){
    int length =0;
    while (str[length]!= 0){
        length++;
    }
    for(int i= 0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            return 0;
        }
        return 1;
    }
    int anagram(char str1[],char str2[]){
    int length1=0,length2=0,i;
    while(str1[length1]!=0){
        length1++;
    }
    while(str2[length2]!=0){
        length2++;
    }
    if(length1!=length2){
        return 0;
    }
    int count(100)={0};
    for(i=0;i<length1;i++){
        count(str1[i])++;
         count(str2[i])++;

    }for(i=0;i<100;i++){
        if(count(i)!=0){
          return 0;
        }

    }
    return 1;

    }



    }int main(){
    char str1[20],str2[20];
    printf("Enter the first string:");
    scanf("%s",&str1);
     printf("Enter the second string:");
    scanf("%s",&str2);
    if(palindrome(str1)){
        printf("%s,given input is palindrome\n",str1);
    }else {
        printf("%s,is not a palindrome\n",str1);
    }

if(palindrome(str2)){
        printf("%s given input is palindrome\n",str2);
    }else {
        printf("%s is not a palindrome\n",str2);
    }

}
if(anagram(char str1,char str2)){
    printf("given %s and %s are anagram\n",str1,str2);
}
else {
    print("given input %s and %s are not the anagram\n",str1,str2);
}return 0;

}
