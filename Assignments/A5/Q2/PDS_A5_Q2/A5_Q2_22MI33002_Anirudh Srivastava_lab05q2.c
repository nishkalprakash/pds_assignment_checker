#include<stdio.h>
#include<math.h>

int primeCheck(int);

int main() {
    int n,z,i,y;
    printf("enter the no :");
    scanf("%d", &n);
    if (n%2!=0) {
        printf("-1");
    }
    else {

    for(i=2 ; i<=(n/2) ; i++){
    y=n-i;
    z=i;
    if(primeCheck(y)==2 && primeCheck(z)==2) {
        printf("%d is the sum of two number %d %d",n,z,y);
        break;
    }
    else{
        z++;
        y--;
    }
    }


}




    return 0;
}
 int primeCheck(int n) {
     int i,z;

   for (i=2;i<n;i++) {
        if(n%i==0) {
        z=1;
        return z;

        }
}
z=2;
return z;
 }
























