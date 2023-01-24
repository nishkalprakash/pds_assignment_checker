/* Section 14
   Muskan
   Lab- 9
   Roll No.- 22ME30042
*/
#include<stdio.h>
#include<math.h>


struct circle 
             {
               int x,y;
               float r;
             };

struct circle c1,c2;


int isintersecting(struct circle c1,struct circle c2)
{
   float c=pow((c1.x-c2.x),2)+pow((c1.y-c2.y),2);
 
if((c1.r+c2.r)>(sqrt(c)))  
{
 return 1;
}else
 return 0;
}

int main()
{


printf("Enter the data of 1st circle\n");
scanf("%d%d%f",&c1.x,&c1.y,&c1.r);
printf("Enter the data of 2nd circle\n");
scanf("%d%d%f",&c2.x,&c2.y,&c2.r);

int z=isintersecting(c1,c2);
if(z==1)
{
  printf("circles intersect");
}else 
printf("circles Don't intersect");

return 0;
}
   

  




  
