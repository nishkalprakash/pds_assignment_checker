//22PH10002

#include <stdio.h>

int main(){
    //Initialization
    int a,b;

    //Scanning of variables
    scanf("%d%d", &a,&b);

    //Variables to store digits
    int rev, x,y,z;
    x = a%10;
    y = (a/10)%10;
    z = a/100;

    //Different cases for 2 digit and  3 digit numbers, reverse number is generated
    if(z==0){
        rev = 10*x + y;
    }
    else{
        rev = 100*x + 10*y + z;
    }

    //Checking wrong inputs
    //The given logic checks 2 things, if  the numbers share the same umber of digits and if they are within the  range
    //a*a and b* are used because -ve numbers are also being input and hence the modulus is what matters
    if((a*a>10000&&b*b<10000)||(b*b>10000&&a*a<10000)||(a*a>100&&b*b<100)||(a*a<100&&b*b>100)||a*a>1000000||b*b>1000000){
        printf("Wrong Input");
    }
    //Checking perfect pair
    else if(rev == b){
        printf("Perfect pair");
    }
    else{
        printf("Not a Perfect pair");
    }

    return 0;
}
