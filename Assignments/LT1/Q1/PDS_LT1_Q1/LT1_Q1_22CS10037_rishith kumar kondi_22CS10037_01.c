#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    float a1,a2,a3,a4;
    printf("(x1,y1)=");
    scanf("%d,%d",&x1,&y1);
    printf("(x2,y2)=");
    scanf("%d,%d",&x2,&y2);
    printf("(x3,y3)=");
    scanf("%d,%d",&x3,&y3);
    printf("(x4,y4)=");
    scanf("%d,%d",&x4,&y4);
    a1=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
    if(a1<0){a1=a1*(-1);}
    a2=(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2))/2.0;
    if(a2<0){a2=a2*(-1);}
    a3=(x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3))/2.0;
    if(a3<0){a3=a3*(-1);}
    a4=(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3))/2.0;
    if(a4<0){a4=a4*(-1);}
    if(a1<a2&&a1<a3&&a1<a4){
        printf("the points having minimum area :(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
        printf("\n");
        printf("Area=%f",a1);}
    if(a2<a1&&a2<a3&&a2<a4){
        printf("the points having mnimum araea:(%d,%d),(%d,%d),(%d,%d) ",x1,y1,x2,y2,x4,y4);
         printf("\n");
        printf("\nArea =%f",a2);}
    if(a3<a2&&a3<a1&&a3<a4){
        printf("the points having mnimum araea:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x3,y3,x4,y4);
         printf("\n");
        printf("/nArea=%f",a3);}
    if(a4<a1&&a4<a2&&a4<a3){
        printf("the points having mnimum araea:(%d,%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);
         printf("\n");
        printf("\nArea=%f",a4);}
}