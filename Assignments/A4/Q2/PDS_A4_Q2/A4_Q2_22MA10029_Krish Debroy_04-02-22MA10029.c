#include <stdio.h>

int main()
{
    /*
    Section 2
    Name : Krish Debroy
    Roll No. : 22MA10029
    Assignment No :- 4
    Description : Program to print grade of n students.
    */


    int n, s_count=1;
    float att, ct, ms, es , total;
    printf("Enter the number of students to be considered :\n");
    scanf("%d",&n);
    while (s_count<=n)
    {
        printf("Enter the marks for student %d :",s_count);
        printf("\nAttendance [40]: ");
        scanf("%f",&att);
        printf("\nCT [20]: ");
        scanf("%f",&ct);
        printf("\nMidsem [60]: ");
        scanf("%f",&ms);
        printf("\nEndsem [100]: ");
        scanf("%f",&es);


        if((att<0.0)||(att>40.0))
        {
            printf("Given marks for attendance are out of range.\n\nRe-");
            continue;
        }
        else
        {
            att/=4;
        }



        if((ct<0.0)||(ct>20.0))
        {
            printf("Given marks for class test are out of range.\n\nRe-");
            continue;
        }
        else





        if((ms<0.0)||(ms>60.0))
        {
            printf("Given marks for Midsems are out of range.\n\nRe-");
            continue;
        }
        else
        {
            ms/=2;
        }




        if((es<0.0)||(es>100.0))
        {
            printf("Given marks for Endsems are out of range.\n\nRe-");
            continue;
        }
        else
        {
            es*=(4.0/10);
        }




        total=(att+ct+es+ms);
        printf("\n\nStudent %d\n",s_count);
        printf("\tTotal marks : %.2f\n", total);
        printf("\tGrade : ");
        if (total>=90.0)
        {
            printf("EX\n\n\n\n");
        }
        else if ((total>=80.0))
        {
            printf("A\n\n\n\n");
        }
        else if ((total>=70.0))
        {
            printf("B\n\n\n\n");
        }
        else if ((total>=60.0))
        {
            printf("C\n\n\n\n");
        }
        else if ((total>=50.0))
        {
            printf("D\n\n\n\n");
        }
        else if ((total>=35.0))
        {
            printf("P\n\n\n\n");
        }
        else
        {
            printf("F\n\n\n\n");
        }

        s_count++;

    }


    return 0;

}

