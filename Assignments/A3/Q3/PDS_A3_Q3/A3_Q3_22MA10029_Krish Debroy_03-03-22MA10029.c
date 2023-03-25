#include <stdio.h>
#include <math.h>

int main()
{
    double x1,x2,x3,y1,y2,y3,z1,z2,z3;
    double dAB, dBC, dAC;
    printf("A(x1,y1,z1) : ");
    scanf("%lf%lf%lf",&x1,&y1,&z1);
    printf("B(x2,y2,z2) : ");
    scanf("%lf%lf%lf",&x2,&y2,&z2);
    printf("C(x3,y3,z3) : ");
    scanf("%lf%lf%lf",&x3,&y3,&z3);

    dAB= sqrt(pow((x1-x2),2.0)+pow((y1-y2),2.0)+pow((z1-z2),2.0));
    dBC= sqrt(pow((x2-x3),2.0)+pow((y2-y3),2.0)+pow((z2-z3),2.0));
    dAB= sqrt(pow((x3-x1),2.0)+pow((y3-y1),2.0)+pow((z3-z1),2.0));

    if ((dAB+dBC==dAC)||(dAB+dAC==dBC)||(dBC+dAC==dAB))
        printf("The given three points are collinear.\n");
    else
        printf("The given three points are not collinear.\n");

    int ra=1,rb=1,rc=1;/*where ra , rb , rc are the weightages or rank of A<B<C respectively when x coordinate is compared*/
    if (x1>x2)
        ra+=1;
    else if(x1==x2)
    {
        ra+=1;
        rb+=1;
    }
    else rb+=1;


    if (x2>x3)
        rb+=1;
    else if(x3==x2)
    {
        rc+=1;
        rb+=1;
    }
    else rc+=1;


    if (x1>x3)
        ra+=1;
    else if(x1==x3)
    {
        ra+=1;
        rc+=1;
    }
    else rc+=1;



    if ((ra>rb) && (ra>rc))
    {
        if (rb==rc)
        {
            if (y2==y3)
            {
                if (z2==z3)
                {
                   printf("C<B<A");
                }
                if (z2>z3)
                {
                    printf("C<B<A");
                }
                else
                {
                    printf("B<C<A");
                }
            }
            if (y2>y3)
            {
                printf("C<B<A");
            }
            else
            {
                printf("B<C<A");
            }
        }
        else
        {
            if (rb<rc)
            {
                printf("B<C<A");
            }
            else
            {
                printf("C<B<A");
            }
        }
    }




    if ((rb>ra) && (rb>rc))
    {
        if (ra==rc)
        {
            if (y1==y3)
            {
                if (z1==z3)
                {
                   printf("C<A<B");
                }
                if (z1>z3)
                {
                    printf("C<A<B");
                }
                else
                {
                    printf("A<C<B");
                }
            }
            if (y1>y3)
            {
               printf("C<A<B");
            }
            else
            {
               printf("A<C<B");
            }
        }
        else
        {
            if (ra>rc)
            {
                printf("C<A<B");
            }
            else
            {
                printf("A<C<B");
            }
        }
    }




    if ((rc>ra) && (rc>rb))
    {
        if (ra==rb)
        {
            if (y1==y2)
            {
                if (z1==z2)
                {
                   printf("A<B<C");
                }
                if (z1>z2)
                {
                    printf("B<A<C");
                }
                else
                {
                    printf("A<B<C");
                }
            }
            if (y1>y2)
            {
               printf("B<A<C");
            }
            else
            {
               printf("A<B<C");
            }
        }
        else
        {
            if (ra>rb)
            {
                printf("B<A<C");
            }
            else
            {
                printf("A<B<C");
            }
        }
    }



    /*if ((ra=rb)&&(ra>rc))
    {
        if (y1==y2)
        {
            if (z1>z2)
            {
                printf("C<B<A");
            }
            else
            {
                printf("C<A<B");
            }

        }
        else
        {
            if (y1>y2)
                {
                    printf("C<B<A");
                }
            else
                {
                    printf("C<A<B");
                }
        }
    }


    if ((ra=rb)&&(ra<rc))
    {
        if (y1==y2)
        {
            if (z1>z2)
            {
                printf("B<A<C");
            }
            else
            {
                printf("A<B<C");
            }

        }
        else
        {
            if (y1>y2)
                {
                    printf("B<A<C");
                }
            else
                {
                    printf("A<B<C");
                }
        }
    }














    if ((ra=rc)&&(ra<rb))
    {
        if (y1==y3)
        {
            if (z1>z3)
            {
                printf("C<A<B");
            }
            else
            {
                printf("A<C<B");
            }

        }
        else
        {
            if (y1>y3)
                {
                   printf("C<A<B");
                }
            else
                {
                   printf("A<C<B");
                }
        }
    }


    if ((ra=rc)&&(ra>rb))
    {
        if (y1==y3)
        {
            if (z1>z3)
            {
                printf("B<C<A");
            }
            else
            {
                printf("B<A<C");
            }

        }
        else
        {
            if (y1>y3)
                {
                   printf("B<C<A");
                }
            else
                {
                   printf("B<A<C");
                }
        }
    }











    if ((rb=rc)&&(ra>rb))
    {
        if (y2==y3)
        {
            if (z2>z3)
            {
                printf("C<B<A");
            }
            else
            {
                printf("B<C<A");
            }

        }
        else
        {
            if (y2>y3)
                {
                   printf("C<B<A");
                }
            else
                {
                   printf("B<C<A");
                }
        }
    }




    if ((rb=rc)&&(ra<rb))
    {
        if (y2==y3)
        {
            if (z2>z3)
            {
                printf("A<C<B");
            }
            else
            {
                printf("A<B<C");
            }

        }
        else
        {
            if (y2>y3)
                {
                   printf("A<C<B");
                }
            else
                {
                   printf("A<B<C");
                }
        }
    }*/




}
