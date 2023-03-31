/*
 *Section 2
 *Roll No:22IM10028
 *Name:Piyush Kumar Burnwal
 *Assignment No:04
 *Description:>Taking marks of different students of different tests and attendance
              >printing their grade
*/
#include <stdio.h>
int main()
{
    int i=1,n,c=0;
    float att,ct,msem,esem,marks;
    /*att for attendance marks
    ct storing class test marks
    msem for storing marks of endsem
    esem for storing marks of endsem
    marks for computing the final marks and thus marks will be used for prionting the grade
    i is acting as a counter variable for reading and printing the grades of all the n students
    c is taken for displaying the error message if the user has entered a negative marks or any marks out of range
    */

    printf("Enter the number of students: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("Enter the marks for student %d\n",i);
        printf("Attendance [40]: ");
        do{
            if(c>0)
            {
                printf("WRONG INPUT!!PLEASE CORRECT INPUT IN THE RANGE OF 0 TO 40");//giving error message if marks is out of range

            }
            scanf("%f",&att);
            c++;
        }while((att<0)||(att>40));
        c=0;//c made 0 since otherwise it would throw out error message without any reason for marks of different part
        printf("CT [20]: ");
        do{
            if(c>0)
            {
                printf("WRONG INPUT!!PLEASE CORRECT INPUT IN THE RANGE OF 0 TO 20");

            }
            scanf("%f",&ct);
            c++;
        }while((ct<0)||(ct>20));
        c=0;
        printf("Midsem [60]: ");
        do{
            if(c>0)
            {
                printf("WRONG INPUT!!PLEASE CORRECT INPUT IN THE RANGE OF 0 TO 60");

            }
            scanf("%f",&msem);
            c++;
        }while((msem<0)||(msem>60));
        c=0;
        printf("Endsem [100]: ");
        do{
            if(c>0)
            {
                printf("WRONG INPUT!!PLEASE CORRECT INPUT IN THE RANGE OF 0 TO 100");

            }
            scanf("%f",&esem);
            c++;
        }while((esem<0)||(esem>100));
        c=0;
        marks=((att/40.0)*(10.0))+((ct/20.0)*(20.0))+((msem/60.0)*(30.0))+((esem/100.0)*40.0);
        printf("Total marks: %0.2f \n",marks);//using 0.2f to calculate marks uptill 2 decimal places
        //computing the final grade based on marks
        if (marks>=90.00)
        {
            printf("Grade: EX\n");
        }
        else if(marks>=80.00 && marks<90.00)
        {
            printf("Grade: A\n");

        }
        else if(marks>=70.00 && marks<80.00)
        {
            printf("Grade: B\n");

        }
        else if(marks>=60.00 && marks<70.00)
        {
            printf("Grade: C\n");

        }
        else if(marks>=50.00 && marks<60.00)
        {
            printf("Grade: D\n");

        }
        else if(marks>=35.00 && marks<50.00)
        {
            printf("Grade: P\n");

        }
        else
        {
            printf("Grade: F\n");

        }

        i++;





    }
    return 0;
}
