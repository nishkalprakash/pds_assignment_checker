/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    float l,m,n;
    printf("CHECKING THE TRIANGLE IS VALID OR NOR...!!!");
    printf("Enter the first point P1 :");
    scanf("%d %d",&a,&b);
    printf("Enter the Second point P2 :");
    scanf("%d %d",&c,&d);
    printf("Enter the Third point P3 :");
    scanf("%d %d",&e,&f);

    l = pow(((d-b)*(d-b))+((c-a)*(c-a)),2);
    m = pow(((f-d)*(f-d))+((e-c)*(e-c)),2);
    n = pow(((b-f)*(b-f))+((a-e)*(a-e)),2);
   printf("The sides of the Triangle are %f  %f  %f \n",l,m,n);




    if((l+m)>n)
    {
         printf("Triangle is valid.");
    }

        else if((m + n)>l)
        {
            printf("Triangle is valid.");
        }
           else if((l + n) > m)
            {

                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");

    }

        float x,y,z;
        x=l*l;
        y=m*m;
        z=n*n;

        if(l>m && l>n)
{
    if(x == (y+z))
    printf("This is right-angled");
    else if(x < (y + z))
    printf("This is acute-angled");
    else
    printf("This is obtuse-angled");

}

else if(m>l && m>n)
{
   if(y == x + z)
    printf("This is right-angled");
    else if(y < x + z)
    printf("This is acute-angled");
    else
    printf("This is obtuse-angled");
}
else
{
      if(z == x + y)
    printf("This is right-angled");
    else if(z < x + y)
    printf("This is acute-angled");
    else
    printf("This is obtuse-angled");


}
}
