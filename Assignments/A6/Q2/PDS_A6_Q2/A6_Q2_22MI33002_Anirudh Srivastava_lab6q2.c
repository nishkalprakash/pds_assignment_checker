#include<stdio.h>
#include<string.h>

int main() {
char ar[1024];
int n;
printf("enter the input");
scanf("%d",&n);
fflush(stdin);

if(n==2) {

    gets(ar);
    printf("%s",ar);

}



return 0;
}
