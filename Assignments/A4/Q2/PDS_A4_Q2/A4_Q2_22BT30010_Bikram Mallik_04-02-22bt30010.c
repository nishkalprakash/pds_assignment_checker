/*
sec 2
roll- 22BT30010
name- Bikram Mallik
assignment no-4
program to find validity of password
*/
#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if (marks>=90)
    { printf("Ex: ");
        }
    else if (80<= marks <90)
        printf("A: ");
    else if (70<= marks<80)
        printf("B: ");
    else if (60<=marks<70)
        printf("C: ");
    else if (50<=marks<60)
        printf("D: ");
    else if (35<=marks<50);
        printf("P: ");
    else {
            printf ("failed:");
    }
    return 0;

}
