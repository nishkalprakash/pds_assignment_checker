
#include<stdio.h>
int main(){
    int X,Y,temp;
    int B = -X;
    scanf("%d%d",&X,&Y);
    int units,tens,hund,unit,ten,hundred;
    if(X>=0 && X<=999){

    units = X%10;
    X=X/10;
    tens =X%10;
    X=X/10;
    hund = X%10;
    X = units + 10*tens + 100*hund;

    if(X>99){
    int reverse_3 = units*100 +tens*10 + hund;
       if(reverse_3 == Y) printf("Perfect Pair");
    else printf("Wrong Input");
}
    if(X>9 && X<100){
    int reverse_2 = 10*units + tens;
           if(reverse_2 == Y) printf("Perfect Pair");
        else printf("Wrong Input");
    }

    if(X>= 0 && X<=9){
    if(X == Y) printf("Perfect Pair");
    else printf("Wrong Input");
    }
    }

    else if(X<0 && X>=-999){
       temp=B;
       B = X;
       X=temp;
    unit = X%10;
    X=X/10;
    ten =X%10;
    X=X/10;
    hundred = X%10;
    X = unit + 10*ten + 100*hundred;

    if(X>99){
    int reverse_1 = -(unit*100 +ten*10 + hundred);
       if(reverse_1 == Y) printf("Perfect Pair");
    else printf("Wrong Input");
}
    if(X>9 && X<100){
    int reverse_4 = -(10*units + tens);
           if(reverse_4 == Y) printf("Perfect Pair");
        else printf("Wrong Input");
    }

    if(X>= 0 && X<=9){
    if(X == Y) printf("Perfect Pair");
    else printf("Wrong Input");
    }
    }
    else if(X>=1000 || X<=-1000){
        printf("Invalid input \n");
        return 5;
    }

    return 0;
}
