#include<stdio.h>
#include<string.h>
void reverse(){
    int n,x,y;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        arr[i]=x;
    }
    for(int j=0;j<n/2;j++){
        y=arr[j];
        arr[j]=arr[n-j-1];
        arr[n-j-1]=y;
    }
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    return;

}
void anag(){
    char arr[100],brr[100];
    int i=0,j=0,m=0,n=0;

    scanf("%s",arr);
    scanf("%s",brr);
    while (arr[i]) i++;
    while (brr[j]) j++;




    if(i==j){
        for(int k=0;k<i;k++){
            for(int l=0;l<j;l++){
                if (arr[k]==brr[l]){
                    m++;
                }

            }
        }
        for(int o=0;o<i;o++){
            for(int p=0;p<j;p++){
                if (arr[o]==brr[p]){
                n++;
            }
            }
        }
        if(m==i && n==j){
            printf("Anagrams");
        }

    }
    else{
        printf("Not an Anagram");
    }
return;

}
void palin(){
    char arr[100];
    int i=0,j=0,m=0;
    scanf("%s",arr);
    while (arr[i]) i++;

    while(i>0){
        if(arr[j]!=arr[i-1]){
            m++;
        }
        j++;
        i--;
    }
    if(m==0){
        printf("it's a palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return;
}

int main(){
    int x;
    scanf("%d",&x);
    if(x==1){
            reverse();


    }
    else if(x==2){
            anag();

    }
    else if(x==3){
            palin();

    }
    else{
        printf("Enter 1,2 or 3");
    }

return;
}
