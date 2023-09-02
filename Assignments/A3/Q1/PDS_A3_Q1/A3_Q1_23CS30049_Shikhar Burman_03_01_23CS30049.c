//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int a, b, c, d, e, a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5, e1, e2, e3, e4, e5;

    // Input details of 5 students from the user
    printf("Enter details for student 1(keep a space between each):\n");
    scanf("%d %d %d %d %d %d", &a, &a1, &a2, &a3, &a4, &a5);
    printf("Enter details for student 2(keep a space between each):\n");
    scanf("%d %d %d %d %d %d", &b, &b1, &b2, &b3, &b4, &b5);
    printf("Enter details for student 3(keep a space between each):\n");
    scanf("%d %d %d %d %d %d", &c, &c1, &c2, &c3, &c4, &c5);
    printf("Enter details for student 4(keep a space between each):\n");
    scanf("%d %d %d %d %d %d", &d, &d1, &d2, &d3, &d4, &d5);
    printf("Enter details for student 5(keep a space between each):\n");
    scanf("%d %d %d %d %d %d", &e, &e1, &e2, &e3, &e4, &e5);
    
    // Outputing in proper tabular format
    printf("\nTabular Display:\n");
    printf("%d\t%d\t%d\t%d\t%d\t%d\n", a, a1, a2, a3, a4, a5);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n", b, b1, b2, b3, b4, b5);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n", c, c1, c2, c3, c4, c5);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n", d, d1, d2, d3, d4, d5);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n", e, e1, e2, e3, e4, e5);
}