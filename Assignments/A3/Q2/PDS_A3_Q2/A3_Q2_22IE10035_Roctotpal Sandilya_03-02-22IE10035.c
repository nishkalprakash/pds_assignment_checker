#include<stdio.h>
#include<math.h>

int main(){
int a,b, c=0;
scanf("%d %d", &a, &b);

if(a>999 || a<-999 || b>999 || b<-999) printf("Wrong Input");
else if(a*b < 0) printf("Not  a perfect pair");
else if((int)log10(abs(a)) != (int)log10(abs(b))) printf("Wrong Input");
else if((int)log10(abs(a)) == 2){
    int d1 = abs(a)%10;
    int d2 = (abs(a)%100-d1)/10;
    int d3 = (abs(a)-d1-10*d2)/100;

    if((100*d1 + 10*d2 + d3) == abs(b)) printf("Perfect Pair");
    else printf("Not a perfect pair");
}
else if((int)log10(abs(a)) == 1){
    int d1 = abs(a)%10;
    int d2 = (abs(a)%100-d1)/10;

    if((10*d1 + d2) == abs(b)) printf("Perfect Pair");
    else printf("Not a perfect pair");
}

else{
    if(a==b) printf("Perfect Pair");
    else printf("Not a perfect pair");
}

return 0;
}
