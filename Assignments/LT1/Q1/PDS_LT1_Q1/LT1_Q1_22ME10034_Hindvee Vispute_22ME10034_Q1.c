#include<stdio.h>
#include<math.h>

int main(){
int x1, x2, x3, x4, y1, y2, y3, y4; /* variables to store points in 2D plane*/

float area1, area2, area3, area4, minm; /* variables to store areas of 4 possible triangles*/
/* minm = the variable that will store the area of the smallest triangle*/
/* reading 4 points in 2D plane*/
printf("(x1, y1)=");
scanf("%d, %d", &x1, &y1);
printf("\n (x2, y2)="); /* \n for displaying output in new line*/
scanf("%d, %d", &x2, &y2);
printf("\n (x3, y3)=");
scanf("%d, %d", &x3, &y3);
printf("\n (x4, y4)=");
scanf("%d, %d", &x4, &y4);


/* calculating areas of the 4 possible triangles*/
area1 = 05*((x2*y3 - x3*y2) - (x1*y3 - x3*y1) + (x1*y2 - x2*y1));
area2 = 05*((x3*y4 - x4*y3) - (x2*y4 - x4*y2) + (x2*y3 - x3*y2));
area3 = 05*((x3*y4 - x4*y3) - (x1*y4 - x4*y1) + (x1*y3 - x3*y1));
area4 = 05*((x2*y4 - x4*y2) - (x1*y4 - x4*y1) + (x1*y2 - x2*y1));

int flag = 1;

/* flag is initialised to 1
and its value will change to 2, 3, or 4 with respect to the triangle having the smallest area */

/* comparing areas to obtain the smallest triangle*/

if(area1>area2)
{
    minm = area2;
    flag = 2;
    if(minm>area3)
    {
        minm = area3;
        flag = 3;
        if(minm>area4)
        {
            minm = area4;
            flag = 4;
        }
    }
}
/* printing the output of the smallest triangle */
if(flag = 1)
{
    printf("\n Points having the minimum area: (%d, %d),(%d, %d),(%d, %d)", x1, y1, x2, y2, x3, y3);
printf("\n Area = %f", area1);
}

if(flag = 2)
{
    printf("\n Points having the minimum area: (%d, %d),(%d, %d),(%d, %d)", x2, y2, x3, y3, x4, y4);
printf("\n Area = %f", area2);
}

if(flag = 3)
{
    printf("\n Points having the minimum area: (%d, %d),(%d, %d),(%d, %d)", x1, y1, x3, y3, x4, y4);
printf("\n Area = %f", area3);
}



if(flag = 4)
{
    printf("\n Points having the minimum area: (%d, %d),(%d, %d),(%d, %d)", x1, y1, x2, y2, x4, y4);
printf("\n Area = %f", area4);
}



return 0;
}
