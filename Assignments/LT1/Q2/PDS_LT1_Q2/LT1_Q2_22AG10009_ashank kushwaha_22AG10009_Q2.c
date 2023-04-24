/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
DESCRIPTION:significant digits and reverse
*/
#include <stdio.h>
#include<math.h>
int main(){
    int n,i=0,j,k,t,reverse=0,neg;
    printf("Enter the Integer ");
    scanf("%d",&n);
    k=n;
    while (1){
            if (k==0) break;
            k=k/10;
            i=i+1;
        }
    if (n<0) {
            n*=-1;
            neg=n;
    }
    if (n%2==0){
        printf("Most significant digits to least significant digits:\n");
        for (j=i-1;j>=0;j--){
            t=pow(10,j);
            printf("%d",n/t);
            if (j>0) printf(", ");
        }
        printf("\n");
    }
    else {
        printf("Least significant digits to most significant digits:\n ",i);
        for(j=i;j>=1;j--){
            t=pow(10,j);
            printf("%d",n%t);
            if (j>1) printf(", ");
        }
        printf("\n");
    }
    k=n;
    if (n<0) k=neg;
    for (j=0;j<i;j++){
            reverse*=10;
            reverse+=k%10;
            k=(k-k%10)/10;
    }
    printf("Reverse number = %d\n",reverse);
    if (n>=reverse)    printf("difference between reverse and original number = %d\n",n-reverse);
    else printf("difference between reverse and original number = %d\n",reverse-n);

}
