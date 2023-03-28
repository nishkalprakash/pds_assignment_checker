/*
    2.	A pair of numbers (X,Y) is called Perfect pair, if reversing the digits in one produces exactly the other numbers.  For Example: (56,65) is a perfect pair whereas (509,519) is not a perfect pair.
    Write a program which will do the following:
    a)	Read any two numbers in the range [-999,999] from the keyboard.
    b)	Check if the two numbers form a perfect pair.
    [10+20=30]
*/
// Code creator: Sipra Singh (sipra.singh@iitkgp.ac.in)
#include<stdio.h>
int main(){

    int x, y;
    printf("Enter the pair:\n");
    scanf("%d%d",&x,&y);
    //printf("x=%d,Y=%d",x,y);
    int x1,x2, x3;
    int y1,y2, y3;
    x1=(int)(x%10);
    x2=(int)((x/10)%10);
    x3=(int)(((x/10)/10)%10);
    //printf("x1=%d,x2=%d,x3=%d\n",x1,x2,x3);

    y1=(int)(y%10);
    y2=(int)((y/10)%10);
    y3=(int)(((y/10)/10)%10);
    //printf("y1=%d,y2=%d,y3=%d\n",y1,y2,y3);

    if(x3!=0&&y3!=0){
        //printf("In 1st if.\n");
        if(x1==y3&&x2==y2&&x3==y1){
            printf("Perfect Pair\n");
        }
        else{
            printf("Not a perfect pair\n");
        }
    }
    else if((x3==0&&y3==0)&&(x2!=0&&y2!=0)){
        //printf("In 2nd if.\n");
        if(x1==y2&&x2==y1){
            printf("Perfect Pair\n");
        }
        else{
            printf("Not a perfect pair\n");
        }
    }
    else if((x2==0&&y2==0)&&(x3==0&&y3==0)){
        //printf("In 3rd if.\n");
        if(x1==y1){
            printf("Perfect Pair\n");
        }
        else{
            printf("Not a perfect pair\n");
        }
    }
    else{
        //printf("In else.\n");
        printf("Wrong Input\n");
    }
    return 0;
}