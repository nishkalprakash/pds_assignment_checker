/*
rakesh tarendra
21MT30031
*/
#include <stdio.h>
#include<math.h>


int main() {
        float x1,x2,x3;
        float y1,y2,y3;
        float d1,d2,d3;

        printf("Enter the cordinate of first point (x,y) :- ");
        scanf("%f %f",&x1, &y1);
        printf("Enter the cordinate of second point (x,y) :- ");
        scanf("%f %f",&x2, &y2);
       printf("Enter the cordinate of third point (x,y) :- ");
        scanf("%f %f",&x3, &y3);

        //calculate side lengths of tringle.

        d1 = (pow(x1-x2,2) + pow(y1-y2,2));
        d2 = (pow(x2-x3,2) + pow(y2-y3,2));
        d3 = (pow(x3-x1,2) + pow(y3-y1,2));

        float l,m,n;
        if(d1>d2 && d1>d3)
        {
            l=d1;
            if(d2>d3)
            {
                m =d2;
                n=d3;
            }
            else
            {
                m=d3;
                n=d2;
            }
        }
      if(d2>d1 && d2>d3)
        {
            l=d2;
            if(d1>d3)
            {
                m =d1;
                n=d3;
            }
            else
            {
                m=d3;
                n=d1;
            }
        }
        if(d3>d2 && d3>d1)
        {
            l=d3;
            if(d2>d1)
            {
                m =d2;
                n=d1;
            }
            else
            {
                m=d1;
                n=d2;
            }
        }
        //condition for tringle :- sum of any two side is greater then third side and the absolute value of difference between two sides is less then the third reaming side.
        if(!((sqrt(l)<(sqrt(m)+sqrt(n))) && sqrt(l)>(sqrt(m)-sqrt(n))))
        {
            printf("Tringle is not possible with given coordinates.\n");
            return 0;
        }


        if(l == ((m + n))) //Pythagorean theorem for right angled tringles.
        {
            printf("Tringle is right angled.\n");
        }
        //cosine formula : to find the angle b/w two sides.
        //cosA = (b^2 + c^2 - a^2)/(2bc)
        // cosA>0 => acute angle at A
        //cosA<0 => obtuse angle at A
        //cosA =0 => right angle at A
        if(l + m - n < 0 || l + n - m <0 || m + n - l< 0)
        {
            printf("Tringle is obtuse angled.\n");
        }
        else
        {
            if(l != m+n)
            printf("Tringle is acute angled tringle.\n");
        }
    return 0;
}
