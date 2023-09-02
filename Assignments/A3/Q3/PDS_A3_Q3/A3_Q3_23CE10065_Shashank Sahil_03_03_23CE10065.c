//Lab 3
// Name- Shashank Sahil
// Roll number - 23CE10065
#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Enter the coordinates of point P(x,y)");
    scanf("%d%d",&x,&y);

    if (x==0 && y==0 ){
        printf("Point P is (%d,%d)\n It lies on both x and y axis(Origin)",x,y);
    }
     if (x==0 && y!=0 ){
        printf("Point P is (%d,%d)\n It lies on Y axis",x,y);
    } if (x!=0 && y==0 ){
        printf("Point P is (%d,%d)\n It lies on X axis",x,y);
    } if (x>0 && y<0 ){
        printf("Point P is (%d,%d)\n It lies in second Quadrant ",x,y);
    } if (x<0 && y<0 ){
        printf("Point P is (%d,%d)\n It lies in third Quadrant ",x,y);
    } if (x>0 && y>0 ){
        printf("Point P is (%d,%d)\n It lies in first Quadrant ",x,y);
    }
     if (x<0 && y>0 ){
        printf("Point P is (%d,%d)\n It lies in fourth Quadrant ",x,y);
    }
    
}
