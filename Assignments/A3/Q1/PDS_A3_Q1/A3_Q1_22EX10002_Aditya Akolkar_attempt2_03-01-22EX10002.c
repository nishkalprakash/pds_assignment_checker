#include <stdio.h>
int main()
{
    int a, b, c, d, e; // program to declare the variables

    //collects input from user
    printf("Enter five numbers: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    //program to check if input has 3 odd
    if(a%2 + b%2 + c%2 + d%2 + e%2 == 3){
        if(a%2==1 && b%2==1 && c%2==1 && d%2==0 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , b, c);}
            else if(a%2==0 && b%2==1 && c%2==1 && d%2==1 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", b , c, d);}
             else if(a%2==0 && b%2==0 && c%2==1 && d%2==1 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", c , d, e);}
             else if(a%2==1 && b%2==0 && c%2==0 && d%2==1 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , d, e);}
             else if(a%2==1 && b%2==1 && c%2==0 && d%2==0 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , b, e);}
             else if(a%2==1 && b%2==1 && c%2==0 && d%2==1 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , b, d);}
             else if(a%2==0 && b%2==1 && c%2==1 && d%2==0 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", b, c, e);}
             else if(a%2==0 && b%2==1 && c%2==0 && d%2==1 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", b , d, c);}
             else if(a%2==1 && b%2==0 && c%2==1 && d%2==0 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , c, e);}
             else if(a%2==1 && b%2==0 && c%2==1 && d%2==1 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , c, d);}


    }

    //program to check if entered number has 3 even
    else if(a%2 + b%2 + c%2 + d%2 + e%2 == 2){
            if(a%2==0 && b%2==0 && c%2==0 && d%2==1 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , b, c);}
            else if(a%2==1 && b%2==0 && c%2==0 && d%2==0 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", b , c, d);}
             else if(a%2==1 && b%2==1 && c%2==0 && d%2==0 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", c , d, e);}
             else if(a%2==0 && b%2==1 && c%2==1 && d%2==0 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , d, e);}
             else if(a%2==0 && b%2==0 && c%2==1 && d%2==1 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , b, e);}
             else if(a%2==0 && b%2==0 && c%2==1 && d%2==0 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , b, d);}
             else if(a%2==1 && b%2==0 && c%2==0 && d%2==1 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", b, c, e);}
             else if(a%2==1 && b%2==0 && c%2==1 && d%2==0 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", b , d, c);}
             else if(a%2==0 && b%2==1 && c%2==0 && d%2==1 && e%2==0)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , c, e);}
             else if(a%2==0 && b%2==1 && c%2==0 && d%2==0 && e%2==1)
            {printf("Smallest 3 odd numbers:\n %d %d %d", a , c, d);

    }

    return 0;

}
}
