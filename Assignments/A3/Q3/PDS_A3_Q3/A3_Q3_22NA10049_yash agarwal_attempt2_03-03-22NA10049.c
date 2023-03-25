//22NA10049
#include <stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,z1,z2,z3,d1,d2,d;  //initializing variables
    printf("A(x1,y1,z1): \n");
          scanf("%f%f%f",&x1,&y1,&z1);

     printf("B(x2,y2,z2): \n");
           scanf("%f%f%f",&x2,&y2,&z2);

     printf("C(x3,y3,z3): \n");
           scanf("%f%f%f",&x3,&y3,&z3);

            printf("A(x1,y1,z1): %.2f% .2f% .2f \n",x1,y1,z1);   //printing the given points
            printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
            printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);

            //checking collinear or not

            d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));  // distance between point a and b
            d2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+(z2-z3)*(z2-z3));   // distance between point c and b
            d=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)+(z3-z1)*(z3-z1));    // distance between point a and c

            if(d==(d1+d2))     //condition to check their collinearity
                printf("the given three points  are collinear \n");
            else
                printf("the given three points are not collinear \n");



                if(x1==x2 && x1==x3)   // nested if else to check each of the points
                {


                  if(y2==y3 && y1==y3)  //if y cordinates all equal
                    {
                        if(z1>z2 && z1>z3)
                                  {

                                      if(z2<z3)
                                      {
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                      }
                                      else
                                      {
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                      }
                                      printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                  }

                                  if(z2>z3 && z2>z1)
                                  {


                                      if(z1<z3)
                                      {
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                      }
                                      else
                                      {
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      }
                                       printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                  }

                                  if(z3>z2 && z3>z1)
                                  {

                                      if(z2<z1)
                                      {
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                         printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      }
                                      else
                                      {
                                          printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                          printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                      }
                                      printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                  }
                                  if(z1==z2 && z1==z3)
                                  {
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                       printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                  }
                    }

                  else if(y1==y2||y2==y3||y3==y1)  // if any two y coordinates are equal
                    {
                       if(y1==y2)
                       {
                         if(z1>z2 && z1>z3)
                                  {

                                      if(z2<z3)
                                      {
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                      }
                                      else
                                      {
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                      }
                                      printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                  }

                                  if(z2>z3 && z2>z1)
                                  {


                                      if(z1<z3)
                                      {
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                      }
                                      else
                                      {
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      }
                                       printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                  }

                                  if(z3>z2 && z3>z1)
                                  {

                                      if(z2<z1)
                                      {
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                         printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      }
                                      else
                                      {
                                          printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                          printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                      }
                                      printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                  }
                                  if(z1==z2 && z1==z3)
                                  {
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                       printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                  }
                       }
                       else if(y2==y3)
                       {
                         if(z1>z2 && z1>z3)
                                  {

                                      if(z2<z3)
                                      {
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                      }
                                      else
                                      {
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                      }
                                      printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                  }

                                  if(z2>z3 && z2>z1)
                                  {


                                      if(z1<z3)
                                      {
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                      }
                                      else
                                      {
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      }
                                       printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                  }

                                  if(z3>z2 && z3>z1)
                                  {

                                      if(z2<z1)
                                      {
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                         printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      }
                                      else
                                      {
                                          printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                          printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                      }
                                      printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                  }
                                  if(z1==z2 && z1==z3)
                                  {
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                       printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                  }
                       }
                       else if (y1==y3)
                       {
                          if(z1>z2 && z1>z3)
                                  {

                                      if(z2<z3)
                                      {
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                      }
                                      else
                                      {
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                      }
                                      printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                  }

                                  if(z2>z3 && z2>z1)
                                  {


                                      if(z1<z3)
                                      {
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                      }
                                      else
                                      {
                                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      }
                                       printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                  }

                                  if(z3>z2 && z3>z1)
                                  {

                                      if(z2<z1)
                                      {
                                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                         printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      }
                                      else
                                      {
                                          printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                          printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                      }
                                      printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                  }
                                  if(z1==z2 && z1==z3)
                                  {
                                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                                      printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                                       printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                                  }
                       }

                       else if(y1>y2&&y1>y3)
                      {
                          if(y2>y3)
                          {
                             printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                             printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                          }

                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                      }
                      else if(y2>y1&&y2>y3)
                      {
                           if(y1>y3)
                          {
                             printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                             printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                          }


                         printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                      }
                      else
                      {
                           if(y2>y1)
                          {
                               printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                               printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                          }
                          else
                          {
                            printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                            printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                          }

                        printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                      }
                    }
                }

                else if(x1>x2 && x1>x3)
                 {
                   if(x2>x3)
                   {
                      printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                       printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                   }
                   else
                   {
                      printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                      printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                   }
                   printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                 }
                else if(x2>x1 && x1>x3)
                 {
                    if(x1>x3)
                      {
                       printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                       printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                      }
                      else
                      {
                          printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                          printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                      }
                     printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                 }
                 else if(x3>x2 && x3>x1)
                 {

                     if(x2>x1)
                       {
                        printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);
                        printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                       }
                       else
                       {
                           printf("B(x2,y2,z2): %.2f% .2f% .2f \n",x2,y2,z2);
                           printf("A(x1,y1,z1): %.2f %.2f %.2f \n",x1,y1,z1);

                       }
                       printf("C(x3,y3,z3): %.2f% .2f% .2f \n",x3,y3,z3);
                 }
}
