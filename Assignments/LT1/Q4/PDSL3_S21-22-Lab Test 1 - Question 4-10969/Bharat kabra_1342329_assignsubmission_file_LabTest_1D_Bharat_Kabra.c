/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Lab Test: 1
*/
#include<stdio.h>
int main() {
    int x[10],y[10];
    float mx=0,my=0;
    printf("x-coordinates:");
    for (int i=0; i<10;i++){
        scanf("%d",&x[i]);
    }
    for (int i=0; i<10;i++){
        mx+= x[i];
    }
    mx= mx/10;
    printf("y-coordinates:");
    for (int i=0; i<10;i++){
        scanf("%d",&y[i]);
    }
    for (int i=0; i<10;i++){
        my+= y[i];
    }
    my= my/10;

    float a,b=0;
    for (int i=0; i<10;i++){
        a+= (x[i]-mx)*(y[i]-my);
        b+=  (x[i]-mx)*(x[i]-mx);
    }
    float m = a/b;
    float i = my - m*mx;
    printf("m = %0.1f,b = %0.1f, line equation y = %0.1fx + %0.1f",m,i, m,i);

}
