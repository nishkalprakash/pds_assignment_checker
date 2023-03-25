//22ME10091
#include<stdio.h>
int main()
{
    float xa,ya,za,xb,yb,zb,xc,yc, zc;
    printf("A:");
    scanf("%f %f %f", &xa, &ya, &za);
    printf("B:");
    scanf("%f %f %f", &xb, &yb, &zb);
    printf("C:");
    scanf("%f %f %f", &xc, &yc, &zc);
    printf("A(x1,y1,z1) : (%f, %f, %f)", xa, ya, za);
    printf("\nB(x2,y2,z2) : (%f, %f, %f)",xb,yb,zb);
    printf("\nC(x3,y3,z3) : (%f, %f, %f)",xc,yc,zc);
    if( ((xc-xa)/(xa-xb)) == ((yc-ya)/(ya-yb)) && ((xc-xa)/(xa-xb)) == ((zc-za)/(za-zb)))
    {
        printf("\nThe given three points are collinear.\n");
    }
    else
    {
        printf("\nThe given three points are not collinear.\n");
    }
    if(xa<xb)
    {
        if(xa<xc)
        {
            if(xb<xc)
            {
                printf("A(%f, %f, %f)<B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
            }
            else if(xc<xb)
            {
                printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
            }
            else
            {
                if(yb<yc)
                {
                    printf("A(%f, %f, %f)<B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                }
                else if(yc<yb)
                {
                    printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                }
                else
                {
                    if(zb<zc)
                    {
                        printf("A(%f, %f, %f)<B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                    }
                    else if(zc<zb)
                    {
                        printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                    }
                    else
                    {
                        printf("A(%f, %f, %f)<B(%f, %f, %f)=C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                    }
                }
            }
        }
        else if(xc<xa)
        {
            printf("C(%f, %f, %f)<A(%f, %f, %f)<B(%f, %f, %f)",xc,yc,zc,xa,ya,za,xb,yb,zb);
        }
        else
        {
            if(ya<yc)
            {
                printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
            }
            else if(yc<ya)
            {
                printf("C(%f, %f, %f)<A(%f, %f, %f)<B(%f, %f, %f)",xc,yc,zc,xa,ya,za,xb,yb,zb);
            }
            else
            {
                if(za<zc)
                {
                    printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                }
                else if(zc<za)
                {
                    printf("C(%f, %f, %f)<A(%f, %f, %f)<B(%f, %f, %f)",xc,yc,zc,xa,ya,za,xb,yb,zb);
                }
                else
                {
                    printf("A(%f, %f, %f)=C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                }
            }
        }
    }
    else if(xb<xa)
    {
        if(xb<xc)
        {
            if(xa<xc)
            {
                printf("B(%f, %f, %f)<A(%f, %f, %f)<C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
            }
            else if(xc<xa)
            {
                printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
            }
            else
            {
                if(ya<yc)
                {
                    printf("B(%f, %f, %f)<A(%f, %f, %f)<C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
                }
                else if(yc<ya)
                {
                    printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                }
                else
                {
                    if(za<zc)
                    {
                        printf("B(%f, %f, %f)<A(%f, %f, %f)<C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
                    }
                    else if(zc<za)
                    {
                        printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                    }
                    else
                    {
                        printf("B(%f, %f, %f)<A(%f, %f, %f)=C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
                    }
                }
            }
        }
        else if(xc<xb)
        {
            printf("C(%f, %f, %f)<B(%f, %f, %f)<A(%f, %f, %f)",xc,yc,zc,xb,yb,zb,xa,ya,za);
        }
        else
        {
            if(yb<yc)
            {
                printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
            }
            else if(yc<yb)
            {
                printf("C(%f, %f, %f)<B(%f, %f, %f)<A(%f, %f, %f)",xc,yc,zc,xb,yb,zb,xc,yc,zc);
            }
            else
            {
                if(zb<zc)
                {
                    printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                }
                else if(zc<zb)
                {
                    printf("C(%f, %f, %f)<B(%f, %f, %f)<A(%f, %f, %f)",xc,yc,zc,xb,yb,zb,xa,ya,za);
                }
                else
                {
                    printf("B(%f, %f, %f)=C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                }
            }
        }
    }
    else
    {
        if(ya<yb)
        {
            if(xa<xc)
        {
            if(xb<xc)
            {
                printf("A(%f, %f, %f)<B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
            }
            else if(xc<xb)
            {
                printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
            }
            else
            {
                if(yb<yc)
                {
                    printf("A(%f, %f, %f)<B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                }
                else if(yc<yb)
                {
                    printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                }
                else
                {
                    if(zb<zc)
                    {
                        printf("A(%f, %f, %f)<B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                    }
                    else if(zc<zb)
                    {
                        printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                    }
                    else
                    {
                        printf("A(%f, %f, %f)<B(%f, %f, %f)=C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                    }
                }
            }
        }
        else if(xc<xa)
        {
            printf("C(%f, %f, %f)<A(%f, %f, %f)<B(%f, %f, %f)",xc,yc,zc,xa,ya,za,xb,yb,zb);
        }
        else
        {
            if(ya<yc)
            {
                printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
            }
            else if(yc<ya)
            {
                printf("C(%f, %f, %f)<A(%f, %f, %f)<B(%f, %f, %f)",xc,yc,zc,xa,ya,za,xb,yb,zb);
            }
            else
            {
                if(za<zc)
                {
                    printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                }
                else if(zc<za)
                {
                    printf("C(%f, %f, %f)<A(%f, %f, %f)<B(%f, %f, %f)",xc,yc,zc,xa,ya,za,xb,yb,zb);
                }
                else
                {
                    printf("A(%f, %f, %f)=C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                }
            }

        }
        }
         else if(yb<ya)
        {
            if(xb<xc)
        {
            if(xa<xc)
            {
                printf("B(%f, %f, %f)<A(%f, %f, %f)<C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
            }
            else if(xc<xa)
            {
                printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
            }
            else
            {
                if(ya<yc)
                {
                    printf("B(%f, %f, %f)<A(%f, %f, %f)<C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
                }
                else if(yc<ya)
                {
                    printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                }
                else
                {
                    if(za<zc)
                    {
                        printf("B(%f, %f, %f)<A(%f, %f, %f)<C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
                    }
                    else if(zc<za)
                    {
                        printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                    }
                    else
                    {
                        printf("B(%f, %f, %f)<A(%f, %f, %f)=C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
                    }
                }
            }
        }
        else if(xc<xb)
        {
            printf("C(%f, %f, %f)<B(%f, %f, %f)<A(%f, %f, %f)",xc,yc,zc,xb,yb,zb,xa,ya,za);
        }
        else
        {
            if(yb<yc)
            {
                printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
            }
            else if(yc<yb)
            {
                printf("C(%f, %f, %f)<B(%f, %f, %f)<A(%f, %f, %f)",xc,yc,zc,xb,yb,zb,xc,yc,zc);
            }
            else
            {
                if(zb<zc)
                {
                    printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                }
                else if(zc<zb)
                {
                    printf("C(%f, %f, %f)<B(%f, %f, %f)<A(%f, %f, %f)",xc,yc,zc,xb,yb,zb,xa,ya,za);
                }
                else
                {
                    printf("B(%f, %f, %f)=C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                }
            }

        }
        }
        else
        {
            if(za<zb)
            {
                if(xa<xc)
        {
            if(xb<xc)
            {
                printf("A(%f, %f, %f)<B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
            }
            else if(xc<xb)
            {
                printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
            }
            else
            {
                if(yb<yc)
                {
                    printf("A(%f, %f, %f)<B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                }
                else if(yc<yb)
                {
                    printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                }
                else
                {
                    if(zb<zc)
                    {
                        printf("A(%f, %f, %f)<B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                    }
                    else if(zc<zb)
                    {
                        printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                    }
                    else
                    {
                        printf("A(%f, %f, %f)<B(%f, %f, %f)=C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                    }
                }
            }
        }
        else if(xc<xa)
        {
            printf("C(%f, %f, %f)<A(%f, %f, %f)<B(%f, %f, %f)",xc,yc,zc,xa,ya,za,xb,yb,zb);
        }
        else
        {
            if(ya<yc)
            {
                printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
            }
            else if(yc<ya)
            {
                printf("C(%f, %f, %f)<A(%f, %f, %f)<B(%f, %f, %f)",xc,yc,zc,xa,ya,za,xb,yb,zb);
            }
            else
            {
                if(za<zc)
                {
                    printf("A(%f, %f, %f)<C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                }
                else if(zc<za)
                {
                    printf("C(%f, %f, %f)<A(%f, %f, %f)<B(%f, %f, %f)",xc,yc,zc,xa,ya,za,xb,yb,zb);
                }
                else
                {
                    printf("A(%f, %f, %f)=C(%f, %f, %f)<B(%f, %f, %f)",xa,ya,za,xc,yc,zc,xb,yb,zb);
                }
            }
        }

            }
            else if(zb<za)
            {
                if(xb<xc)
        {
            if(xa<xc)
            {
                printf("B(%f, %f, %f)<A(%f, %f, %f)<C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
            }
            else if(xc<xa)
            {
                printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
            }
            else
            {
                if(ya<yc)
                {
                    printf("B(%f, %f, %f)<A(%f, %f, %f)<C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
                }
                else if(yc<ya)
                {
                    printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                }
                else
                {
                    if(za<zc)
                    {
                        printf("B(%f, %f, %f)<A(%f, %f, %f)<C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
                    }
                    else if(zc<za)
                    {
                        printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                    }
                    else
                    {
                        printf("B(%f, %f, %f)<A(%f, %f, %f)=C(%f, %f, %f)",xb,yb,zb,xa,ya,za,xc,yc,zc);
                    }
                }
            }
        }
        else if(xc<xb)
        {
            printf("C(%f, %f, %f)<B(%f, %f, %f)<A(%f, %f, %f)",xc,yc,zc,xb,yb,zb,xa,ya,za);
        }
        else
        {
            if(yb<yc)
            {
                printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
            }
            else if(yc<yb)
            {
                printf("C(%f, %f, %f)<B(%f, %f, %f)<A(%f, %f, %f)",xc,yc,zc,xb,yb,zb,xc,yc,zc);
            }
            else
            {
                if(zb<zc)
                {
                    printf("B(%f, %f, %f)<C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                }
                else if(zc<zb)
                {
                    printf("C(%f, %f, %f)<B(%f, %f, %f)<A(%f, %f, %f)",xc,yc,zc,xb,yb,zb,xa,ya,za);
                }
                else
                {
                    printf("B(%f, %f, %f)=C(%f, %f, %f)<A(%f, %f, %f)",xb,yb,zb,xc,yc,zc,xa,ya,za);
                }
            }
        }
    }

            else
            {
                if(xa<xc)
                {
                    printf("A(%f, %f, %f)=B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                }
                else if(xc<xa)
                {
                    printf("A(%f, %f, %f)=B(%f, %f, %f)>C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                }
                else
                {
                    if(ya<yc)
                    {
                        printf("A(%f, %f, %f)=B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                    }
                    else if(yc<ya)
                    {
                        printf("A(%f, %f, %f)=B(%f, %f, %f)>C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                    }
                    else
                    {
                        if(za<zc)
                        {
                            printf("A(%f, %f, %f)=B(%f, %f, %f)<C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                        }
                        else if(zc<za)
                        {
                            printf("A(%f, %f, %f)=B(%f, %f, %f)>C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);
                        }
                        else{printf("A(%f, %f, %f)=B(%f, %f, %f)=C(%f, %f, %f)",xa,ya,za,xb,yb,zb,xc,yc,zc);}
                    }
                }
            }
        }


    }
    return 0;

}

