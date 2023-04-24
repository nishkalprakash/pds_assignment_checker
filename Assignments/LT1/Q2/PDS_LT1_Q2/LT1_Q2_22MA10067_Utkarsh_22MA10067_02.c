#include <stdio.h>
#include <math.h>

int main()
{
    int n,count=0,t=1,rev=0,diff;
    printf("Enter an integer:");
    scanf("%d",&n);
    while (n/t != 0) {
        count++;
        t*=10;
    }
    int expo=count-1;
    //For an even integer
    if (n%2==0) {
        printf("Most significant digits to least significant digits:\n");
        for (int i=1,t=pow(10,expo);i<=count;++i,t/=10,--expo) {
            int p=pow(10,i-1);
            rev=rev+((n/p)%10)*pow(10,expo);
            if (t==1) {printf("%d",n/t);}
            else {
                printf("%d, ",n/t);
            }
        }
        printf("\n\nReverse number = %d",rev);
        diff=(n>rev)?(n-rev):(rev-n);
        printf("\nDifference between reverse and original  = %d",diff);
    }
    else {
        printf("Least significant digits to most significant digits:\n");
        for (int i=1,t=pow(10,expo+1);i<=count;++i,t/=10,--expo) {
            int p=pow(10,i-1);
            rev=rev+((n/p)%10)*pow(10,expo);
            printf("%d, ",(n-((n/t)*t)));}


        printf("\n\nReverse number = %d",rev);
        diff=(n>rev)?(n-rev):(rev-n);
        printf("\nDifference between reverse and original number = %d",diff);
        }

    return 0;

}
