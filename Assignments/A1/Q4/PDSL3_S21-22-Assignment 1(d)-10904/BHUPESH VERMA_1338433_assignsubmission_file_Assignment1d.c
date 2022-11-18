#include <stdio.h>
#include <math.h>

int main(){

    int a,b,x,y,m,n;
    printf("Enter values of three coordinates: ");
    scanf("(%d,%d),(%d,%d),(%d,%d)",&a,&b,&x,&y,&m,&n);

    float d1 = sqrt(((a-x)*(a-x))+((b-y)*(b-y)));
    float d2 = sqrt(((a-m)*(a-m))+((b-n)*(b-n)));
    float d3 = sqrt(((m-x)*(m-x))+((n-y)*(n-y)));

     if((d1 + d2) > d3)
    {
        if((d2 + d3) > d1)
        {
            if((d1 + d3) > d2)
            {
                printf("This is a valid triangle \n");
            }
            else
            {
                printf("This is an invalid triangle \n");
                return 0;
            }
        }
        else
        {
            printf("This is an invalid triangle \n");
            return 0;
        }
    }
    else
    {
        printf("This is an invalid triangle \n");
        return 0;
    }

    d1 = d1*d1;
    d2 = d2*d2;
    d3 = d3*d3;

    if (d1 == d2 + d3 || d2 == d1 + d3 || d3 == d1 + d2){
        printf("This is a Right-angled Triangle \n");
    }
     else if (d1 > d2 + d3 || d2 > d1 + d3 || d3 > d1 + d2){
        printf("This is a Obtuse-angled Triangle \n");
    }
    else{
       printf("This is a Acute-angled Triangle \n");
    }
    return 0;

}
