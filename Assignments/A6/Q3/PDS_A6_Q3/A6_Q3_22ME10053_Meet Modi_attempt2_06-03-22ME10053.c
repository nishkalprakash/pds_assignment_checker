//Name -Meet Modi
//Roll No-22ME10053
//Lab 6-Q3)
//Ques-

#include<stdio.h>

void reverse(int A[],int n){
    static int i=0;
    int temp,j;
    if(i==(n/2)){
        for(j=0;j<n;j++) printf("%d ",A[j]);
        return;
    }
    else{
    temp=A[i];
    A[i]=A[n-i-1];
    A[n-i-1]=temp;
    i++;
    reverse(A,n);
    }
}

int anagram(char str1[],char str2[]){
    int i,j,ctr1=0,ctr2=0;
        for(i=0;str1[i] !='\0';i++) ctr1++;
        for(i=0;str2[i] !='\0';i++) ctr2++;
        if(ctr1 != ctr2) return 0;
        else{
            for(i=0;i<ctr1;i++){
                for(j=0;j<ctr2;j++){
                     if(str1[i]==str2[j]) break;
                }
                if(j==ctr2){ return 0;}
            }
            if(i==ctr1) return 1;
        }
}

int palindrome(char str[]){
    int i,ctr;
    for(i=0;str[i] != '\0';i++);
    ctr=i;
    static int j=0;
    if(j==ctr) return 1;
    else if(str[j] != str[ctr-j-1]) return 0;
    else if(str[j] == str[ctr-j-1]){
        j++;
        palindrome(str);
    }

}

int main(){
    int key;
    int i,j,k;
    printf("Enter the key to which function to be called :");
    scanf("%d",&key);
    if(key==1){
        int n,A[100];
        printf("Enter the number of elements in array :");
        scanf("%d",&n);
        printf("Enter the elements in array :");
        for(i=0;i<n;i++) scanf("%d",&A[i]);
        reverse(A,n);
    }
    else if(key==2){
        char str1[100],str2[100];
        printf("Enter the two strings :");
        scanf("%s%s",str1,str2);
        int ana = anagram(str1,str2);
        if(ana==0)  printf("%s and %s are not anagram .",str1,str2);
        else if(ana==1)  printf("%s and %s are anagram .",str1,str2);
        }


    else if(key ==3){
    char str[20];
    printf("Enter the string :");
    scanf("%s",str);
    int pal=palindrome(str);
    if(pal==1) printf("%s is a palindrome",str);
    else printf("%s is not a palindrome",str);
    }

    return 0;
}
