//Name:Lokesh Nitin Ingale
//Roll No:23HS10030
#include<stdio.h>
int main()
{
  // Declaring variables
  int x,y;
  // Taking coordinate inputs
  printf("Enter the coordinates of the point P(x,y):");
  scanf("%d%d",&x,&y);   
   if (x==0){
     printf("Point lies on y axis\n");
   }
   else if (y==0){
   printf("Point lies on x axis\n");
   }
   else if (x==0 && y==0){
   printf("Point lies on both x and y axis\n");
   }
   else if (x>0 && y>0){
     printf("Point is present in 1st quadran\nt");
   }
 else if (x>0 && y<0){
     printf("Point is present in 2nd quadrant\n");
   }
 else if (x<0 && y>0){
     printf("Point is present in 4th quadrant\n");
   }
 else if (x<0 && y<0){
     printf("Point is present in 3rd quadrant\n");
 }
     else{
       printf("Wrong input");
   }
 return 0;
}


   
    
