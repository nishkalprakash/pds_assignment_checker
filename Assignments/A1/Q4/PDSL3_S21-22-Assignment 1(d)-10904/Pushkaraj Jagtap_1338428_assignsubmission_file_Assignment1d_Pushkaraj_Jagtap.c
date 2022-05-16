/*  Name        = Pushkaraj Jagtap
    Roll no.    = 21MF3IM12
    Package     = Codeblock
    Assign class= 5
    Assign no.  = 1(a)
*/

#include<stdio.h>
#include<math.h>
int main()
{
  float x1,x2,x3,y1,y2,y3,area;

      printf("Enter the coordinates in order A :\n");
      scanf("%f%f",&x1,&y1);
      printf("Enter the coordinates in order B :\n");
      scanf("%f%f",&x2,&y2);
      printf("Enter the coordinates in order C :\n");
      scanf("%f%f",&x3,&y3);

      area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;

      if(area==0){
           printf("Triangle is invalid\n");
      }
      else{
           printf("Triangle is valid\n");
      }

      if((sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)))>sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)))
      {
         printf("This is acute triangle");
      }

      else if((sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)))==sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)))
      {
        printf("This is right angled triangle");

      }
      else{
        printf("This is obtue angled traingle");
      }
}
