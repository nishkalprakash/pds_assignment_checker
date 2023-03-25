#include<stdio.h>
    int main(){
        int a, b, c, d, e, r1, r2, r3, r4, r5, count_rem;
        printf("Enter five integers:");
        scanf("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e);
        r1 = a%2;
        r2 = b%2;
        r3 = c%2;
        r4 = d%2;
        r5 = e%2;
        count_rem = r1+r2+r3+r4+r5;

        if(count_rem == 2){
            if (a>b&&a>c&&a>d&&a>e)
                printf("%d",a);
            else if (b>a&&b>c&&b>d&&b>e)
                printf("b");
             else if (c>a&&c>b&&c>d&&c>e)
                printf("c");
            else if (d>a&&d>c&&d>b&&d>e)
                printf("d");
             else if (e>a&&e>c&&e>d&&e>b)
                printf("%d",e);
        }



        return 0;



    }
