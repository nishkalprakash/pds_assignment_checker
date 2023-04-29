#include<stdio.h>
#include<math.h>

int primeCheck (int i){
    int n, a;
    double limit;
    scanf("%d", &n);
    limit = sqrt(n);
    for (i; i <= limit; i++) {
        if (n % i == 0) {
            break;
             }
}
if (i > limit){
    a = i;
}
   return a;
}



int main()
{
    int i;
    printf("Input the number to be checked\n");
    scanf("%d", &i);

    for(i; i<4; i++){
        printf("-1\n");
        break;
    }
    for(i; i%2 == 0; i++){
        printf("-1\n");
        break;
    }

return 0;

}









