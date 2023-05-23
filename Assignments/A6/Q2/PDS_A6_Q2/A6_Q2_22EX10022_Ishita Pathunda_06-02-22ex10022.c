#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    int a;
    float b;
    char c,stri;
    scanf("%d",&a);
    scanf("%f",&b);
    scanf("%c",&c);
    scanf("%s",&stri);
    printf("\n %d",a);
    printf("\n %f",b);
    printf("\n %c",c);
    printf("\n %s",stri);
    char str[100],str1[20],str2[30];
    scanf("%s",str);
    int x=scanf("%19s %29s",str1,str2);
    printf(" str1:%s",str1);
    printf("\n str2: %s",str2);
}
