
#include <stdio.h>
#include<math.h>
int main(){
    int n,t,s;
    int k,t1,s1,s2,t2;
    printf("Enter the integer:");
    scanf("%d",&n);
    if(n%2 == 0){
        t = 1;
        s = n;
        while(s != 0){
            t *= 10;
            s = s / 10;

        }
        t = t/10;
        printf("Most significant digits to least significant digits:\n");
        while (t != 0){
            if(n/t < 0){
                printf("%d ", (n/t)*(-1));
            }
            else{
                printf("%d ",n/t);

            }
            t = t/10;
        }
    }
    if(n%2 == 1){
        t = 1;
        s = n;
        while(s!=0){
            t *=10;
            s = s/10;
        }
        printf("Least significant digits to most significant digits:\n");
        while(t != 1){
            k = n/t;
            printf("%d ",n - t*k);
            t = t/10;


        }
    }
    s1 = 0;
    s = n;
    t1 = 1;
    while(s!=0){
        t1 *= 10;
        s = s/10;
    }
    t1 = t1/10;
    s2 = n;
    t2 = 1;
    while(s2!=0){
        s1 += ((s2%10)*t1);
        s2 = s2/10;
        t1 = t1/10;

    }
    printf("\nReverse number = %d",s1);
    if(n>s1){
        printf("\nDifference between reverse and original number = %d",n-s1);
    }
    else{
        printf("\nDifference between reverse and original number = %d",s1-n);

    }









    return 0;


}

