#include<stdio.h>
int main() {
    int n;
    int s = 0;
    printf("Enter the Integer : ");
    scanf("%d", &n);
    if(n%2==0) {
        for(;n>0;) {
            s = s + (n%10);
            n = n/10;
            n++;

        }
        printf("Most significant digits to least significant digits : %d",s);
        return 0;
    }
}