/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 06
Description -
*/
#include<stdio.h>
void abc()
{
    char str[100], str1[20], str2[30];
    scanf("%s", str);
    int x = scanf("%19s %29s", str1, str2);
    printf("%d", x);
}

int main()
{
    /*
      int a;
      long int b;
      long long int c;
      float d;
      char f[100];
      char e;

      scanf("%d", &a);
      scanf("%ld", &b);
      scanf("%lld", &c);
      scanf("%f", &d);
      scanf("%s", f);
      scanf("%c", &e);

      printf("Integer = %d\n", a);
      printf("Long integer = %ld\n", b);
      printf("Long long integer = %lld\n", c);
      printf("Real number = %f\n", d);
      printf("String = %s\n", f);
      printf("Character = %c\n", e);
    */
    abc();

    char str1[20], str2[20];
    scanf("%[^\n]%*c", str1);
    scanf("%[^\n]s", str2);
    printf("%s\n", str1);
    printf("%s\n", str2);
    return 0;
}
