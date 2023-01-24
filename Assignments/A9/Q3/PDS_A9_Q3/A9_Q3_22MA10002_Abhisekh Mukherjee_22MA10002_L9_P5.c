/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:5
topic:structures
*/
#include<stdio.h>
// structure to store x and y coordinate
typedef struct coordinates{
 float x;
float y;
}coor;

//structure to store two coordinates 

struct rectangle{
coor TL;
coor BR;
};
// main function
int main()
{
struct rectangle R;
float area;
printf("enter the x coordinate of top left point\n");
scanf("%f",&R.TL.x);
printf("enter the y coordinate of top left point\n");
scanf("%f",&R.TL.y);
printf("enter the x coordinate of bottom right point\n");
scanf("%f",&R.BR.x);
printf("enter the y coordinate of bottom right point\n");
scanf("%f",&R.BR.y);
area=(R.BR.y - R.TL.y)*(R.TL.x-R.BR.x);
if(area<0){
     area=area*-1;
}
printf("the area of the rectangle is %f\n",area);// printing the area
return 0;
}
