#include <stdio.h>
# include <math.h>
int main(){
    int n;
    int rev=0;
    int z=n,f;
    int fo=n;
    int pow=1;


    printf("Enter an integer:");
    scanf("%d",&n);
    if(n<0)
        f=1;
        //count

        //odd
        if(f==1)
            fo=-fo;
        if()
    //reverse
    if(f==1){
        z=-n;
        n=-n;
    }
    while(z!=0){
        int d=n%10;
        rev=rev*10+d;
        z=z/10;
    }
    printf("Reverse number:%d",rev);
    printf("\n");
    int diff;
    if(rev>n) diff= rev-n;
    else diff= n-rev;

    printf("Difference between the reverse and the original number:%d",diff);



















return 0;

}
