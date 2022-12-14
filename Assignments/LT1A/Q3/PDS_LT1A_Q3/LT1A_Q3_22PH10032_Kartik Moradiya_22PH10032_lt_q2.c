#include<stdio.h>
#include<math.h>

   int main()
   {
     float x1,x2,x3,y1,y2,y3;
     float A,B,C,a,b,c;
     printf("enter the coordinate of triangle");
     scanf("%f %f",&x1,&y1);  //input of coordinate
     scanf("%f %f",&x2,&y2);
     scanf("%f %f",&x3,&y3);
     
     A=sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
     B=sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
     C=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
     
     printf("length of side a:%f\n",A);  //print the side of length
     printf("length of side b:%f\n",B);
     printf("length of side c:%f\n",C);
     
     float max=A;
     if (B>max)max=B;         //find maximum length of side
     if(c>max)max=c;
       
     if(max>A+B+C-max)
      {            //condition for valid triangle         
       printf("invalid triangle");
      }
      else if (max*max<A*A+B*B+C*C-max*max)
        {                                //condition for acute triangle
        printf("acute triangle");
        }
        else if(max*max>A*A+B*B+C*C-max*max)
        {                                     //condition for obtuse triangle
         printf("obtuse triangle");
        }
        else if(max*max == A*A+B*B+C*C-max*max)
        {                                    //condition for right triangle
         printf("right angle triangle");
        }
      
     
     return 0; 
      
   }
