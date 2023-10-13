#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void check(char str[20]){
    int size=0;
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        i++;
        size++;
    }
    for(int i=0; i<size-2; i++){
        if(str[i+2]== str[i]+1 ) count++;
    }
    printf("%d",count);
    return;
}
void encode1(char str[20]){
    int i=0;
    int size=0;
    while(str[i]!='\0'){
        i++;
        size++;
    }
     for(int i=0; i<size; i++){
        str[i]=str[i]+2;
        if(str[i]=='z'+2)str[i] = 'b';
        if(str[i]=='y'+2)str[i] = 'a';
     }
     puts(str);
     return;
}
void encode2(char str[20]){
    int i=0;
    int size=0;
    while(str[i]!='\0'){
        i++;
        size++;
    }
    for(int i=0; i< 2*size; i++){
        str[2*i] = str[i];
        str[2*i+1] = 'a';
     }
     puts(str);
     return;
}
int main(){
 char str[20];
 fgets(str, 20, stdin);
 puts(str);
 check(str);
 encode1(str);
 encode2(str);
}
