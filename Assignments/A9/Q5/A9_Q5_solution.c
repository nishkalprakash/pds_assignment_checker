// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to find the difference between 2 dates

#include <stdio.h>
#include <math.h>

typedef struct
{
    int d;
    int m;
    int y;
} DATE;

void ReadDate(DATE *x) // Reads the date into the structure using pointers
{
    printf("Enter DATE [DD MM YYYY] : ");
    scanf("%d%d%d", &x->d, &x->m, &x->y);
}

void PrintDate(DATE *x)
{
    printf("DATE : %02d/%02d/%04d \n", x->d, x->m, x->y);
}

int DaysFrom_00_00_0000(DATE *x)
{
    x->m = (x->m + 9) % 12;
    x->y = x->y - x->m / 10;
    return 365*x->y + x->y/4 - x->y/100 + x->y/400 + (x->m*306 + 5)/10 + ( x->d - 1 );
}

void FindDays(DATE *x, DATE *y)
{
    printf("Days:%d\n", abs(DaysFrom_00_00_0000(x) - DaysFrom_00_00_0000(y)));             // prints number of days
}

int main()
{
    DATE X, Y;
    ReadDate(&X); // Note: We send the address of X
    ReadDate(&Y); // Note: We send the address of Y
    PrintDate(&X); // prints DATE in the given format
    PrintDate(&Y);
    FindDays(&X, &Y); // To find and the number of days between X and Y
    return 0;
}
