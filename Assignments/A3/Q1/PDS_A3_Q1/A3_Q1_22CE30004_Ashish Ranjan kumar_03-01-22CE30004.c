#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,d,e;
    printf("Enter the number : ");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    if(((a%2!=0)&&(b%2!=0)&&(c%2!=0))||((a%2!=0)&&(b%2!=0)&&(d%2!=0))||((a%2!=0)&&(b%2!=0)&&(e%2!=0))||((a%2!=0)&&(d%2!=0)&&(c%2!=0))||((a%2!=0)&&(e%2!=0)&&(c%2!=0))) {
       if(a>b&&a>c&&b>a) {
        printf("odds number in ascending order : %d %d %d/n", a, b, c);
       }

    }
    else if(((a%2==0)&&(b%2==0)&&(c%2==0))||((a%2==0)&&(b%2==0)&&(d%2==0))||((a%2==0)&&(b%2==0)&&(e%2==0))||((a%2==0)&&(d%2==0)&&(c%2==0))||((a%2==0)&&(e%2==0)&&(c%2==0))) {       if(a>b>c) {
        printf("even number in ascending order" );


    }
    return 0;
}
