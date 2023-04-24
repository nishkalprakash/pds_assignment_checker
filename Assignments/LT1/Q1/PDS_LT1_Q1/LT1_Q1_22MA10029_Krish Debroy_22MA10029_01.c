#include <stdio.h>
#include <math.h>

int main()
{
     int x1,y1,x2,y2,x3,y3,x4,y4;
     double s1,s2,s3,s4,s5,s6, a1,a2,a3,a4,semi1,semi2,semi3,semi4,maxar=0,peri;
     int flag1=0,flag2=0,flag3=0,flag4=0;
     printf("Enter the coordinates for four points :\n");
     printf("(x1,y1):");
     scanf("%d%d", &x1,&y1);
     printf("\n(x2,y2):");
     scanf("%d%d", &x2,&y2);
     printf("\n(x3,y3):");
     scanf("%d%d", &x3,&y3);
     printf("\n(x4,y4):");
     scanf("%d%d", &x4,&y4);
     s1= sqrt(pow((x1-x2),2)+pow((y1-y2),2));/*p1,p2*/
     s2= sqrt(pow((x3-x2),2)+pow((y3-y2),2));/*p2,p3*/
     s3= sqrt(pow((x3-x4),2)+pow((y3-y4),2));/*p3,p4*/
     s4= sqrt(pow((x1-x4),2)+pow((y1-y4),2));/*p4,p1*/
     s5= sqrt(pow((x4-x2),2)+pow((y4-y2),2));/*p4,p2*/
     s6= sqrt(pow((x1-x3),2)+pow((y1-y3),2));/*p1,p3*/

     semi1=(s1+s2+s6)/2; /* p1,p2,p3*/
     a1=sqrt(semi1*(semi1-s1)*(semi1-s2)*(semi1-s6));

     semi2 = (s1+s4+s5)/2;/*p1,p2,p4*/
     a2=sqrt(semi2*(semi2-s1)*(semi2-s4)*(semi2-s5));

     semi3 = (s6+s3+s4)/2;/*p1,p3,p4*/
     a3=sqrt(semi3*(semi3-s6)*(semi3-s4)*(semi3-s3));

     semi4 = (s2+s3+s5)/2;/*p2,p3,p4*/
     a4=sqrt(semi4*(semi4-s2)*(semi4-s3)*(semi4-s5));

     if (a1>a2)
     {
         maxar=a1;
         flag1=1;
     }
     else if (a2>a1)
     {
         maxar=a2;
         flag2=1;
     }

     if(a3>maxar)
     {
         maxar=a3;
         flag3=1;
         flag2=0;
         flag1=0;
     }

     if(a4>maxar)
     {
         maxar=a4;
         flag4=1;
         flag3=0;
         flag2=0;
         flag1=0;
     }



     if(maxar==0)
     {
         printf("Points having maximum area : \n");
         printf("(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
         printf("\nPerimeter = 0 (since there is no triangle.)");
     }
     else
     {
         if (flag1==1)
         {
            peri=(s1+s2+s6);
            printf("Points having maximum area : \n");
            printf("(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
            printf("\nPerimeter = %.2lf",peri);
         }
         else if (flag2==1)
         {
            peri=(s1+s4+s5);
            printf("Points having maximum area : \n");
            printf("(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);
            printf("\nPerimeter = %.2lf",peri);
         }
         else if (flag3==1)
         {
            peri=(s6+s3+s4);
            printf("Points having maximum area : \n");
            printf("(%d,%d),(%d,%d),(%d,%d)",x1,y1,x3,y3,x4,y4);
            printf("\nPerimeter = %.2lf",peri);
         }
         else if (flag4==1)
         {
            peri=(s2+s3+s5);
            printf("Points having maximum area : \n");
            printf("(%d,%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);
            printf("\nPerimeter = %.2lf",peri);
         }
     }




}
