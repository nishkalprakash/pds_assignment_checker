/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 3a
*/
#include<stdio.h>

int main(){
    char u[100],passw[15];
    int i,j,k,f,len=0,spch=0,upch=0,lch=0,count,digit;
    printf("username: ");
    scanf("%s",u);
    printf("password: ");
    scanf("%s",passw);
    for(i=0;passw[i]!='\0';i++){
        len++;
    }
    if(len<8||len>15){
        printf("Not acceptable\n");
        return 0;
    }
    k=0;
    for(i=0;passw[i]!='\0';i++){
        f=1;
        for(j=0;u[j]!='\0'; j++){
            if(passw[i+j]!=u[j]){
                f=0;
                break;
            }
        }
        if(f==1){
            k++;
        }
    }
    if(k>0){
        printf("Not acceptable\n");
        return 0;
    }

    for(i=0;passw[i]!='\0';i++){
     if ((65<=passw[i])&&(passw[i]<=90))
    {
        upch++;
    }
    else if ((97<=passw[i])&&(passw[i]<=122))
    {
        lch++;
    }
    else if(passw[i]=='$'||passw[i]=='*'||passw[i]=='+'||passw[i]=='/'||passw[i]=='#'||passw[i]=='@'||passw[i]=='<'||passw[i]=='>'||passw[i]=='?'||passw[i]=='_'||passw[i]=='!')
    {
        spch++;
    }
    }
    if(lch<1||upch<1||spch<2){
        printf("Not acceptable\n");
        return 0;
    }
    for(i=0;passw[i]!='\0';i++){
        count=0;
        for(j=0;passw[j]!='\0';j++){
        if((i!=j)&&(passw[i]==passw[j])){
            count++;
        }
        }
        if(count>5){
        printf("Not acceptable\n");
        return 0;
        }
    }
    for(i=0;i<=(len-5);i++){
        digit=0;
        for(j=i;j<len;j++){
            if(passw[i]<=57&&passw[i]>=48&&passw[j]<=57&&passw[j]>=48)
        digit++;
        }
        if(digit>5){
            printf("Not acceptable\n");
        return 0;
        }
    }

printf("Acceptable");
 return 0;
}

