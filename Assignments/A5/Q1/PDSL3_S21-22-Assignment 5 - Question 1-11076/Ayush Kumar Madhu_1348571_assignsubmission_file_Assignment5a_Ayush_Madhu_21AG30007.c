// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>

// Function to swap numbers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort variables using pointers
void arrange(int *p1, int *p2, int *p3)
{
    if (*p1 > *p2 && *p1 > *p3)
    {

        if (*p2 > *p3)
        {
            // p3<p2<p1
            swap(p1, p3);
        }
        else
        {
            // p2<p3<p1
            swap(p1, p2);
            swap(p2, p3);
        }
    }

    else if (*p2 > *p1 && *p2 > *p3)
    {
        if (*p1 > *p3)
        {
            // p3<p1<p2
            swap(p2, p3);
            swap(p1, p2);
        }
        else
        {
            // p1<p3<p2
            swap(p2, p3);
        }
    }

    else // p3 is largest
    {
        if (*p1 > *p2)
        {
            // p2<p1<p3
            swap(p1, p2);
        }
    }
}

// Main Function - The program starts from here
int main()
{
    // Defining variables and taking inputs from user
    int a, b, c;
    typedef int *ptr;
    ptr p1, p2, p3;

    printf("Enter three integers : ");
    scanf("%d %d %d", &a, &b, &c);

    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("\n---Before function call---\n");
    printf("Address of a = %u\n", p1);
    printf("Address of b = %u\n", p2);
    printf("Address of c = %u\n", p3);
    printf("Values of a, b, c = %d, %d, %d\n", a, b, c);

    // Calling function for sorting
    arrange(p1, p2, p3);

    printf("\n---After function call---\n");
    printf("Address of a = %u\n", p1);
    printf("Address of b = %u\n", p2);
    printf("Address of c = %u\n", p3);
    printf("Values of a, b, c = %d, %d, %d\n", a, b, c);

    return 0;
}