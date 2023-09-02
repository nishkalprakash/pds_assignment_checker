//Name: Shine Srivastava
//Roll no. : 23MF3IM17


#include<stdio.h>
int main()
{
  int a,b,c,d,x,y;
  
  printf("Enter coordinates of bottom left corner of rectangle\n");
  scanf("%d %d",&a,&b);

   printf("Enter coordinates of top right corner of rectangle\n");
   scanf("%d %d",&c,&d);
   
   if((c-a)<=0 && (d-b)<=0){
     printf("Ill formed rectangle\n");
     return 0;
   }
   else{printf("It will form rectangle\n");}

   printf("Enter coordinates of point P : \n");
   scanf("%d %d",&x,&y);

   if (x>c || x<a ||y>d||y<b){
     printf("Point P(%d,%d) will lie outside the rectangle\n",x,y);
   }
   else if(x>a && x<c && y>b && y<d){
     printf("Point P(%d,%d) will lie inside the rectangle\n",x,y);
   }
   else if(y==d && x>a && x<c){
     printf("Point P(%d,%d) will lie on Top side of rectangle\n",x,y);
   }
    else if(y==b && x>a && x<c){
     printf("Point P(%d,%d) will lie on Bottom side of rectangle\n",x,y);
   }
    else if(x==c && y>b && x<d){
     printf("Point P(%d,%d) will lie on Right side of rectangle\n",x,y);
   }
    else if(x==a && y>b && x<d){
     printf("Point P(%d,%d) will lie on Left side of rectangle\n",x,y);
   }

   
    else if(x==a && y==b){
      printf("Point P(%d,%d) lies on bottom left corner of rectangle\n",x,y);
    }
    else if(x==c && y==d){
      printf("Point P(%d,%d) lies on Top right corner of rectangle\n",x,y);
    }
    else if(x==a && y==d){
      printf("Point P(%d,%d) lies on top left corner of rectangle\n",x,y);
    }
    else if(x==c && y==b){
      printf("Point P(%d,%d) lies on bottom right corner of rectangle\n",x,y);
    }

   return 0;
}
   


   
   

   
