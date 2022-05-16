/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>

char *add_space(char c[],int n,int l){
    if(n==l+1)
        l++;
    for(int i=l;i>=n;i--){
        c[i+1]=c[i];
    }
    c[n]='-';
    return c;
}

int len(char x[]){
    int i=0;
    while(x[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    int diff,i,m,x,s=1;
    char s1[1000],s2[1000];
    printf("Sequence 1: ");
    scanf("%s",s1);
    printf("Sequence 2: ");
    scanf("%s",&s2);
    diff= len(s1)-len(s2);
    if(diff<0){
        diff=-diff;
        x=0;
    }
    for(int j=0;j<diff;j++){
        s=0;
        for(i=0;(s1[i]!='\0')&&(s2[i]!='\0');i++){
            if(x==1){
                if(s2[i]!=s1[i+j])
                    s++;
                }
            else{
                if(s1[i]==s2[i+j])
                    s++;
            }
        }
    }
    return 0;
}
