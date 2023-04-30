#include<stdio.h>
int primeCheck(int n);
int main() {
    int n,a,b,i,c,d;
    i = 1;
    a = b = n/2;
   /** n = sum(a,b);**/
    scanf("%d", &n);
    if(n%2==0&&n>=4) {
        printf("%d, %d", c,d);

    }
    else
        printf("-1");
    return 0;

}
int primeCheck(int n) {
    int i = 1;
    int a;
    if((a-i)%i!=0) {
        int c = a-i;
        i++;
    }

}
