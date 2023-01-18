
/*
Section: 14
Roll no: 22ME10007
Name: Anirudha Wasnik
Assignment No: 9
*/

#include<stdio.h>
#include<math.h>
struct rectangle{
      float x,y;                                                  //making a structure
      
      };

float area(struct rectangle a, struct rectangle b){                //function for area
     float ar;
     ar=((b.x-a.x)*(b.y-a.y));


return ar;
}





int main()
{


int count,flag;

struct rectangle a,b;
for(count=1;count<3;count++){                                                            //to get the coordinates
      printf("enter x-coordinates of bottom left vertex of rectangle :");                         
      scanf("%f",&a.x);
      printf("enter y-coordinates of bottom left vertex of rectangle :");
      scanf("%f",&a.y);
      if(count=2){
                  printf("enter x-coordinates of top right vertex of rectangle :");
                  scanf("%f",&b.x);
                  printf("enter y-coordinates of top right vertex of rectangle :");
                  scanf("%f",&b.y);

            }
      if(b.x<a.x||b.y<a.y){                                                           //as bottom corner will be below top always
      printf("please enter correct coordinates\n");
      
      flag=0;

      count=1;
      }
flag=1;
      }
if(flag!=0){printf("%f",area(a,b));}                         //calls the function

return 0;

}
