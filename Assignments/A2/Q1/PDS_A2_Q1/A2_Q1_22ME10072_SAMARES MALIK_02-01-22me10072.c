#include <stdio.h>
int main(){
    int n , s1, s2, s3, n1, n2, n3;
    printf("Enter the number n:");
    scanf("%d",&n);
    s1 = n*(n + 1)/2;
    printf("the value of s1 is %d\n",s1);
    s2 = n*(n+1)*(2*n+1)/6;
    printf("the value of s2 is %d\n",s2);
    n1 = n%10;
    n = n/10;
    n2 = n%10;
    n = n/10;
    s3 = n1 + n2 + n;
    printf("the value of s3 is %d\n",s3);
    return 0;

}
