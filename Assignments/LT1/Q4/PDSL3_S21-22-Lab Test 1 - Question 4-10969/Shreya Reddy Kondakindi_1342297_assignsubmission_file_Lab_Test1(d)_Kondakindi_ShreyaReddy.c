/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating system:Windows*/
#include<stdio.h>
#include<math.h>
int main(){
    int x[10],y[10];
    int i,j;
    for(i=0;i<10;i++){
        printf("enter x coordinates :");
        scanf("%d",&x[i]);
    }
    for(j=0;j<10;j++){
        printf("enter y coordinates :");
        scanf("%d",&y[j]);
    }

    float x_mean,y_mean;
    int k,sum_x,sum_y,l;
    sum_x=0;
    sum_y=0;
    for(k=0;k<10;k++){
        sum_x=sum_x+x[k];
    }
    for(l=0;l<10;l++){
        sum_y=sum_y+y[l];
    }
    x_mean=sum_x/10;
    y_mean=sum_y/10;
    int a;
    float numerator=0,denominator=0;
    for(a=0;a<10;a++){
        numerator=numerator+((x[a]-x_mean)*(y[a]-y_mean));
        denominator=denominator+pow((x[a]-x_mean),2);
    }
    float m,b;
    m=numerator/denominator;
    printf("slope=%f \n",m);
    b=y_mean-(m*x_mean);
    printf("y intercept=%f \n",b);
    printf("the line equation is y=%f*x+%f",m,b);
    return 0;
}
