/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 2(a)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int lambo = 0, king , i ; //initialising
    double zebra ; //initialising
    printf("z = "); //asking value of z
    scanf("%lf",&zebra); //taling value of z
    printf("k = "); //asking value of z
    scanf("%d",&king); //taking value of z
    for(i=0 ; i<king ; i++) //starting of for loop
    {
        if(lambo >= 1) // conditional identity if
        {
            zebra = zebra - pow (sqrt(zebra)-1/(i+1),2) ; // formula for z
        }
        else
        {
            zebra = zebra -  sqrt(zebra); //formula for z in else statement
        }
        if (zebra < 0) // conditional identity if
        {
            zebra=-zebra;
        }
        printf("(%lf , %d), " , zebra , i+1);
        if(zebra == 0) // conditional identity if
        { 
        break; // break statement. It stops here and moves to the next iteration
        }
        if(zebra == sqrt(zebra)/2) // conditional identity if
        {
            lambo = lambo + 1; // incrementing it by a value of 1
        }
    }
    return 0;
}