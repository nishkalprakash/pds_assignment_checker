/*
1.	Assume that a class has 5 students. Read the Roll number (integer) and Marks out of (100) for the 5 students and display the data nicely formatted. Without using loops and arrays.

Example:
Enter details for student 1: 
         1001    	75    	35    	95    	50    	99
Enter details for student 2: 
        2435    	50    	45    	99    	80    	83
Enter details for student 3: 
        1023    	75    	55    	89    	77    	56
Enter details for student 4: 
        2132    	88    	77    	98    	78    	64
Enter details for student 5: 
        3152    	54    	20    	21     	86   	55

Tabular Display:
        1001    	75    	35    	95    	50    	99
        2435    	50    	45    	99    	80    	83
        1023    	75    	55    	89    	77    	56
        2132    	88    	77    	98    	78    	64
        3152    	54    	20    	21     	86   	55

*/

// Name: Nishkal Prakash
// Roll: 19CS91R05

#include <stdio.h>
int main()
{
    // Variables defined for 5 students
    int r1, r2, r3, r4, r5;
    int r1_m1, r1_m2, r1_m3, r1_m4, r1_m5;
    int r2_m1, r2_m2, r2_m3, r2_m4, r2_m5;
    int r3_m1, r3_m2, r3_m3, r3_m4, r3_m5;
    int r4_m1, r4_m2, r4_m3, r4_m4, r4_m5;
    int r5_m1, r5_m2, r5_m3, r5_m4, r5_m5;

    // Input from user
    printf("Enter details for student 1: \n");
    scanf("%d%d%d%d%d%d", &r1, &r1_m1, &r1_m2, &r1_m3, &r1_m4, &r1_m5);

    if(r1_m1 > 100 || r1_m2 > 100 || r1_m3 > 100 || r1_m4 > 100 || r1_m5 > 100 || r1_m1 < 0 || r1_m2 < 0 || r1_m3 < 0 || r1_m4 < 0 || r1_m5 < 0)
    {
        printf("Invalid marks entered for student 1. Please enter marks between 0 and 100.\n");
        return 0;
    }

    printf("Enter details for student 2: \n");
    scanf("%d%d%d%d%d%d", &r2, &r2_m1, &r2_m2, &r2_m3, &r2_m4, &r2_m5);

    if(r2_m1 > 100 || r2_m2 > 100 || r2_m3 > 100 || r2_m4 > 100 || r2_m5 > 100 || r2_m1 < 0 || r2_m2 < 0 || r2_m3 < 0 || r2_m4 < 0 || r2_m5 < 0)
    {
        printf("Invalid marks entered for student 2. Please enter marks between 0 and 100.\n");
        return 0;
    }
    printf("Enter details for student 3: \n");
    scanf("%d%d%d%d%d%d", &r3, &r3_m1, &r3_m2, &r3_m3, &r3_m4, &r3_m5);

    if(r3_m1 > 100 || r3_m2 > 100 || r3_m3 > 100 || r3_m4 > 100 || r3_m5 > 100 || r3_m1 < 0 || r3_m2 < 0 || r3_m3 < 0 || r3_m4 < 0 || r3_m5 < 0)
    {
        printf("Invalid marks entered for student 3. Please enter marks between 0 and 100.\n");
        return 0;
    }

    printf("Enter details for student 4: \n");
    scanf("%d%d%d%d%d%d", &r4, &r4_m1, &r4_m2, &r4_m3, &r4_m4, &r4_m5);

    if(r4_m1 > 100 || r4_m2 > 100 || r4_m3 > 100 || r4_m4 > 100 || r4_m5 > 100 || r4_m1 < 0 || r4_m2 < 0 || r4_m3 < 0 || r4_m4 < 0 || r4_m5 < 0)
    {
        printf("Invalid marks entered for student 4. Please enter marks between 0 and 100.\n");
        return 0;
    }

    printf("Enter details for student 5: \n");
    scanf("%d%d%d%d%d%d", &r5, &r5_m1, &r5_m2, &r5_m3, &r5_m4, &r5_m5);

    if(r5_m1 > 100 || r5_m2 > 100 || r5_m3 > 100 || r5_m4 > 100 || r5_m5 > 100 || r5_m1 < 0 || r5_m2 < 0 || r5_m3 < 0 || r5_m4 < 0 || r5_m5 < 0)
    {
        printf("Invalid marks entered for student 5. Please enter marks between 0 and 100.\n");
        return 0;
    }

    // Output
    printf("Tabular Display: \n");
    printf("%5d\t%3d\t%3d\t%3d\t%3d\t%3d\n", r1, r1_m1, r1_m2, r1_m3, r1_m4, r1_m5);
    printf("%5d\t%3d\t%3d\t%3d\t%3d\t%3d\n", r2, r2_m1, r2_m2, r2_m3, r2_m4, r2_m5);
    printf("%5d\t%3d\t%3d\t%3d\t%3d\t%3d\n", r3, r3_m1, r3_m2, r3_m3, r3_m4, r3_m5);
    printf("%5d\t%3d\t%3d\t%3d\t%3d\t%3d\n", r4, r4_m1, r4_m2, r4_m3, r4_m4, r4_m5);
    printf("%5d\t%3d\t%3d\t%3d\t%3d\t%3d\n", r5, r5_m1, r5_m2, r5_m3, r5_m4, r5_m5);

    return 0;
}
/* 
Input:
1111     1 2 3 4 5
2222      10 20 30 40 50
3333      100 99 99 99 99
4444      99 100 99 99 99
5555      99  99  100  99  99


Output:
Enter details for student 1: 
1111     1 2 3 4 5
Enter details for student 2: 
2222      10 20 30 40 50
Enter details for student 3: 
3333      100 99 99 99 99
Enter details for student 4: 
4444      99 100 99 99 99
Enter details for student 5: 
5555      99  99  100  99  99
Tabular Display: 
 1111     1       2       3       4       5
 2222    10      20      30      40      50
 3333   100      99      99      99      99
 4444    99     100      99      99      99
 5555    99      99     100      99      99
*/