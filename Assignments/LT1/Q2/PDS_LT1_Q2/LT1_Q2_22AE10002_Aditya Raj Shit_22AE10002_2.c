#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int digits=0;
    int dummy=n;

    while(dummy!=0){
        dummy/=10;
        digits++;
    }

    if(n%2==0){
        int num=n;      //creating a new variable equal to n, so that changes in num doesn't effect original number.
        int dig=digits;
        printf("Most significant digits to least significant digits: \n");
        for(int i=0;i<digits;i++){
            int d=num/pow(10,dig-1);
            printf("%d, ",abs(d));
            dig--;

        }
    }

    else{
        printf("Least significant digits to most significant digits: \n");
        int d=n;
        int dig=digits;
        for(int j=0;j<digits;j++){
            printf("%d, ",abs(d));
            d=d%(int)pow(10,dig-1);
            dig--;
        }
    }



    //reversing the digits now
    int revNum=0;
    int d=n;
    for(int k=0;k<digits;k++){
        int div=10;
        revNum=(revNum*10)+ (d%10);
        d/=10;
        div*=10;
    }

    printf("\n\nReverse number = %d",revNum);

    printf("\nDifference between Reverse and Original number = %d",abs(n-revNum));

}
