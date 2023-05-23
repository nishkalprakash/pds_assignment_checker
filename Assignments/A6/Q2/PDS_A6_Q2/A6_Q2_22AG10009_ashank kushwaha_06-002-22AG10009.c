#include<stdio.h>
#include<string.h>
int main(){
    int a1;
    long int a2;
    long long int a3;
    float f;
    char c;
    char s[10],str[100],str1[20],str2[30];
    scanf("%s",s);
    if (strcmp(s,"%d")==0){
        scanf("%d",&a1);
        printf("%d",a1);
    }
    else if (strcmp(s,"%ld")==0) {
        scanf("%ld",&a2);
        printf("%ld",a2);
    }
    else if (strcmp(s,"%lld")==0) {
        scanf("%lld",&a3);
        printf("%lld",a3);
    }
    else if (strcmp(s,"%f")==0) {
        scanf("%f",&f);
        printf("%f",f);
    }
    else if (strcmp(s,"%c")==0) {
        scanf("%c",&c);
        printf("%c",c);
    }
    else if (strcmp(s,"%s")==0){
        scanf("%c",&s);
        printf("%c",s);
    }

}