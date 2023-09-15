// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    unsigned int roll[10];
    float cgpa[10];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n > 10)
        printf("Maximum limit is 10. Terminating.\n");
    else
    {
        printf("Enter roll number and CGPA(keep a space between them) for each student: \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%u %f", &roll[i], &cgpa[i]);
        }

        float sum = 0;

        printf("Roll No.\tCGPA\n");
        for (int i = 0; i < n; i++)
        {
            printf("%u\t\t%f\n", roll[i], cgpa[i]);
            sum += cgpa[i];
        }
        printf("\nAverage CGPA = %f\n", (sum / n));

        int flag[10] = {0}, jflag = 0;

        for (int i = 0; i < n; i++)
        {

            if (flag[i] == 1)
                continue;
            for (int j = i + 1; j < n; j++)
            {
                if (((int)(cgpa[i] * 100)) == ((int)(cgpa[j] * 100)))
                {
                    printf("Roll: %d\tCGPA: %0.2f\n", roll[j], ((int)(cgpa[j] * 100)) / 100.0);
                    flag[j] = 1;
                    jflag = 1;
                }
                if (jflag == 1 && j == n - 1)
                {
                    flag[i] = 1;
                    jflag = 0;
                    printf("Roll: %d\tCGPA: %0.2f\n\n", roll[i], ((int)(cgpa[i] * 100)) / 100.0);
                }
            }
        }
    }
}