#include<stdio.h>
void abc(){
char str[100],str1[20],str2[30];
printf("enter the string:");

int x = scanf("%19s %29s",str1, str2);

printf(" str1:%s\n",str1);
printf(" str2:%s",str2);
}
int main(){
    int k;
    long int l;
    long long int m;
    float n;
    char o;
    char str[100];
    printf("enter integer:");
    scanf("%d",&k);
    printf("enter long integer:");
    scanf("%ld",&l);
    printf("enter long long integer:");
    scanf("%lld",&m);
    printf("enter real number:");
    scanf("%f",&n);
    printf("enter character:");
    scanf(" %c",&o);
    printf("enter string:");
    scanf("%s",str);
    printf("the value of integer is %d\n",k);
    printf("the value of long integer is %ld\n",l);
    printf("the value of long long integer is %lld\n",m);
    printf("the value of real number is %f\n",n);
    printf("the value of interger is %c\n",o);
    printf("the value of interger is %s\n",str);

   abc();

}
