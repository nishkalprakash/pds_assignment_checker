/*Section: 02
  Name: Kasireddi Subha Moneesh
  Roll no.: 22CH10032
  Assignment No : 4
  Description : question 2 - to calculate marks and grade of n students.
*/
#include <stdio.h>

void main()
{
    int n,num;
    float attnd,ct,mid,end,tot;
    char grade;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    num=1;
    while(num<=n){

        printf("\nEnter the marks for student %d: \n",num);

        printf("  Attendence [40]: ");
         do{
            scanf("%f",&attnd);
            if ((attnd>=0)&&(attnd<=40)) break;
            printf("  Please enter valid value: ");
           }while(1);

        printf("  CT [20]: ");
         do{
            scanf("%f",&ct);
            if ((ct>=0)&&(ct<=20)) break;
            printf("  Please enter valid value: ");
           }while(1);

        printf("  Midsem [60]: ");
         do{
            scanf("%f",&mid);
            if ((mid>=0)&&(mid<=60)) break;
            printf("  Please enter valid value: ");
           }while(1);

        printf("  Endsem [100]: ");
         do{
            scanf("%f",&end);
            if ((end>=0)&&(end<=100)) break;
            printf("  Please enter valid value: ");
           }while(1);

        tot=(0.25)*attnd+ct+(0.5)*mid+(0.4)*end;

        if (tot>=90) grade='O';  //since grade variable cannot take more than one character

        if ((tot<90)&&(tot>=80)) grade='A';
        if ((tot<80)&&(tot>=70)) grade='B';
        if ((tot<70)&&(tot>=60)) grade='C';
        if ((tot<60)&&(tot>=50)) grade='D';
        if ((tot<50)&&(tot>=35)) grade='P';
        if (tot<35) grade='F';

        if (grade=='O')
            printf("\nStudent %d \n  Total marks: %.2f \n  Grade: EX \n\n",num,tot);
        else
        printf("\nStudent %d \n  Total marks: %.2f \n  Grade: %c \n\n",num,tot,grade);

     ++num;
    }
}
