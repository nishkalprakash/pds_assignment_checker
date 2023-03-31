/*section 2
Roll No: 22EC10067
Name :   Ratan Kumar
Assignment No:4 */
#include<stdio.h>
#include<math.h>

int main()
{
    int N,student;
    printf("Enter the number of students(0<N<10) : ");
    scanf("%d",&N);
    int Attendence_[40],CT_[20],Midsem_[60],Endsem_[100];
for(int i=1; i<=N; i++)
    {
    printf(" Attendence_[40]: ");
    scanf("%d",&Attendence_[40]);
    printf(" CT_[20]: ");
    scanf("%d",&CT_[20]);
    printf(" Midsem_[60]: ");
    scanf("%d",&Midsem_[60]);
    printf(" Endsem_[100]: ");
    scanf("%d",&Endsem_[100]);
    student=0;
   // for(int i=1; i<=N; i++)
    //
        student=i;

     float Total_Marks=(Attendence_[40]*10)/40+ (CT_[20]*20)/20 + (Midsem_[60]*30)/60 + (Endsem_[100]*40)/100;
     printf("Student %d\n",student);


        printf("Total Marks: %f\n",Total_Marks);


        if(Total_Marks>=90)
        {
            printf("EX\n");
        }
        else if(80<=Total_Marks&&Total_Marks<90)
        {
            printf("Grade  A\n");
        }
        else if(70<=Total_Marks&&Total_Marks<80)
        {
            printf("Grade: B\n");
        }
        else if(60<=Total_Marks&&Total_Marks<70)
        {
            printf("Grade: C\n");
        }
        else if(50<=Total_Marks&&Total_Marks<40)
        {
            printf("Grade: D\n");
        }
        else if(35<=Total_Marks&&Total_Marks<50)
        {
            printf("Grade: P\n");
        }
        else if(Total_Marks<35)
        {
            printf("Grade: F\n");
        }
    }
    return 0;
}














