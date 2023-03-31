/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 3
* Description : Program to print Numero Pyramid
*/
#include <stdio.h>
int main()
{
    int n, att, ctest, msem, esem;
    float tmarks = 0.00;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("\nEnter the marks for student %d: ", i+1);
        printf("\nAttendance [40]: ");
        scanf("%d", &att);
        printf("CT [20]: ");
        scanf("%d", &ctest);
        printf("Mid Sems [60]: ");
        scanf("%d", &msem);
        printf("End Sems [100]: ");
        scanf("%d", &esem);
        if((att<0 || att>40)||(ctest<0 || ctest>20)||(msem<0 || msem>60)||(esem<0 || esem>100))
        {
            printf("Invalid marks entered, Check again");
            --i;
        }
        else
        {
        tmarks = (float) ((att/40.0)*10 + (ctest/20.0)*20 + (msem/60.0)*30 + (esem/100.0)*40);
        printf("\nTotal Marks: %.2f\n", tmarks);
        if(tmarks>=90)
        {
            printf("Grade: EX\n\n");
        }
        else if(80<=tmarks && tmarks<90)
        {
            printf("Grade: A\n\n");
        }
        else if(70<=tmarks && tmarks<80)
        {
            printf("Grade: B\n\n");
        }
        else if(60<=tmarks && tmarks<70)
        {
            printf("Grade: C\n\n");
        }
        else if(50<=tmarks && tmarks<60)
        {
            printf("Grade: D\n\n");
        }
        else if(35<=tmarks && tmarks<50)
        {
            printf("Grade: P\n");
        }
        else if(tmarks<35)
        {
            printf("Grade: F\n\n");
        }
        }
    }
}
