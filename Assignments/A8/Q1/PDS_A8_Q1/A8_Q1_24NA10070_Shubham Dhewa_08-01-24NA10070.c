#include <stdio.h>

int digits(int N){
    int count;
    if(N/10==0) return 1;
    else return 1+digits(N%10);
}

int reverse(int N){
    if(N/10==0){
    N=N%10;
    return N;
    }
    else reverse(N/10);
}
  
int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int nod=digits(n);
    printf("Number of digits in n = %d\n", nod);
    
    int n_=reverse(n);
    printf("%d\n", n_);
    if(n_=n) printf("Palindrome");
    else printf("Not palindrome");

return 0;
}
