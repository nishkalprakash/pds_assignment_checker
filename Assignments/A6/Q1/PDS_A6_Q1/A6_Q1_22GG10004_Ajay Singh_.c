#include <stdio.h>
int x;

int print_term(int n){
    if(n<3) return n;
    x=(3*print_term(n-1)*print_term(n-2))-(2*print_term(n-2)*print_term(n-3))+1;
    return x;
}

int main() {
    int t;
    scanf("%d",&t);
    printf("%d",print_term(t));

    return 0;
}