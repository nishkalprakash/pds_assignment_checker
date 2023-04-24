#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    printf("(x1,y1)=");
    scanf("%d,%d",&x1,&y2);
    printf("(x2,y2)=");
    scanf("%d,%d",&x2,&y2);
    printf("(x3,y3)=");
    scanf("%d,%d",&x3,&y3);
    printf("(x4,y4)=");
    scanf("%d,%d",&x4,&y4);
    float area1= 0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)) );
    float area2= 0.5*((x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3)) );
    float area3= 0.5*((x3*(y4-y1))+(x4*(y1-y3))+(x1*(y3-y4)) );
    float area4= 0.5*((x1*(y2-y4))+(x2*(y4-y1))+(x4*(y1-y2)) );

    if (area1>area2 &&area1>area2 && area1>area3 &&area1>area4){
    printf("points having the maximum area %d,%d %d,%d %d,%d:,x1,y1,x2,y2,x3,y3");
    }
    printf("area %f",area1);
    int a,b,c;
    float perimeter =(a+b+c)/3;
    printf("perimeter ");



return 0;
}
