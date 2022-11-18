
// NAME- AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// DEPT. - AGRICULTURE AND FOOD ENGINEERING
// SECTION - 03

#include <stdio.h>
#include <conio.h>

// Defining Structure
struct equation
{
    int d;
    int c;
};


// Main function - The Program starts from here
int main()
{
    struct equation equation1[10], equation2[10], product[100];
    int nTerms1, nTerms2, count = -1;
    int i, j;
    printf("\nEnter Number Of Terms Of 1st polynomial: ");
    scanf("%d", &nTerms1);
    for (i = 0; i < nTerms1; i++)
    {
        printf("\nEnter Degree: ");
        scanf("%d", &equation1[i].d);
        printf("\nEnter Coefficient: ");
        scanf("%d", &equation1[i].c);
    }

    printf("\nEnter Number Of Terms Of 2nd polynomial: ");
    scanf("%d", &nTerms2);
    for (i = 0; i < nTerms2; i++)
    {
        printf("\nEnter Degree: ");
        scanf("%d", &equation2[i].d);
        printf("\nEnter Coefficient: ");
        scanf("%d", &equation2[i].c);
    }
    for (i = 0; i < nTerms1; i++)
    {
        for (j = 0; j < nTerms2; j++)
        {
            product[++count].d = equation1[i].d + equation2[j].d;
            product[count].c = equation1[i].c * equation2[j].c;
        }
    }
    printf("\nThe Product Of Two polynomials Is: \n");
    for (i = 0; i <= count - 1; i++)
    {
        if (product[i].d == product[i + 1].d)
        {
            product[i].c += product[i + 1].c;

            product[i + 1].d = -1;
        }
    }
    for (i = 0; i <= count - 2; i++)
    {
        if (product[i].d == product[i + 2].d)
        {
            product[i].c += product[i + 2].c;

            product[i + 2].d = -1;
        }
    }
    for (i = 0; i <= count; i++)
    {
        if (product[i].d == -1)
        {
            continue;
        }

        if (product[i].d == 0)
        {
            printf("%d ", product[i].c);
        }
        else if (product[i].d == 1)
        {
            printf("%dx ", product[i].c);
        }
        else
        {
            printf("%dx^%d ", product[i].c, product[i].d);
        }
        if (i != count)
            printf("+ ");
    }
    getch();
    return 0;
}