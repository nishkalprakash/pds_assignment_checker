# include <stdio.h>
int main()

{
   int x1, y1, x2, y2, x3, y3;
   double ab, bc, ac, abc;
   
   printf("Enter the co-ordinates of first point");
   scanf("%d %d", &x1, &y1);
   printf("Enter the co-ordinates of second point");
   scanf("%d %d", &x2, &y2);
   printf("Enter the co-ordinates of third point");
   scanf("%d %d",&x3, &y3 );
   
   //suppose we have three points a, b, c
   //then all three points fall on one straight line
   //ab + bc + ac (distance should be same)
   
   ab = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
   bc = sqrt(pow(x3-x2, 2)+pow(y3-y2, 2));
   ac = sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));
   
   printf("ab: %f\t bc: %f\t ac: %f\n", ab, bc, abc=ab+bc);
   if abc == ac
   {# include <stdio.h>
int main()

{
   int x1, y1, x2, y2, x3, y3;
   double ab, bc, ac, abc;
   
   printf("Enter the co-ordinates of first point");
   scanf("%d %d", &x1, &y1);
   printf("Enter the co-ordinates of second point");
   scanf("%d %d", &x2, &y2);
   printf("Enter the co-ordinates of third point");
   scanf("%d %d",&x3, &y3 );
   
   //suppose we have three points a, b, c
   //then all three points fall on one straight line
   //ab + bc + ac (distance should be same)
   
   ab = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
   bc = sqrt(pow(x3-x2, 2)+pow(y3-y2, 2));
   ac = sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));
   
   printf("ab: %f\t bc: %f\t ac: %f\n", ab, bc, abc=ab+bc);
   if abc == ac
   {
       printf("ab + bc = ac\n");
       printf("All the three points fall in one straight line ");
   }
   else
       printf("All the three points are not present on one straight line");
   
   return 0;
}

       printf("ab + bc = ac\n");
       printf("All the three points fall in one straight line ");
   }
   else
       printf("All the three points are not present on one straight line");
   
   return 0;
}