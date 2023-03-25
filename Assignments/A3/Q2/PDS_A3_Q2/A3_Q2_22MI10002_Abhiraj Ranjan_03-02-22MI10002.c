#include<stdio.h>//22MI10002
int main(){
int a,b;
scanf("%d%d",&a,&b);
if((((a<100)&&(a>9))||((a>(-100))&&(a<(-9))))&&(((b<100)&&(b>9))||((b>(-100))&&(b<(-9))))){
    if(((a/10)==(b%10))&&((b/10)==(a%10))){
    printf("Perfect Pair");
    }
    else{
        printf("Not a Perfect Pair");
    }
}
else if((((a>99)&&(a<1000))||((a>(-1000))&&(a<(-99))))&&(((b>99)&&(b<1000))||((b>(-1000))&&(b<(-99))))){
    if(((a/100)==(b%10))&&((b/100)==(a%10))){
        printf("Perfect Pair");
    }
    else{
        printf("Not a Perfect Pair");
    }
}
else if(((a/10)==0)&&((b/10)==0)){
    (a==b)?printf("Perfect Pair"):printf("Not a Perfect Pair");
}
else{
    printf("Wrong Input");
}
return 0;
}
