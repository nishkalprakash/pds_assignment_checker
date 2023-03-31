
/*
section 2
roll no:-22EE10056
Name:-rushikesh santosh jadhav
assignment no:-4
Description:-predicting marks and grade*/
#include<stdio.h>
int main()
{
    int n,i;//declarations
    float att,ct,mid,end,total;//declarations
    char c;//declarations
    printf("Enter no. of students:");//asks for data
    scanf("%d",&n);//stores data
    for(i=1;i<=n;i++)//runs loop for n students
    {
        printf("Enter attendence marks of student %d (marks out of 40):",i);//asks for marks
        scanf("%f",&att);//gets attendence marks
        if(att<0 || att>40)
        {
            printf("Enter correct marks for this student again\n");//tells user to enter correct marks
            i--;//decrement
            continue;
        }
        printf("Enter class test marks of student %d (marks out of 20):",i);//asks for marks
        scanf("%f",&ct);//gets attendence marks
        if(ct<0 || ct>20)
        {
            printf("Enter correct marks for this student again\n");//tells user to enter correct marks
            i--;//decrement
            continue;
        }
        printf("Enter midsem marks of student %d (marks out of 60):",i);//asks for marks
        scanf("%f",&mid);//gets attendence marks
        if(mid<0 || mid>60)
        {
            printf("Enter correct marks for this student again\n");//tells user to enter correct marks
            i--;//decrement
            continue;
        }
        printf("Enter endsem marks of student %d (marks out of 100):",i);//asks for marks
        scanf("%f",&end);//gets attendence marks
        if(end<0 || end>100)
        {
            printf("Enter correct marks for this student again\n");//tells user to enter correct marks
            i--;//decrement
            continue;
        }

        total=(att/4.0)+(ct)+(mid/2.0)+(end/2.5);//calculates total
        printf("student %d\n",i);
        printf("Total marks:%f\n",total);//prints total marks
        if(total>=90)//if-else for printing grade
        {
            printf("Grade:EX");
        }
        else if(total>=80)
        {
            printf("Grade:A");
        }
        else if(total>=70)
        {
            printf("Grade:B");
        }
        else if(total>=60)
        {
            printf("Grade:C");
        }
        else if(total>=50)
        {
            printf("Grade:D");
        }
        else if(total>=35)
        {
            printf("Grade:P");
        }
        else
        {
            printf("Grade:F");
        }
        printf("\n");


    }
    return 0;
}
