#include <stdio.h>

int main()
{
    int a,b,c,d,x2,y2,x4,y4,p,q;
  printf("PLEASE ENTER THE BOTTOM LEFT CORNER OF THE RECTANGLE AS FIRST X AND THEN Y COORDINATES \n");
  scanf("%d%d", &a, &b);

   printf("PLEASE ENTER THE TOP RIGHT CORNER OF THE RECTANGLE AS FIRST X AND THEN Y COORDINATES\n");
  scanf("%d%d", &c, &d);

  x2=a;
  y2=d;
  x4=c;
  y4=b;

  printf("THE ALL FOUR CORNERS OF RECTANGLE IN CLOCKWISE DIRECTION STARTING FROM BOTTOM LEFT CORNER ARE (%d,%d), (%d,%d), (%d,%d), (%d,%d) \n",a,b,x2,y2,c,d,x4,y4);

    printf("PLEASE ENTER THE POINT TO BE CHECKED WHETHER IT IS IN THE RECTANGLE OR NOT AS FIRST X AND THEN Y COORDINATES \n");
  scanf("%d%d", &p, &q);

  if(((a<p) &&(p<c)) &&((b<q)&&(q<d)))
  {
      printf("THE POINT IS  (%d,%d)INSIDE THE RECTANGLE \n ",p ,q);
  }
  else
    {
        printf("THE POINT IS (%d,%d) OUTSIDE THE RECTANGLE \n", p,q);

  }

}
