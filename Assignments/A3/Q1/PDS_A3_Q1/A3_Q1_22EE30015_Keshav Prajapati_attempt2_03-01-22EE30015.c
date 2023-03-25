//22EE30015
#include<stdio.h>

int main()
{
    //To read 5 integers one by one
    int a, b, c, d, e;
    printf("Please enter 5 integers one by one : \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    //To find number of even or number of odd numbers
    int no_of_even, no_of_odd;
    no_of_even = 0;
    no_of_odd = 0;

    if(a%2==0)
        no_of_even = no_of_even + 1;
    else
        no_of_odd = no_of_even + 1;

    if(b%2==0)
        no_of_even = no_of_even + 1;
    else
        no_of_odd = no_of_odd + 1;

    if(c%2==0)
        no_of_even = no_of_even + 1;
    else
        no_of_odd = no_of_odd + 1;

    if(d%2==0)
        no_of_even = no_of_even + 1;
    else
        no_of_odd = no_of_odd + 1;

    if(e%2==0)
        no_of_even = no_of_even + 1;
    else
        no_of_odd = no_of_odd + 1;

    printf("Number of even numbers : %d \n", no_of_even);
    printf("Number of odd numbers : %d", no_of_odd);

    //To find largest numbers



    //Putting odd numbers in ascending order
    int first, second, third;
    int odd1,  odd2, odd3;

    if(no_of_odd){

    }

    printf("Three odd numbers in ascending order are : %d, %d, %d", first, second, third);

    return 0;
}
