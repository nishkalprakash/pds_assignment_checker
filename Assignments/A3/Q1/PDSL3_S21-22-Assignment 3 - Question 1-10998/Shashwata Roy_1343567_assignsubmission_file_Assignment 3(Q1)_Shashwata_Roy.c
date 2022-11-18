/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>

int max_freq(char x[]){
    int j,i;
    for(i=0;x[i]!='\0';i++){
        int temp;
        for(j=i+1;x[j]!='\0';j++){
           if(x[i]>x[j]){
               temp=x[i];
               x[i]=x[j];
               x[j]=temp;
           }
        }
    }
    int m=1,a=x[0],count=1;
    for (i=1;x[i]!='\0';i++) {
        if (x[i]==x[i-1])
            count++;
        else{
            if (count>m){
                m=count;
                a=x[i-1];
            }
            count=1;
        }
    }
    if (count>m) {
        m = count;
    }
    return m;
}

int use_pass(char u[],char c[]){
    int m=0;
    for(int i=0;c[i]!='\0';i++){
        if(c[i]==u[0]){
            m=1;
            for(int j=1;u[j]!='\0';j++){
                if(c[i+j]!=u[j]){
                    m=0;
                    break;
                }
            }
        }
        if(m==1)
            break;
    }
    return m;
}

int len(char x[]){
    int i=0;
    while(x[i]!='\0'){
        i++;
    }
    return i;
}

int sp(char c[]){
    int m=0;
    for(int i=0;c[i]!='\0';i++){
        if(c[i]=='$'||c[i]=='*'||c[i]=='+'||c[i]=='/'||c[i]=='#'||c[i]=='@'||c[i]=='<'||c[i]=='>'||c[i]=='?'||c[i]=='_'||c[i]=='!')
            m++;
    }
    return m;
}

int up_low(char c[]){
    int i;
    for(i=0;c[i]!='\0';i++){
        if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122)){
            return 1;
            break;
        }
    }
    if(c[i]=='\0')
        return 0;
}

int freq(char x[],char ch){
    int m=0;
    for(int i=0;x[i]!='\0';i++){
        if(ch==x[i])
            m++;
    }
    return m;
}

int main(){
    char c[15];
    char u[15];
    printf("Username: ");
    scanf("%s",u);
    printf("Password: ");
    scanf("%s",c);
    if(len(c)<8)
        printf("Not acceptable\n");
    else if(up_low(c))
        printf("Not acceptable\n");
    else if(sp(c)<2)
        printf("Not acceptable\n");
    else if(use_pass(u,c))
        printf("Not acceptable\n");
    else if(max_freq(c)>5){
        printf("Not acceptable\n");
    }
    else
        printf("Acceptable\n");
    return 0;
}
