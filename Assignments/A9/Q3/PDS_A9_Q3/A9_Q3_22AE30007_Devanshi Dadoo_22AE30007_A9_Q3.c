/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 9
desciption: TO FIND THE AREA OF A RECTANGLE 
*/

#include<stdio.h>


// DEFING THE STRUCTURE 



typedef struct rectangle
{
 float x;
 float y;
} rectangle;

rectangle p1, p2;



//READING THE POINT P1




struct rectangle read_points1()
{
 struct rectangle p1;
 printf("Rect: ");
 scanf("%f %f", &p1.x, &p1.y);
 return p1;
}


// READING POINT P2




struct rectangle read_points2()
{
 struct rectangle p2;
 scanf("%f %f", &p2.x, &p2.y);
 return p2;
}



// CALCULATING AREA 



float area(rectangle a, rectangle b)
{
 float len1, len2, lenz;
 len1= b.x-a.x;
 len2= b.y-a.y;
 lenz= len1*len2;
 return lenz;
}



// MAIN FUNCTION 



int main()
{
 struct rectangle p1,p2;
 p1= read_points1();
 p2= read_points2();
 printf("area %f", area(p1,p2));
}


