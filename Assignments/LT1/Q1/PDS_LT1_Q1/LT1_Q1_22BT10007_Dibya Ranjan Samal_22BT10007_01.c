#include<stdio.h>
int main(){
int x1,x2,x3,x4,y1,y2,y3,y4;
double a1,a2,a3,a4;
    printf("(x1,y1) = ");
    scanf("%d%d",&x1,&y1);
    printf("(x2,y2) = ");
    scanf("%d%d",&x2,&y2);
    printf("(x3,y3) = ");
    scanf("%d%d",&x3,&y3);
    printf("(x4,y4) = ");
    scanf("%d%d",&x4,&y4);
   a1= 0.5 * (x1*(y2-y3)-y1*(x2-x3)+((x2*y3)-(y2*x3)));
   a2= 0.5 * (x2*(y3-y4)-y2*(x3-x4)+((x3*y4)-(y3*x4)));
   a3= 0.5 * (x3*(y4-y1)-y3*(x4-x1)+((x4*y1)-(y4*x1)));
   a4= 0.5 * (x1*(y2-y4)-y1*(x2-x4)+((x2*y4)-(y2*x4)));
   if(a1<0){ a1= a1*(-1);}
   if(a2<0){ a2= a2*(-1);}
   if(a3<0){ a3= a3*(-1);}
   if(a4<0){ a4= a4*(-1);}
   if(a1<=a2 && a1<=a3 && a1<=a4){
    printf("points having the minimum area : (%d,%d), (%d,%d) ,(%d,%d)\n",x1,y1,x2,y2,x3,y3);
    printf("Area = %.2f",a1);
   }
    else if(a2<=a1 && a2<=a3 && a2<=a4){
    printf("points having the minimum area : (%d,%d), (%d,%d) ,(%d,%d)\n",x2,y2,x3,y3,x4,y4);
    printf("Area = %.2f",a2);
   }
   else if(a3<=a2 && a3<=a1 && a3<=a4){
    printf("points having the minimum area : (%d,%d), (%d,%d) ,(%d,%d)\n",x3,y3,x4,y4,x1,y1);
    printf("Area = %.2f",a3);
   }
   else if(a4<=a2 && a4<=a3 && a4<=a1){
    printf("points having the minimum area : (%d,%d), (%d,%d) ,(%d,%d)\n",x1,y1,x2,y2,x3,y3);
    printf("Area = %.2f",a4);
   }


return 0;
}
