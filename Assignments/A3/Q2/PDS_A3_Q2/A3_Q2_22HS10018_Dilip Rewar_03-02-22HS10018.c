#include<stdio.h>
#include<math.h>
//22HS10018
int main()
{
    int X, Y, a, b, c, d, P, Q;
    printf("Enter X:");
    scanf("%d", &X);// Input X from [-999, 999]
    printf("Enter Y:");
    scanf("%d", &Y);// Input Y from [-999, 999]
    P=(int)(log10(X)+1);
    Q=(int)(log10(Y)+1);
    if (P==Q)
    {
        c= X%10;
    b=(X%100-c)/10;
    a=(X-b*10-c)/100;
    d= 100*c+10*b+a;
    //checking perfect pair for three digit number
    if(Y==d && Y>=100){
        printf("Perfect Pair");
    }
    //Checking Perfect pair for two digit number
    else if (Y!=d && Y<100){
        int w,x,y,z;
        x=0;
        z=X%10;
        y=(X-z)/10;
        w=10*z+y;
        if (Y==w){
            printf ("Perfect Pair");
        }
        else{
            printf("Not a perfect pair");
        }
    }
    else{
        printf(" Not a Perfect pair");
    }
    }
    else{
        printf("Wrong Input");
    }
    return 0;
}
