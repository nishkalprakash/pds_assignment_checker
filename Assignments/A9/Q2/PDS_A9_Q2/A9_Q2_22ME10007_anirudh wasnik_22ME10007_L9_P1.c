
/*
Section: 14
Roll no: 22ME10007
Name: Anirudha Wasnik
Assignment No: 9
*/

#include<stdio.h>
#include<math.h>
struct circle{
      float x,y;
      float r;
      };

int isintersectingcircle(struct circle a, struct circle b){
     float discen;
     int h;
     discen=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
     if((a.r+b.r)>discen){
         h=1;}
     else{
         h=0;
         }
         
return h;
}





int main()
{


int count;
int k;
struct circle a,b;
for(count=1;count<3;count++){
      printf("enter x-coordinates of circle %d:",count);
      scanf("%f",&a.x);
      printf("enter y-coordinates of circle %d:",count);
      scanf("%f",&a.y);
      printf("enter radius of circle %d:",count);
      scanf("%f",&a.r);
      if(count=2){
                  printf("enter x-coordinates of circle %d:",count);
                  scanf("%f",&b.x);
                  printf("enter y-coordinates of circle %d:",count);
                  scanf("%f",&b.y);
                  printf("enter radius of circle %d:",count);
                  scanf("%f",&b.r);
            }
      }
k=isintersectingcircle(a,  b);
if(k==1){
printf("intersecting circles");}
else{
printf("non intersecting circles");}


return 0;

}
