//naresh
//22CH10052
//L1-01



# include<stdio.h>
#include<math.h>
int main(){
int x1,y1,x2,y2,x3,y3,x4,y4;
float a,a1,a2,a3,a4;
printf(" enter the four points of 2D space:");
printf("(x1,y1) = ");
scanf("%d,%d",&x1,&y1);
printf("(x2,y2) = ");
scanf("%d,%d",&x2,&y2);
printf("(x3,y3) = ");
scanf("%d,%d",&x3,&y3);
printf("(x4,y4) = ");
scanf("%d,%d",&x4,&y4);
a1=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))*1/2.0;
a2=(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2))*1/2.0;
a3=(x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3))*1/2.0;
a4 =(x2*(y3-y4)+x2*(y4-y2)+x4*(y2-y3))*1/2.0;
if (a1<a2||a1<a3||a1<a4){
        a=a1;
    printf(" points having the minimum area: (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n Area = %.2f\n",(x1,y1),(x2,y2),(x3,y3),(x4,y4),a);

   }
   else if (a2<a1||a2<a3||a2<a4){
        a=a2;
    printf(" points having the minimum area: (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n Area = %f\n",(x1,y1),(x2,y2),(x3,y3),(x4,y4),a);
    }
   else if (a3<a1||a3<a2||a3<a4){
        a=a3;
    printf(" points having the minimum area: (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n Area = %f\n",(x1,y1),(x2,y2),(x3,y3),(x4,y4),a);
}
   else  {
        a=a4;
    printf(" points having the minimum area: (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n Area = %f\n",(x1,y1),(x2,y2),(x3,y3),(x4,y4),a);

}
return 0;

}


