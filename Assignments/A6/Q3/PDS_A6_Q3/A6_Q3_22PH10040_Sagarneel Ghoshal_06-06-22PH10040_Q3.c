/*
* Section 2
* Roll No.: 22PH10040
* Name: Sagarneel Ghoshal
* Assignment 6
* Description:
*/


#include<stdio.h>

void reverse(int a[],int size,int i);
void anagram(char a[], char b[]);
void palindrome(char str[]);

int main(){
    int n,size;
    printf("Enter your choice of function:");
    scanf("%d",&n);
    if(n==1){
        printf("\nEnter the no. of elements in the array:");
        scanf("%d",&size);
        int a[size];
        for(int i=0;i<size;i++){
            printf("Enter element number %d:  ",i+1);
            scanf("%d",&a[i]);
        }
        reverse(a[size],size,0);

    }
    else if(n==2){
        char a[100],b[100];
        printf("\nEnter string 1: ");
        scanf("%s",a);
        printf("\nEnter string 2: ");
        scanf("%s",b);
        anagram(a,b);
    }

    else if(n==3){
        char str[100];
        printf("\nEnter string: ");
        scanf("%s",str);
        palindrome(str);
    }
    return 0;


}

void reverse(int a[],int size,int i){
    if(i==size/2){
        for(int i=0;i<size;i++) printf("%d  ",a[i]);

    }
    else{
        int temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
        reverse(a[size],size,i+1);
    }

}

void anagram(char a[], char b[]){

    int l1,l2;
    for(l1=0;a[l1]!='\0';l1++);
    for(l2=0;b[l2]!='\0';l2++);

    if(l1!=l2) printf("\n%s and %s are not anagrams",a,b);
    else{

        int i,j,count=0;
        for(i=0;i<l1;i++){
            for(j=0;j<l2;j++){
                if(a[i]==b[j]){
                    count++;
                    break;
                }
                else if(j==l2-1){
                    printf("\n%s and %s are not anagrams",a,b);

            }
            }
            printf("%d",count);
            if(count==l1) printf("\n%s and %s are anagrams",a,b);

    }



}
}
void palindrome(char str[]){
    int len=0,i;
    for(len=0;str[len]!='\0';len++);
    for(i=0;i<len/2;i++){
        if(str[i]==str[len-i-1]){
            continue;
        }
        else{
            printf("\nNot a palindrome");
            break;
        }
    }
    if(i==len/2) printf("\nIt is a palindrome");
}

