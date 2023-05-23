#include<stdio.h>
#include<string.h>
void strf();
int main() {
    char str[200];

    //using different format to read value
    fgets(str, 100, stdin);
    puts(str);
     // using scanset format

     char str1[20], str2[20];
     int x = scanf("%19s %29s", str1, str2);
     printf("x: %d", x);
     printf("str1: %s", str1);
     printf("str2: %s", str2);
    strf();
}
    //using %s to read any string
void strf(){
    char str1[100],str2[20], str3[30];
    int x;
    scanf("%s", str1);
    x = scanf("%19s %29s", str2, str3);
    printf("%s ", str1);
    printf("%s ", str2);
    printf("%s ", str3);
    printf("%d ", x);
}


