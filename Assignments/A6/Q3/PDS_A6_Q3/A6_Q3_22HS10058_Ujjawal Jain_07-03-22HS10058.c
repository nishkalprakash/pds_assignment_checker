/*sec2
Assignment no.7
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 3
*/
#include<stdio.h>
void rev(int r[],int n){
    int temp = 0;
    for(int u=0;u<n/2;u++){
         temp = r[u];
        r[u] = r[n-u-1];
        r[n-u-1] = temp;

    }

}
int anagrams(char str1[],char str2[]){
    int len1 =0,len2 = 0,right = 0;
    for(int i=0;str1[i]!='\0';i++){
        len1++;
    }
    for(int i=0;str2[i]!='\0';i++){
        len2++;
    }
    if(len1 != len2){
        return 0;
    }
    for(int i=0;str1[i]!='\0';i++){
        for(int j = 0;str2[j]!='\0';j++){
            if(str1[i]!=str2[j]){
                right++;
            }
        }
        if(right == len2 ){
            return 0 ;
        }

    }
    return 1;



}
int palindrome(char str[20]){
    int len = 0;
    for(int i=0;i<20;i++){
        if (str[i]=='\0'){
            break;
        }
        len++;
    }
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            return 0;
        }
    }
    return 1;

}

int main(){
int n;
scanf("%d",&n);
if(n==1){
    int i;
    scanf("%d",&i);
    int ar[i];
    for(int t=0;t<i;t++){
        scanf("%d",&ar[t]);
    }

    rev(ar,i);
    for(int t=0;t<i;t++){
        printf("%d ",ar[t]);
    }


}
if(n==2){
    char str1[100];
    char str2[100];
    scanf("%s",&str1);
    scanf("%s",&str2);
    if (anagrams(str1,str2)==1){
        printf("%s and %s are anagrams",str1,str2);
    }
    else{
        printf("%s and %s are not anagrams",str1,str2);
    }



}
if(n==3){
    char inp[20];
    scanf("%s",&inp);

    if(palindrome(inp)){
        printf("%s is a palindrome",inp);
    }
    else{
        printf("%s is not a palindrome",inp);
    }
}



return 0;}
