#include<stdio.h>
#include<string.h>
void strf();
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    puts(str);
    char str1[20], str2[20];
    scanf("%[^\n]%*c,str1");
    scanf("%[^\n]s,str2");
    int x = scanf("%19s %29s", str1,str2) ;
    printf("%d",x);
    void strf(char str1[], char str2[],char str[], int x){

           scanf("%s", str1);
           x = scanf("%19s %29s", str2,str3) ;
           printf("%s", str1);
           printf("%s", str1);
           printf("%s", str1);
           printf("%d", x);}
}
