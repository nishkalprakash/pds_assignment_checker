#include<stdio.h>
#include<math.h>
struct rectangle{
int x1,y1;
int x2,y2;//enter coordinates
};
int area(struct rectangle a);
int main(){
struct rectangle r;
printf("Enter the  coordinates of bottom left corner :");
scanf("%d %d" ,&r.x1,&r.y1);
printf("Enter the  coordinates of top right corner :");
scanf("%d %d" ,&r.x2,&r.y2);
area(r);//function call
return 0;
}

int area(struct rectangle a){// defined area function
int A;    
A=sqrt(pow((a.x1-a.x2),2)*pow((a.y1-a.y2),2));
printf("Area : %d" ,A);
return 0;
}
 
