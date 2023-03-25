#include <stdio.h>
int main(){
    int x, y, a, b, c, d, e, f, g;
    printf("Enter the pair:\n"); /*taking inputs*/
    scanf("%d %d",&x,&y);
    a = x%10;   /*  getting each digits of the given number*/
    x = x/10;
    e = y/10;
    b = x%10;
    x = x/10;
    e = e/10;
    f = e/10;  /*f and g are variables for checking the range*/
    g = x/10;
    if (x!=0){                                           /*checking for the perfection of the pair*/
        c = x%10;
    }
    if (x!=0){
        d = (100*a)+(10*b)+(c);
    }
    else{
        d = (10*a)+(b);
    }
    if(f==0 && g==0){


        if (x == 0 && e == 0 || x!=0 && e!=0 ){
            if (y == d){
                printf("Perfect pair");

            }
            else{
                printf("Not a perfect pair");
            }
        }
        else{
            printf("Wrong inputs");
        }
    }
    else{
        printf("wrong inputs");
    }

    return 0;






}
