#include <stdio.h>
int main(){
    int n1,n2,n1_u,n1_t,n1_h,n2_u,n2_t,n2_h;
    printf("Enter two numbers :: ");
    scanf("%d%d",&n1,&n2);
    if ((((n1>=100) && (n1<=999))||((n1<=-100) && (n1>=-999)))&&(((n2>=100) && (n2<=999))||((n2<=-100) && (n2>=-999)))){
        n1_u = n1%10;
        n1_t = (n1/10)%10;
        n1_h = ((n1/10)/10)%10;
        n2_u = n2%10;
        n2_t = (n2/10)%10;
        n2_h = ((n2/10)/10)%10;
        if ((n1_u==n2_h)&&(n1_t==n2_t)&&(n1_h==n2_u)){
            printf("Perfect Pair");
        }
        else {
            printf("Not a Perfect Pair");
        }
        }
    else if((((n1>=10) && (n1<=99))||((n1<=-10) && (n1>=-99)))&&(((n2>=10) && (n2<=99))||((n2<=-10) && (n2>=-99)))){
        n1_u = n1%10;
        n1_t = (n1/10)%10;
        n2_u = n2%10;
        n2_t = (n2/10)%10;
        if ((n1_u==n2_t)&&(n2_t==n1_u)){
            printf("Perfect Pair");
        }
        else {
            printf("Not a Perfect Pair");
        }
        }
    else if ((((n1>=0) && (n1<=9))||((n1<=0) && (n1>=-9)))&&(((n2>=0) && (n2<=9))||((n2<=0) && (n2>=-9)))){
        if (n1==n2){
            printf("Perfect Pair");
        }
        else{
            printf("Not a Perfect Pair");
        }
    }
    else{
        printf("Wrong Input");
    }
    return 0;
}
