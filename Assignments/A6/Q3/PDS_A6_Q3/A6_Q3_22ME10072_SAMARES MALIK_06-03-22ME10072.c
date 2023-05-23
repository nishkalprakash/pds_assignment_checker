/*name-samares malik
  roll no.22ME10072
  assignment 6
  question 1*/

#include<stdio.h>
#include<string.h>
void swap(int *x,int *y){
    int t;
    t = *x; *x=*y; *y = t;

}
void reverse(int *a,int n){//for reversing the array
    if(n==2){ //base case
        swap(&a[n-1],&a[n-2]);
        return;
    }
    reverse(a,n-1);//recursive call
    for(int i=0;i<n-1;i++){
        swap(&a[n-1-i],&a[n-2-i]);
    }
    return;


}
int palindrome(char str[20]){
    int r = 1;
    int l=0;
    while(str[l]!='\0'){
        l+=1;
    }
    if(l==1){
        return 1;
    }
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-1-i]){
            r = 0;
            break;
        }

    }
    return r;
}
int is_in(char str[100],char s){
    int r=0;
    for(int i=0;i<100;i++){
        if(str[i]==s){
            r=1;
            break;
        }
    }
    return r;
}
int main(){
    int w,n1;
    scanf("%d",&w);
    if(w==1){
        scanf("%d",&n1);
        int arr1[n1];
        for(int k=0;k<n1;k++){
            scanf("%d",&arr1[k]);
        }
        reverse(arr1,n1);
        printf("\n");
        for(int i=0;i<n1;i++){
            printf("%d ",arr1[i]);

        }

    }
    if(w==3){
        //printf("sss");
        char str[20];
        fflush(stdin);
        fflush(stdout);
        for(int i=0;i<20;i++){
            scanf("%c",&str[i]);
            if(str[i]=='\n'){
                str[i]='\0';
                i=30;
            }
        }
         for(int i=0;i<20;i++){
            scanf("%c",&str[i]);
            if(str[i]=='\n'){
                str[i]='\0';
                i=30;
            }
        }
        //printf("%d\n",palindrome(str));
        if(palindrome(str)==1){
            printf("\n");
            puts(str);
            printf("is a palindrome");
        }
        if(palindrome(str)==0){
            printf("\n");
            puts(str);
            printf("is not a palindrome");
        }

    }
    if(w==2){
        int a,b;
        char str1[100];
        char str2[100];
        scanf("%s",&str1);
        printf("\n");
        fflush(stdin);
        fflush(stdout);
        for(int i=0;i<100;i++){
            scanf("%c",&str2[i]);
            if(str2[i]=='\n'){
                str2[i]='\0';
                i=200;
            }
        }
        for(int i=0;i<100;i++){
            scanf("%c",&str2[i]);
            if(str2[i]=='\n'){
                str2[i]='\0';
                i=200;
            }
        }
        /*puts(str1);
        int i = 0;
        while(str2[i]!='\0'){
            printf("%c",str2[i]);
            i++;

        }*/
        a=strlen(str1);
        b=strlen(str2);
        if(a!=b){
            printf("\n%s and %s are not anagrams",str1,str2);
        }
        else{
            int p=1;
            for(int i=0;i<a;i++){
                if(is_in(str1,str2[i])!=1){
                    p=0;
                    printf("\n%s and %s are not anagrams",str1,str2);
                    break;

                }
            }
            if(p==1){
                printf("\n%s and %s are anagrams",str1,str2);
            }
        }



    }
    return 0;
}
