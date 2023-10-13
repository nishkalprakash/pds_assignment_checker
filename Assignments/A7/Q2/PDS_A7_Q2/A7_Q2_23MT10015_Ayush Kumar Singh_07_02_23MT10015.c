#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

char str[20];
void encode2(char a[]){
    char new[2*strlen(a)];
    for(int i=0;i<strlen(a);i++){
        new[2*i+1]=a[i];
        new[2*i]='a';
    }
    printf("%s",new);
}



void encode1(char a[]){
    for(int i=0;i<strlen(a);i++){
        if('a'<=a[i] && a[i]<'y'){
            a[i]+=2;
        }else if(a[i]=='y'){
            a[i]='a';
        }else if(a[i]=='z'){
            a[i]='b';
        }

    }
    printf("%s",a);
}


void check(char a[]){
    int count=0;
    for(int i=0;i<19;i++){
        if(a[i]==a[i+2]-1){
            count++;
        }
    }printf("%d", count);
}



int main(){
    printf("Input string: ");
    scanf("%s",str);
    printf("Expected output: ");
    check(str);
    printf("\n");
    printf("Encoded1 of given input string is: ");
    encode1(str);
    printf("\n");
    printf("Encoded2 of given input string is: ");
    encode2(str);
    printf("\n");
    printf("Original string is %s", str);

}
