/*chityala raviteja
section 3
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>

int main() {
    float x[10],y[10],sumx,sumy,avgx,avgy,m1,m2,m,b;
    int a;
    printf("x-coordinates:");
    for (a=0;a<10;a++){
        scanf("%f",&x[a]);
        sumx+=x[a];
    }
    printf("y-coordinates:");
    for (a=0;a<10;a++){
        scanf("%f",&y[a]);
        sumy+=y[a];
    }
    avgx=sumx/10;
    avgy=sumy/10;
    //calculation of m
    for (a=0;a<10;a++){
        m1+=((x[a]-avgx)*(y[a]-avgy));
        m2+=(x[a]-avgx)*(x[a]-avgx);
    }
    m=m1/m2;
    b=avgy-(m*avgx);
    printf("m= %.1f,b= %.1f, line equation y= %.1fx+%.1f",m,b,m,b);
}