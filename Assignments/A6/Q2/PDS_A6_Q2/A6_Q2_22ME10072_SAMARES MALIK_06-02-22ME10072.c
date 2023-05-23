/*name-samares malik
  roll no.22ME10072
  assignment 6
  question 1*/

#include<stdio.h>
int is_in(char str[1024],char s){
    int r=0;
    for(int i=0;i<1024;i++){
        if(str[i]==s){
            r=1;
            break;
        }
    }
    return r;
}
int main(){
    char str_special[1024] = "!@#%^&*()_=+><.,:;"
    char str_vowels[1024] = "aeiouAEIOU";
    char str_numeric[1024] = "1234567890";
    char str[1024];
    int s=0;
    int v=0;
    int n=0;
    int w=0;
    int c=0;
    scanf("%[^\n]s",str);
    //puts(str);
    int l=0;
    while(str[l]!='\0'){
        l+=1;
    }
    for(int i=0;i<l;i++){
        if(is_in(str_special,str[i])){
            s+=1;
        }
        if(is_in(str_vowels,str[i])){
            v+=1;
        }
        else{
            c+=1;

        }
        if(is_in(str_numeric,str[i])){
            n+=1;
        }
        if(str[i]==" "){
            w+=1;
        }

    }
    printf("\nNumerical characters:%d",n);
    printf("\nSpecial printable character:%d",s);
    printf("\nwords:%d",w);
    printf("\nVowels:%d",v);
    printf("\nconsonants:%d",c);

    return 0;
}
